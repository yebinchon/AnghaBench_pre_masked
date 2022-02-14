
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,int) ;

int
FUNC_6()
{
 int VAR_1 = 1;
 char VAR_2[256];
 char *VAR_3 = "rename() fails to handle race situation\n";

 switch (FUNC_1()) {
 case -1:
  FUNC_3("fork");
  FUNC_0(1);
  break;
 case 0:
  while (VAR_1 > 0) {
   int VAR_4 = 0;
   if (FUNC_4("a/b/c", "1/2/3/c") == 0)
    VAR_4++;
   if (FUNC_4("1/2/3/c", "a/b/c") == 0)
    VAR_4++;
   if (VAR_4) {
    (void) FUNC_5(VAR_2, "c_count: %d,", 256);
    (void) FUNC_5(VAR_2, VAR_3, 256);
    (void) FUNC_2(VAR_0, VAR_2, VAR_4);
   }
  }
  break;
 default:
  while (VAR_1 > 0) {
   int VAR_5 = 0;
   if (FUNC_4("1", "a/b/c/d/e/1") == 0)
    VAR_5++;
   if (FUNC_4("a/b/c/d/e/1", "1") == 0)
    VAR_5++;
   if (VAR_5) {
    (void) FUNC_5(VAR_2, "p_count: %d,", 256);
    (void) FUNC_5(VAR_2, VAR_3, 256);
    (void) FUNC_2(VAR_0, VAR_2, VAR_5);
   }
  }
  break;
 }
 return (0);
}
