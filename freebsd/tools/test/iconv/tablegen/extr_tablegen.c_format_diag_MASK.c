
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_1(int VAR_5)
{
 const char *VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9, *VAR_10;

 switch (VAR_5) {
 case 128:
  VAR_6 = "EINVAL ";
  break;
 case 129:
  VAR_6 = "EILSEQ ";
  break;
 case 130:
  VAR_6 = "E2BIG ";
  break;
 default:
  VAR_6 = "UNKNOWN ";
  break;
 }

 VAR_7 = (VAR_4 & VAR_2) ? "U2M " : "";
 VAR_9 = (VAR_4 & VAR_1) ? "M2W " : "";
 VAR_8 = (VAR_4 & VAR_0) ? "M2U " : "";
 VAR_10 = (VAR_4 & VAR_3) ? "W2M " : "";

 FUNC_0("%s%s%s%s%s", VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);
}
