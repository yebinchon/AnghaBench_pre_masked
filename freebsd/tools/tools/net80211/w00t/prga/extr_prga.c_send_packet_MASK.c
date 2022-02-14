
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int packet_len; int last; scalar_t__ packet; int data_try; int tx; } ;
struct ieee80211_frame {int * i_fc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (char*,int,int) ;

void FUNC_5(struct params *VAR_1)
{
 int VAR_2;
 struct ieee80211_frame *VAR_3;

 VAR_2 = FUNC_3(VAR_1->tx, VAR_1->packet, VAR_1->packet_len);
 if (VAR_2 == -1)
  FUNC_0(1, "inject()");
 if (VAR_2 != VAR_1->packet_len) {
  FUNC_4("Wrote %d/%d\n", VAR_2, VAR_1->packet_len);
  FUNC_1(1);
 }

 VAR_1->data_try++;
 VAR_3 = (struct ieee80211_frame*) VAR_1->packet;
 VAR_3->i_fc[1] |= VAR_0;

 if (FUNC_2(&VAR_1->last, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");
}
