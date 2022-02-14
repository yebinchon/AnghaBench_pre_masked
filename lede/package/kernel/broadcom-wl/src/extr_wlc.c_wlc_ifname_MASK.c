
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(wlc_param VAR_3, void *VAR_4, void *VAR_5)
{
 char *VAR_6 = (char *) VAR_5;
 int VAR_7 = 0;

 if (VAR_3 & VAR_1) {
  if (FUNC_1(VAR_6) < 16)
   FUNC_0(VAR_2, VAR_6);
  else VAR_7 = -1;
 }
 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_6, VAR_2);
 }

 return VAR_7;
}
