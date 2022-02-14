
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,char const*) ;

int FUNC_5(const char *VAR_1)
{
 char VAR_2[32];
 int VAR_3, VAR_4;

 FUNC_4(VAR_2, sizeof(VAR_2), "/sys/class/ieee80211/%s/index", VAR_1);

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return -1;
 VAR_4 = FUNC_3(VAR_3, VAR_2, sizeof(VAR_2) - 1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return -1;
 }
 VAR_2[VAR_4] = '\0';
 FUNC_1(VAR_3);
 return FUNC_0(VAR_2);
}
