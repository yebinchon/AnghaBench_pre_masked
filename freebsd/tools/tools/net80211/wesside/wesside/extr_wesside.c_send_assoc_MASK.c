
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_frame {int* i_fc; } ;
typedef int buf ;
struct TYPE_2__ {int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_frame*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int,unsigned char*,int) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_3 ;

void FUNC_5(int VAR_4) {
 unsigned char VAR_5[128];
 struct ieee80211_frame* VAR_6 = (struct ieee80211_frame*) VAR_5;
 unsigned char* VAR_7;
 int VAR_8;

 FUNC_2(VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_6);
 VAR_6->i_fc[0] |= VAR_2 | VAR_1;

 VAR_7 = (unsigned char*) VAR_6 + sizeof(*VAR_6);
 *VAR_7 = 1 | VAR_0;

 VAR_7 += 2 + 2;


 *VAR_7++ = 0;
 VAR_8 = FUNC_4(VAR_3.ssid);
 *VAR_7++ = VAR_8;
 FUNC_1(VAR_7, VAR_3.ssid, VAR_8);
 VAR_7 += VAR_8;


 *VAR_7++ = 1;
 *VAR_7++ = 4;
 *VAR_7++ = 2;
 *VAR_7++ = 4;
 *VAR_7++ = 11;
 *VAR_7++ = 22;

 FUNC_3(VAR_4, VAR_5, sizeof(*VAR_6) + 2 + 2 + 2 +
       FUNC_4(VAR_3.ssid) + 2 + 4);
}
