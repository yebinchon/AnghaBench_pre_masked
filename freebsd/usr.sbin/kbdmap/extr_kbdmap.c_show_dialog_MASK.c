
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {char* desc; } ;
typedef int choice ;
typedef int FILE ;


 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct keymap*) ;
 int FUNC_3 (struct keymap*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_11 (char*) ;
 char* VAR_3 ;
 int FUNC_12 (char*) ;
 int VAR_4 ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(struct keymap **VAR_5, int VAR_6)
{
 FILE *VAR_7;
 char *VAR_8, *VAR_9;
 char VAR_10[] = "/tmp/_kbd_lang.XXXX";
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11 == -1) {
  FUNC_8(VAR_4, "Could not open temporary file \"%s\"\n",
      VAR_10);
  FUNC_4(1);
 }
 FUNC_0(&VAR_9, "/usr/bin/dialog --clear --title \"Keyboard Menu\" "
     "--menu \"%d\" 0 0 0", VAR_2);
 if (VAR_0 && FUNC_14(VAR_0, VAR_1))
  FUNC_18(VAR_0);


 VAR_13 = 0;
 for (VAR_12=0; VAR_12<VAR_6; VAR_12++) {




  VAR_13 += FUNC_16(VAR_5[VAR_12]->desc) + 6;
 }


 VAR_13 += FUNC_16(VAR_10) + 3;

 VAR_8 = (char *) FUNC_10(FUNC_16(VAR_9) + VAR_13 + 1);
 FUNC_15(VAR_8, VAR_9);

 for (VAR_12=0; VAR_12<VAR_6; VAR_12++) {
  FUNC_13(VAR_8, " \"");
  FUNC_13(VAR_8, VAR_5[VAR_12]->desc);
  FUNC_13(VAR_8, "\"");
  FUNC_13(VAR_8, " \"\"");
 }

 FUNC_13(VAR_8, " 2>");
 FUNC_13(VAR_8, VAR_10);


 FUNC_17(VAR_8);

 VAR_7 = FUNC_7(VAR_10, "r");
 if (VAR_7) {
  char VAR_14[64];
  if (FUNC_6(VAR_14, sizeof(VAR_14), VAR_7) != ((void*)0)) {

   for (VAR_12=0; VAR_12<VAR_6; VAR_12++) {
    if (!FUNC_14(VAR_14, VAR_5[VAR_12]->desc)) {
     if (!FUNC_14(VAR_3, "kbdmap"))
      FUNC_2(VAR_5[VAR_12]);
     else
      FUNC_3(VAR_5[VAR_12]);
     break;
    }
   }
  } else {
   if (VAR_0 != ((void*)0) && FUNC_14(VAR_0, VAR_1))

    FUNC_18(VAR_1);
  }
  FUNC_5(VAR_7);
 } else
  FUNC_8(VAR_4, "Failed to open temporary file");


 FUNC_12(VAR_10);
 FUNC_9(VAR_8);
 FUNC_9(VAR_9);
 FUNC_1(VAR_11);
}
