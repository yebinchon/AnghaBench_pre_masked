
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,int,int const) ;

int FUNC_2(const char *VAR_9, const mode_t VAR_10)
{
 int VAR_11 = FUNC_1(VAR_9, VAR_7 | VAR_5 | VAR_6 | VAR_3 | VAR_4,
  VAR_10);

 if (VAR_11 < 0) {
  int VAR_12 = VAR_8;
  FUNC_0(VAR_2, "failed to create locked file '%s'", VAR_9);
  switch (VAR_12) {
  case 129:
   return VAR_0;
  case 128:
   return VAR_1;
  default:
   return -1;
  }
 }

 return VAR_11;
}
