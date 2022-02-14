
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int,int ) ;

int FUNC_5(const char *VAR_4, const char *VAR_5, mode_t VAR_6)
{
 int VAR_7, VAR_8;

 if ((VAR_7 = FUNC_1(VAR_4)) < 0)
  return VAR_7;

 if ((VAR_8 = FUNC_4(VAR_5, VAR_2 | VAR_0 | VAR_1, VAR_6)) < 0) {
  FUNC_3(VAR_7);
  return FUNC_2(VAR_3, VAR_5, "open for writing");
 }

 return FUNC_0(VAR_7, VAR_8, 1);
}
