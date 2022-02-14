
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum WlanRegDomainCode { ____Placeholder_WlanRegDomainCode } WlanRegDomainCode ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(enum WlanRegDomainCode VAR_18)
{
 int VAR_19;

 switch (VAR_18) {
 case 136:
  VAR_19 = VAR_9;
  break;
 case 141:
  VAR_19 = VAR_4;
  break;
 case 139:
  VAR_19 = VAR_6;
  break;
 case 138:
  VAR_19 = VAR_7;
  break;
 case 137:
  VAR_19 = VAR_8;
  break;
 case 135:
  VAR_19 = VAR_10;
  break;
 case 133:
  VAR_19 = VAR_12;
  break;
 case 132:
  VAR_19 = VAR_13;
  break;
 case 144:
  VAR_19 = VAR_1;
  break;
 case 143:
  VAR_19 = VAR_2;
  break;
 case 142:
  VAR_19 = VAR_3;
  break;
 case 130:
  VAR_19 = VAR_15;
  break;
 case 131:
  VAR_19 = VAR_14;
  break;
 case 140:
  VAR_19 = VAR_5;
  break;
 case 129:
  VAR_19 = VAR_16;
  break;
 case 128:
  VAR_19 = VAR_17;
  break;
 case 134:
  VAR_19 = VAR_11;
  break;
 default:
  FUNC_0(VAR_0, "unknown snmp regdomain (0x%x) ", VAR_18);
  VAR_19 = VAR_14;
  break;
 }

 return (VAR_19);
}
