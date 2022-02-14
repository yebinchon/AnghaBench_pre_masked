
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct TYPE_3__ {struct sctp_paramhdr* Asconf; } ;
struct sctp_nat_msg {int chunk_length; TYPE_2__* sctp_hdr; TYPE_1__ sctpchnk; } ;
struct libalias {int dummy; } ;
struct TYPE_4__ {int v_tag; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sctp_paramhdr* FUNC_2 (struct sctp_paramhdr*) ;


 int VAR_3 ;
 int FUNC_3 (char*,int ,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct libalias *VAR_5, struct sctp_nat_msg *VAR_6, uint32_t *VAR_7, uint32_t *VAR_8, int VAR_9)
{


 struct sctp_vtag_param {
  struct sctp_paramhdr ph;
  uint32_t local_vtag;
  uint32_t remote_vtag;
 } __attribute__((packed));

 struct sctp_vtag_param *VAR_10;
 struct sctp_paramhdr *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = 1;
 VAR_11 = VAR_6->sctpchnk.Asconf;
 VAR_13 = FUNC_0(FUNC_4(VAR_11->param_length));
 VAR_12 = VAR_6->chunk_length;

 while((VAR_12 >= VAR_13) && (VAR_12 >= VAR_3)) {
  if (FUNC_4(VAR_11->param_type) == 0xC007) {
   VAR_10 = (struct sctp_vtag_param *) VAR_11;
   switch (VAR_9) {



   case 129:
    *VAR_8 = VAR_10->local_vtag;
    *VAR_7 = VAR_10->remote_vtag;
    break;
   case 128:
    *VAR_8 = VAR_10->remote_vtag;
    *VAR_7 = VAR_10->local_vtag;
    break;
   }
   return (1);
  }

  VAR_12 -= VAR_13;
  if (VAR_12 < VAR_2) return (0);

  VAR_11 = FUNC_2(VAR_11);
  VAR_13 = FUNC_0(FUNC_4(VAR_11->param_length));
  if (++VAR_14 > VAR_4) {
   FUNC_1(VAR_1,
       FUNC_3("Parameter parse limit exceeded (GetAsconfVtags)",
    VAR_6->sctp_hdr->v_tag, VAR_4, VAR_9));
   return (0);
  }
 }
 return (0);
}
