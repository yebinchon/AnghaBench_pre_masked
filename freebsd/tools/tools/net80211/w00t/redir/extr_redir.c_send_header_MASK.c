
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long uLong ;
struct queue {int len; int id; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct params {char* ap; char* mac; char* rtr; char* iv; char* prga; int packet_len; scalar_t__ data_try; TYPE_4__ dst; TYPE_2__ src; scalar_t__ frag; int seq; scalar_t__ packet; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct ip {int ip_v; int ip_hl; int ip_ttl; int ip_sum; TYPE_3__ ip_dst; TYPE_1__ ip_src; scalar_t__ ip_p; void* ip_id; void* ip_len; } ;
struct ieee80211_frame {int* i_dur; char* i_addr1; char* i_addr2; char* i_addr3; scalar_t__ i_seq; int * i_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 long FUNC_0 (long,char*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned short*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct params*) ;
 short FUNC_6 (int ,int ) ;

void FUNC_7(struct params *VAR_6, struct queue *VAR_7)
{
 struct ieee80211_frame *VAR_8;
 short *VAR_9;
 char *VAR_10;
 struct ip *VAR_11;
 int VAR_12, VAR_13;
 uLong VAR_14 = FUNC_0(0L, VAR_5, 0);
 uLong *VAR_15;


 FUNC_4(VAR_6->packet, 0, sizeof(VAR_6->packet));
 VAR_8 = (struct ieee80211_frame *) VAR_6->packet;
 VAR_8->i_fc[0] |= VAR_1;
 VAR_8->i_fc[0] |= VAR_0;
 VAR_8->i_fc[1] |= VAR_2;
 VAR_8->i_fc[1] |= VAR_4;
 VAR_8->i_fc[1] |= VAR_3;

 VAR_8->i_dur[0] = 0x69;

 FUNC_3(VAR_8->i_addr1, VAR_6->ap, 6);
 FUNC_3(VAR_8->i_addr2, VAR_6->mac, 6);
 FUNC_3(VAR_8->i_addr3, VAR_6->rtr, 6);

 VAR_9 = (short*) VAR_8->i_seq;
 VAR_6->frag = 0;
 VAR_6->seq++;
 *VAR_9 = FUNC_6(VAR_6->seq, VAR_6->frag++);


 VAR_10 = (char*) (VAR_8+1);
 FUNC_3(VAR_10, VAR_6->iv, 3);
 VAR_10 += 4;


 FUNC_3(VAR_10, "\xAA\xAA\x03\x00\x00\x00\x08\x00", 8);


 VAR_11 = (struct ip*) (VAR_10+8);
 VAR_11->ip_v = 4;
 VAR_11->ip_hl = 5;
 VAR_12 = VAR_7->len - sizeof(*VAR_8) - 4 - 4 + 20;
 VAR_11->ip_len = FUNC_1(VAR_12);
 VAR_11->ip_id = FUNC_1(VAR_7->id);
 VAR_11->ip_ttl = 69;
 VAR_11->ip_p = 0;
 VAR_11->ip_src.s_addr = VAR_6->src.s_addr;
 VAR_11->ip_dst.s_addr = VAR_6->dst.s_addr;
 VAR_11->ip_sum = FUNC_2((unsigned short*)VAR_11, 20);


 VAR_12 = 8 + 20;
 VAR_14 = FUNC_0(VAR_14, VAR_10, VAR_12);
 VAR_15 = (uLong*) (VAR_10+VAR_12);
 *VAR_15 = VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_12 + 4; VAR_13++)
  VAR_10[VAR_13] ^= VAR_6->prga[VAR_13];

 VAR_6->packet_len = sizeof(*VAR_8) + 4 + VAR_12 + 4;
 VAR_6->data_try = 0;
 FUNC_5(VAR_6);
}
