
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int seq_rx; int state; int ap; int mac; int rx; } ;
struct ieee80211_frame {int* i_fc; } ;
typedef int buf ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_frame*,int ) ;
 int FUNC_3 (struct ieee80211_frame*,int ) ;
 int FUNC_4 (struct ieee80211_frame*,struct params*,int) ;
 struct ieee80211_frame* FUNC_5 (char*,int*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*,int) ;

void FUNC_8(struct params *VAR_10)
{
 char VAR_11[4096];
 int VAR_12;
 struct ieee80211_frame *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_7(VAR_10->rx, VAR_11, sizeof(VAR_11));
 if (VAR_12 == -1)
  FUNC_1(1, "sniff()");

 VAR_13 = FUNC_5(VAR_11, &VAR_12);
 if (!VAR_13)
  return;

 FUNC_4(VAR_13, VAR_10, VAR_12);

 if (!FUNC_2(VAR_13, VAR_10->mac))
  return;

 VAR_14 = VAR_13->i_fc[0] & VAR_5;
 VAR_15 = VAR_13->i_fc[0] & VAR_2;


 if (VAR_14 == VAR_4) {
  switch (VAR_15) {
  case 129:
   if (VAR_10->state == VAR_9)
    VAR_10->state = VAR_7;
   break;

  case 128:



   break;

  default:
   FUNC_6("Unknown CTL frame %d\n",
          VAR_15 >> VAR_3);
   FUNC_0();
   break;
  }
  return;
 }

 if (!FUNC_3(VAR_13, VAR_10->ap))
  return;

 if (VAR_14 != VAR_6)
  return;

 if (VAR_15 == VAR_0 ||
     VAR_15 == VAR_1) {
  FUNC_6("Got management! %d\n",
         VAR_15 >> VAR_3);
  VAR_10->seq_rx = -1;
  VAR_10->state = VAR_8;
 }

 return;
}
