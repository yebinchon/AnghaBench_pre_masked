
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int ) ;

int FUNC_5(const char *VAR_2)
{




 int VAR_3, VAR_4 = -1;

 if ((VAR_3 = FUNC_4(VAR_2, VAR_1)) < 0) {
  FUNC_1(VAR_0, "failed to open directory '%s' for fsync", VAR_2);
  return -1;
 }

 if ((VAR_4 = FUNC_3(VAR_3)) < 0)
  FUNC_1(VAR_0, "failed to fsync directory '%s'", VAR_2);

 FUNC_2(VAR_3);
 return VAR_4;

}
