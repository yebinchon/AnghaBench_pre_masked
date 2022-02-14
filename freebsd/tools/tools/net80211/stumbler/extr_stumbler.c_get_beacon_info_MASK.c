
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {unsigned char chan; scalar_t__ wep; scalar_t__* ssid; } ;
struct ieee80211_ie_wpa {unsigned char* wpa_oui; scalar_t__ wpa_type; int wpa_uciphercnt; scalar_t__ wpa_mcipher; int wpa_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (scalar_t__*,unsigned char*,int) ;
 int FUNC_5 (scalar_t__*,char*) ;

void FUNC_6(unsigned char* VAR_16, int VAR_17,
       struct node_info* VAR_18) {

 int VAR_19 = 8 + 2 + 2;

 FUNC_5(VAR_18->ssid, "<hidden>");
 VAR_18->chan = 0;
 VAR_18->wep = VAR_3;

 FUNC_1(VAR_17 >= VAR_19);

 if (FUNC_0(VAR_16) & VAR_10)
  VAR_18->wep = VAR_4;

 VAR_16 += VAR_19;
 VAR_17 -= VAR_19;

 while (VAR_17 > 2) {
                int VAR_20, VAR_21;

                VAR_20 = *VAR_16;
                VAR_16++;
                VAR_21 = *VAR_16;
                VAR_16++;
                VAR_17 -= 2;


                if (VAR_17 < VAR_21) {
                        return;
                }


                if (VAR_20 == 0) {
   if (VAR_21 == 1 && VAR_16[0] == 0) {

   }
   else {
                         FUNC_4(VAR_18->ssid, VAR_16, VAR_21);
                         VAR_18->ssid[VAR_21] = 0;
   }
                }

                else if(VAR_20 == 3) {

                        if( VAR_21 != 1)
    goto next;

                        VAR_18->chan = *VAR_16;
                }

  else if (VAR_20 == 221 && VAR_18->wep == VAR_4) {
   struct ieee80211_ie_wpa* VAR_22;

   VAR_22 = (struct ieee80211_ie_wpa*) VAR_16;
   if (VAR_21 < 6)
    goto next;

   if (!FUNC_3(VAR_22->wpa_oui, "\x00\x50\xf2", 3)) {

   }
   else
    goto next;

   if (VAR_22->wpa_type == VAR_14 &&
       FUNC_2(VAR_22->wpa_version) == VAR_15) {
        int VAR_23, VAR_24;
    unsigned char* VAR_25;

    VAR_18->wep = VAR_5;

    if (VAR_21 < 12)
     goto next;

    VAR_23 = ((unsigned char*) VAR_22->wpa_mcipher)[3];

    VAR_25 = (unsigned char*)VAR_22 + 12 +
          4 * FUNC_2(VAR_22->wpa_uciphercnt);

    if (VAR_21 < (VAR_25 - VAR_16 + 6))
     goto next;

    if ( *((unsigned short*) VAR_25) == 0)
     goto next;

    VAR_25 += 2 + 3;
    VAR_24 = *VAR_25;

    if (VAR_23 == VAR_13) {
     VAR_18->wep = VAR_8;

     if (VAR_24 == VAR_11)
      VAR_18->wep = VAR_9;
    }

    if (VAR_23 == VAR_12) {
     VAR_18->wep = VAR_6;

     if (VAR_24 == VAR_11)
      VAR_18->wep = VAR_7;
    }
   }
  }
  else if (VAR_20 == 48 && VAR_18->wep == VAR_4) {
   unsigned char* VAR_26;


   VAR_26 = VAR_16;

   if (VAR_26[0] == 1 && VAR_26[1] == 0) {
    unsigned short* VAR_27;
    int VAR_28 = 0;

    VAR_26 += 2;
    VAR_18->wep = VAR_0;

    if (!FUNC_3(VAR_26, "\x00\x0f\xac\x02", 4)) {
     VAR_18->wep = VAR_1;
     VAR_28 = 1;
    }

    VAR_26 += 4;
    VAR_27 = (unsigned short*) VAR_26;
    VAR_26 +=2 + *VAR_27*4;

    VAR_27 = (unsigned short*) VAR_26;
    if (*VAR_27) {
     VAR_26 += 2;

     if (!FUNC_3(VAR_26,"\x00\x0f\xac\x02", 4)) {
      if (VAR_28)
       VAR_18->wep = VAR_2;
     }
    }
   }
  }

next:
                VAR_16 += VAR_21;
                VAR_17 -= VAR_21;
 }
}
