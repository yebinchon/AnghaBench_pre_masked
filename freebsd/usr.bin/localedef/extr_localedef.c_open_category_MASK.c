
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,char*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;

FILE *
FUNC_9(void)
{
 FILE *VAR_4;

 if (VAR_3) {
  (void) FUNC_7("Writing category %s: ", FUNC_1());
  (void) FUNC_4(VAR_2);
 }


 if (!VAR_0)
  (void) FUNC_6(FUNC_2(FUNC_0()), 0755);





 VAR_4 = FUNC_5(FUNC_0(), "w");
 if (VAR_4 == ((void*)0)) {
  FUNC_3("%s", FUNC_8(VAR_1));
  return (((void*)0));
 }
 return (VAR_4);
}
