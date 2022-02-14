
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int len; scalar_t__ wh; } ;
struct params {char* ap; char* mac; char* rtr; int packet_len; scalar_t__ data_try; int frag; int seq; scalar_t__ packet; struct queue* q; } ;
struct ieee80211_frame {int* i_dur; char* i_addr1; char* i_addr2; char* i_addr3; scalar_t__ i_seq; int * i_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct queue*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct params*) ;
 short FUNC_4 (int ,int ) ;

void FUNC_5(struct params *VAR_4)
{
 struct ieee80211_frame *VAR_5;
 short *VAR_6;
 struct queue *VAR_7 = VAR_4->q;
 char *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7);


 FUNC_2(VAR_4->packet, 0, sizeof(VAR_4->packet));
 VAR_5 = (struct ieee80211_frame*) VAR_4->packet;
 VAR_5->i_fc[0] |= VAR_1;
 VAR_5->i_fc[0] |= VAR_0;
 VAR_5->i_fc[1] |= VAR_2;
 VAR_5->i_fc[1] |= VAR_3;

 VAR_5->i_dur[0] = 0x69;

 FUNC_1(VAR_5->i_addr1, VAR_4->ap, 6);
 FUNC_1(VAR_5->i_addr2, VAR_4->mac, 6);
 FUNC_1(VAR_5->i_addr3, VAR_4->rtr, 6);

 VAR_6 = (short*) VAR_5->i_seq;
 *VAR_6 = FUNC_4(VAR_4->seq, VAR_4->frag++);


 VAR_8 = (char*) (VAR_5+1);
 VAR_9 = (char*) (VAR_7->wh+1);
 VAR_10 = VAR_7->len - sizeof(*VAR_5);
 FUNC_1(VAR_8, VAR_9, VAR_10);

 VAR_4->packet_len = sizeof(*VAR_5) + VAR_10;
 VAR_4->data_try = 0;
 FUNC_3(VAR_4);
}
