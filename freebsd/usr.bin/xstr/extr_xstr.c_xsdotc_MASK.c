
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char* VAR_0 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 FILE *VAR_1 = FUNC_4(VAR_0, "r");
 FILE *VAR_2;

 if (VAR_1 == ((void*)0))
  FUNC_0(5, "%s", VAR_0);
 VAR_2 = FUNC_4("xs.c", "w");
 if (VAR_2 == ((void*)0))
  FUNC_0(6, "xs.c");
 FUNC_5(VAR_2, "char\txstr[] = {\n");
 for (;;) {
  int VAR_3, VAR_4;

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_4 = FUNC_6(VAR_1);
   if (FUNC_3(VAR_1)) {
    FUNC_9("%s", VAR_0);
    FUNC_8(0);
   }
   if (FUNC_2(VAR_1)) {
    FUNC_5(VAR_2, "\n");
    goto out;
   }
   FUNC_5(VAR_2, "0x%02x,", VAR_4);
  }
  FUNC_5(VAR_2, "\n");
 }
out:
 FUNC_5(VAR_2, "};\n");
 FUNC_7(FUNC_1(VAR_2));
 FUNC_7(FUNC_1(VAR_1));
}
