
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int *,int *) ;
 int VAR_8 ;
 int * FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ,int) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (char) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int,char**) ;
 int FUNC_13 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_17, char *VAR_18[])
{
 HistEvent VAR_19;
 static EditLine *VAR_20;
 static History *VAR_21;
 bool VAR_22;

 VAR_7 = 1;
 VAR_11 = -1;
 FUNC_14(VAR_10, "octet");
 FUNC_13(VAR_5, VAR_9);

 VAR_22 = FUNC_9(VAR_6);
 if (VAR_22) {
  VAR_20 = FUNC_1("tftp", VAR_13, VAR_14, VAR_12);
  VAR_21 = FUNC_7();
  FUNC_6(VAR_21, &VAR_19, VAR_4, 100);
  FUNC_3(VAR_20, VAR_1, FUNC_6, VAR_21);
  FUNC_3(VAR_20, VAR_0, "emacs");
  FUNC_3(VAR_20, VAR_2, VAR_8);
  FUNC_3(VAR_20, VAR_3, 1);
  FUNC_4(VAR_20, ((void*)0));
 }

 if (VAR_17 > 1) {
  if (FUNC_11(VAR_15) != 0)
   FUNC_5(VAR_16);

  if (FUNC_15(VAR_18[1], "tftp://", 7) == 0) {
   FUNC_16(VAR_18[1]);
   FUNC_5(VAR_16);
  }

  FUNC_12(VAR_17, VAR_18);
 }

 if (FUNC_11(VAR_15) != 0) {
  if (VAR_22)
   FUNC_2(VAR_20);
  (void)FUNC_10('\n');
 }

 FUNC_8();
 FUNC_0(VAR_22, VAR_20, VAR_21, &VAR_19);
}
