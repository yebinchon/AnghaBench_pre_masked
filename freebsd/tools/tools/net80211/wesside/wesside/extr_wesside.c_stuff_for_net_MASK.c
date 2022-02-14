
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; unsigned char* i_addr3; unsigned char* i_addr1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_frame*,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct ieee80211_frame* VAR_11, int VAR_12) {
 int VAR_13,VAR_14;

 VAR_13 = VAR_11->i_fc[0] & VAR_4;
 VAR_14 = VAR_11->i_fc[0] & VAR_2;

 if (VAR_13 == VAR_3 &&
     VAR_14 == VAR_1) {
  int VAR_15 = VAR_12 - sizeof(struct ieee80211_frame);

  if (VAR_10 == VAR_8) {
   unsigned char VAR_16[6];
   if (VAR_11->i_fc[1] & VAR_6) {
    FUNC_3(VAR_16, VAR_11->i_addr3, 6);
   } else if (VAR_11->i_fc[1] & VAR_5) {
    FUNC_3(VAR_16, VAR_11->i_addr1, 6);
   } else FUNC_0(0);

   if (VAR_16[0] == 0xff || VAR_16[0] == 0x1)
    return;

   FUNC_3(VAR_9, VAR_16, 6);
   FUNC_4("Trying to use MAC=(%s)\n", FUNC_2(VAR_9));
   VAR_10 = VAR_0;
   return;
  }


  if ( (VAR_11->i_fc[1] & VAR_7) &&
      VAR_15 > (4+8+4)) {
   FUNC_1(VAR_11, VAR_12);
  }
 }
}
