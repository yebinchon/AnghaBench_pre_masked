
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (char*) ;

char* FUNC_4(int VAR_0) {
 char* VAR_1 = 0;
 static char VAR_2[14];

 switch (VAR_0) {
 case 135:
  VAR_1 = "";
  break;

 case 134:
  VAR_1 = "WEP";
  break;

 case 132:
  VAR_1 = "WPA1";
  break;

 case 133:
  VAR_1 = "WPA?";
  break;

 case 129:
  VAR_1 = "WPA1-TKIP";
  break;

 case 128:
  VAR_1 = "WPA1-TKIP-PSK";
  break;

 case 131:
  VAR_1 = "WPA1-CCMP";
  break;

 case 130:
  VAR_1 = "WPA1-CCMP-PSK";
  break;

 case 138:
  VAR_1 = "i";
  break;

 case 137:
  VAR_1 = "11i-TKIP";
  break;

 case 136:
  VAR_1 = "11i-TKIP-PSK";
  break;

 default:
  VAR_1 = "FIXME!";
  break;
 }

 FUNC_2(VAR_2, ' ', sizeof(VAR_2));
 FUNC_0(FUNC_3(VAR_1) < sizeof(VAR_2));
 FUNC_1(VAR_2, VAR_1, FUNC_3(VAR_1));
 VAR_2[sizeof(VAR_2)-1] = 0;
 return VAR_2;
}
