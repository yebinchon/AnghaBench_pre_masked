
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 unsigned int** VAR_9 ;
 unsigned int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int VAR_21 ;
 int FUNC_2 (char) ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int VAR_28 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 () ;
 int VAR_29 ;
 scalar_t__ FUNC_22 (int ,char*) ;
 int FUNC_23 () ;

void FUNC_24(int VAR_30, int VAR_31) {
   FUNC_11();
   FUNC_17();
   VAR_11 = VAR_30;
   if (VAR_11 == 0) {
      VAR_11 = 1;
   }
   VAR_10 = VAR_9[VAR_31];
   VAR_8 = VAR_31;

   for (int VAR_32 = 0; VAR_32 < VAR_24; VAR_32++) {
      unsigned int VAR_33 = VAR_9[VAR_7][VAR_32];
      VAR_9[VAR_6][VAR_32] = VAR_33 == (VAR_0 | VAR_21) ? FUNC_1(VAR_28,VAR_4) : VAR_33;
   }

   FUNC_9(VAR_11);
   FUNC_18();
   FUNC_12(VAR_29, 0);
   FUNC_13(VAR_29, 1);
   FUNC_14(0);
   FUNC_6(0);
   if (FUNC_10()) {
      FUNC_21();
      VAR_14 = 1;
   } else {
      VAR_14 = 0;
   }
   VAR_16 = FUNC_8("TERM");
   if (FUNC_4(VAR_16, "linux"))
      VAR_15 = 20;
   else
      VAR_15 = 5;
   if (FUNC_5(VAR_16, "xterm") || FUNC_4(VAR_16, "vt220")) {
      FUNC_7("\033[H", VAR_23);
      FUNC_7("\033[F", VAR_22);
      FUNC_7("\033[7~", VAR_23);
      FUNC_7("\033[8~", VAR_22);
      FUNC_7("\033OP", FUNC_3(1));
      FUNC_7("\033OQ", FUNC_3(2));
      FUNC_7("\033OR", FUNC_3(3));
      FUNC_7("\033OS", FUNC_3(4));
      FUNC_7("\033[11~", FUNC_3(1));
      FUNC_7("\033[12~", FUNC_3(2));
      FUNC_7("\033[13~", FUNC_3(3));
      FUNC_7("\033[14~", FUNC_3(4));
      FUNC_7("\033[17;2~", FUNC_3(18));
      char VAR_34[3] = "\033a";
      for (char VAR_35 = 'a'; VAR_35 <= 'z'; VAR_35++) {
         VAR_34[1] = VAR_35;
         FUNC_7(VAR_34, FUNC_2('A' + (VAR_35 - 'a')));
      }
   }

   FUNC_20(11, VAR_12);

   FUNC_20(VAR_27, VAR_13);
   FUNC_20(VAR_26, VAR_13);
   FUNC_23();
   if (!FUNC_10())
      VAR_8 = 1;
   FUNC_0(VAR_8);


   FUNC_19(VAR_25, "");
   VAR_17 =



      VAR_18;




   FUNC_15(VAR_1, ((void*)0));


}
