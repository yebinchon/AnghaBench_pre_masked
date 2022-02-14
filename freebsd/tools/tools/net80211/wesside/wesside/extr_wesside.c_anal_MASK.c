
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_frame {int* i_fc; int i_addr2; int i_addr1; scalar_t__ i_seq; } ;
struct TYPE_2__ {int bss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_frame*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct ieee80211_frame*,int) ;
 int FUNC_5 (struct ieee80211_frame*,int) ;
 int FUNC_6 (char*,int) ;
 TYPE_1__ VAR_15 ;

void FUNC_7(unsigned char* VAR_16, int VAR_17, int VAR_18) {
 struct ieee80211_frame* VAR_19 = (struct ieee80211_frame *) VAR_16;
 int VAR_20,VAR_21;
 static int VAR_22 = -1;
 int VAR_23;
 unsigned short *VAR_24;
 int VAR_25 = 0;

 if (VAR_17 < 1) {
  FUNC_6("rd=%d\n", VAR_17);
  FUNC_0(1);
 }

 VAR_20 = VAR_19->i_fc[0] & VAR_6;
 VAR_21 = VAR_19->i_fc[0] & VAR_3;


 if (VAR_14 >= VAR_1) {

  if (FUNC_2(VAR_19->i_addr1, VAR_13, 6) == 0) {
   VAR_25 = 1;
   if (VAR_20 != VAR_5)
    FUNC_3(VAR_18);
  }
 }


 VAR_24 = (unsigned short*) VAR_19->i_seq;
 VAR_23 = (*VAR_24 & VAR_11) >> VAR_12;
 if (VAR_23 == VAR_22 && (VAR_19->i_fc[1] & VAR_10) &&
     VAR_20 != VAR_5) {

  return;
 }
 VAR_22 = VAR_23;


 if (VAR_20 == VAR_7) {
  if(VAR_14 == VAR_0) {
   if (VAR_21 == VAR_2 ||
       VAR_21 == VAR_4) {

        if (FUNC_1(VAR_19, VAR_17)) {
         return;
    }
   }

  }
 }

 if (VAR_14 >= VAR_1) {

  if (VAR_25) {
   FUNC_5(VAR_19, VAR_17);
  }


  if ( ((VAR_19->i_fc[1] & VAR_9) &&
     (FUNC_2(VAR_15.bss, VAR_19->i_addr1, 6) == 0)) ||

     ((VAR_19->i_fc[1] & VAR_8) &&
     (FUNC_2(VAR_15.bss, VAR_19->i_addr2, 6) == 0))
      ) {
   FUNC_4(VAR_19, VAR_17);
  }
 }
}
