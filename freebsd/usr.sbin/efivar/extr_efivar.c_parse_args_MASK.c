
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int,char**,char*,int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,int *,int) ;
 int VAR_18 ;
 int FUNC_11 () ;
 char* VAR_19 ;
 int FUNC_12 (char*) ;
 int VAR_20 ;
 int FUNC_13 (char*,int *) ;

__attribute__((used)) static void
FUNC_14(int VAR_21, char **VAR_22)
{
 int VAR_23, VAR_24;

 while ((VAR_23 = FUNC_4(VAR_21, VAR_22, "aAbdDf:gHlLNn:OpRt:uw",
      VAR_14, ((void*)0))) != -1) {
  switch (VAR_23) {
  case 'a':
   VAR_6++;
   break;
  case 'A':
   VAR_0++;
   break;
  case 'b':
   VAR_8++;
   break;
  case 'd':
   VAR_9++;
   break;
  case 'D':
   VAR_1++;
   break;
  case 'g':
   VAR_11++;
   break;
  case 'H':
   VAR_2++;
   break;
  case 'l':
   VAR_12++;
   break;
  case 'L':
   VAR_3++;
   break;
  case 'n':
   VAR_19 = VAR_15;
   break;
  case 'N':
   VAR_4++;
   break;
  case 'O':
   VAR_13++;
   break;
  case 'p':
   VAR_17++;
   break;
  case 'R':
   VAR_5++;
   break;
  case 't':
   VAR_7 = FUNC_10(VAR_15, ((void*)0), 16);
   break;
  case 'u':
   VAR_18++;
   break;
  case 'w':
   VAR_20++;
   break;
  case 'f':
   FUNC_3(VAR_10);
   VAR_10 = FUNC_9(VAR_15);
   break;
  case 0:
   FUNC_2(1, "unknown or unimplemented option\n");
   break;
  default:
   FUNC_11();
  }
 }
 VAR_21 -= VAR_16;
 VAR_22 += VAR_16;

 if (VAR_21 == 1)
  VAR_19 = VAR_22[0];

 if (VAR_6 + VAR_1 + VAR_20 > 1) {
  FUNC_12("Can only use one of -a (--append), "
      "-D (--delete) and -w (--write)");
  FUNC_11();
 }

 if (VAR_6 + VAR_1 + VAR_20 > 0 && VAR_19 == ((void*)0)) {
  FUNC_12("Must specify a variable for -a (--append), "
      "-D (--delete) or -w (--write)");
  FUNC_11();
 }

 if (VAR_6)
  FUNC_0(VAR_19, ((void*)0));
 else if (VAR_1)
  FUNC_1(VAR_19);
 else if (VAR_20)
  FUNC_13(VAR_19, ((void*)0));
 else if (VAR_3)
  FUNC_5();
 else if (VAR_10) {
  VAR_4 = 1;
  FUNC_6(((void*)0), ((void*)0));
 } else if (VAR_19) {
  VAR_17++;
  FUNC_7(VAR_19);
 } else if (VAR_21 > 0) {
  VAR_17++;
  for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++)
   FUNC_7(VAR_22[VAR_24]);
 } else
  FUNC_8();
}
