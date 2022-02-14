
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char const*,int,...) ;

int FUNC_5(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = (VAR_6 & 0111) ? 0777 : 0666;
 if ((VAR_7 = FUNC_4(VAR_5, VAR_2)) < 0)
  return VAR_7;
 if ((VAR_8 = FUNC_4(VAR_4, VAR_3 | VAR_0 | VAR_1, VAR_6)) < 0) {
  FUNC_1(VAR_7);
  return VAR_8;
 }
 VAR_9 = FUNC_2(VAR_7, VAR_8);
 switch (VAR_9) {
 case 129:
  FUNC_3("copy-fd: read returned");
  break;
 case 128:
  FUNC_3("copy-fd: write returned");
  break;
 }
 FUNC_1(VAR_7);
 if (FUNC_1(VAR_8) != 0)
  return FUNC_3("%s: close error", VAR_4);

 if (!VAR_9 && FUNC_0(VAR_4))
  return -1;

 return VAR_9;
}
