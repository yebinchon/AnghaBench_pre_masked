
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name2 ;
typedef int name1 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char VAR_4[64], VAR_5[64];

 FUNC_3(VAR_4, sizeof(VAR_4), "g_%s", VAR_2);
 FUNC_3(VAR_5, sizeof(VAR_5), "geom_%s", VAR_2);
 if (FUNC_2(VAR_4) == -1) {

  if (FUNC_1(VAR_5) == -1 || FUNC_2(VAR_4) == -1) {
   if (VAR_3 != VAR_0) {
    FUNC_0(VAR_1,
        "%s module not available!", VAR_5);
   }
  }
 }
}
