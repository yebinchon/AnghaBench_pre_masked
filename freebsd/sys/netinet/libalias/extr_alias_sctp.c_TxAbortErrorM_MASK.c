
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctphdr {scalar_t__ checksum; scalar_t__ v_tag; void* dest_port; void* src_port; } ;
struct TYPE_6__ {TYPE_1__* Init; } ;
struct sctp_nat_msg {TYPE_4__* ip_hdr; TYPE_3__* sctp_hdr; TYPE_2__ sctpchnk; } ;
struct sctp_nat_assoc {int l_addr; int a_addr; scalar_t__ l_vtag; scalar_t__ g_vtag; } ;
struct sctp_error_cause {void* code; void* length; } ;
struct sctp_chunkhdr {int chunk_flags; void* chunk_length; int chunk_type; } ;
struct libalias {int dummy; } ;
struct ip {int ip_hl; int ip_ttl; int ip_dst; int ip_sum; int ip_src; int ip_p; scalar_t__ ip_off; int ip_id; void* ip_len; scalar_t__ ip_tos; int ip_v; } ;
struct TYPE_8__ {int ip_src; int ip_dst; int ip_id; int ip_v; void* ip_len; } ;
struct TYPE_7__ {void* src_port; void* dest_port; scalar_t__ v_tag; } ;
struct TYPE_5__ {scalar_t__ initiate_tag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,char*,char*,int,int ,int,int ,int ) ;
 int FUNC_3 (int,unsigned char*,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ip*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,struct ip*,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static void
FUNC_11(struct libalias *VAR_12, struct sctp_nat_msg *VAR_13, struct sctp_nat_assoc *VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17 = sizeof(struct sctphdr) + sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_error_cause);
 int VAR_18 = sizeof(struct ip) + VAR_17;
 int VAR_19 = 1;
 char VAR_20[VAR_18];
 char VAR_21[VAR_0];

 if (FUNC_10(VAR_13->ip_hdr->ip_len) < VAR_18) {
  VAR_19 = 0;
  VAR_18 = VAR_18 - sizeof(struct sctp_error_cause);
  VAR_17 = VAR_17 - sizeof(struct sctp_error_cause);
 }

 struct ip* VAR_22 = (struct ip *) VAR_20;
 struct sctphdr* VAR_23 = (struct sctphdr *) ((char *) VAR_22 + sizeof(*VAR_22));
 struct sctp_chunkhdr* VAR_24 = (struct sctp_chunkhdr *) ((char *) VAR_23 + sizeof(*VAR_23));
 struct sctp_error_cause* VAR_25 = (struct sctp_error_cause *) ((char *) VAR_24 + sizeof(*VAR_24));


 VAR_22->ip_v = VAR_13->ip_hdr->ip_v;
 VAR_22->ip_hl = 5;
 VAR_22->ip_tos = 0;
 VAR_22->ip_len = FUNC_4(VAR_18);
 VAR_22->ip_id = VAR_13->ip_hdr->ip_id;
 VAR_22->ip_off = 0;
 VAR_22->ip_ttl = 255;
 VAR_22->ip_p = VAR_1;






 VAR_24->chunk_type = (VAR_15 & VAR_10) ? VAR_2 : VAR_7;
 VAR_24->chunk_flags = 0x02;
 if (VAR_19) {
  VAR_25->code = FUNC_4((VAR_15 & 131) ? 0x00b1 : 0x00b0);
  VAR_25->length = FUNC_4(sizeof(struct sctp_error_cause));
  VAR_24->chunk_length = FUNC_4(sizeof(*VAR_24) + sizeof(struct sctp_error_cause));
 } else {
  VAR_24->chunk_length = FUNC_4(sizeof(*VAR_24));
 }


 switch (VAR_15) {
 case 131:
  VAR_24->chunk_flags |= VAR_3;
  VAR_23->v_tag = VAR_13->sctp_hdr->v_tag;
  break;
 case 129:
  VAR_23->v_tag = (VAR_16 == VAR_9) ? VAR_14->g_vtag : VAR_14->l_vtag ;
  break;
 case 128:
  VAR_23->v_tag = VAR_13->sctp_hdr->v_tag;
  break;
 case 130:
  VAR_23->v_tag = VAR_13->sctpchnk.Init->initiate_tag;
  break;
 }


 if (VAR_15 == 128) {
  VAR_22->ip_src = (VAR_16 == VAR_9) ? VAR_13->ip_hdr->ip_src : VAR_14->a_addr;
  VAR_22->ip_dst = (VAR_16 == VAR_9) ? VAR_14->l_addr : VAR_13->ip_hdr->ip_dst;
  VAR_23->src_port = VAR_13->sctp_hdr->src_port;
  VAR_23->dest_port = VAR_13->sctp_hdr->dest_port;
 } else {
  VAR_22->ip_src = VAR_13->ip_hdr->ip_dst;
  VAR_22->ip_dst = VAR_13->ip_hdr->ip_src;
  VAR_23->src_port = VAR_13->sctp_hdr->dest_port;
  VAR_23->dest_port = VAR_13->sctp_hdr->src_port;
 }


 VAR_22->ip_sum = FUNC_5(VAR_22);


 VAR_23->checksum = 0;
 VAR_23->checksum = FUNC_7(FUNC_3(0xffffffff, (unsigned char *) VAR_23, VAR_17));

 FUNC_8(VAR_13->ip_hdr, VAR_22, VAR_18);

 FUNC_1(VAR_8,FUNC_2("%s %s 0x%x (->%s:%u vtag=0x%x crc=0x%x)\n",
  ((VAR_15 == 128) ? "Sending" : "Replying"),
  ((VAR_15 & VAR_11) ? "ErrorM" : "AbortM"),
  (VAR_19 ? FUNC_10(VAR_25->code) : 0),
  FUNC_6(VAR_22->ip_dst, FUNC_0(VAR_21)),
  FUNC_10(VAR_23->dest_port),
  FUNC_9(VAR_23->v_tag), FUNC_9(VAR_23->checksum)));
}
