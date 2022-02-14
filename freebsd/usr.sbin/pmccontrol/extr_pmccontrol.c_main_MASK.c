
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcc_op {int op_cpu; int op_pmc; int op_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pmcc_op*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_12 ;
 struct pmcc_op* FUNC_8 (int) ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,char**,int ) ;
 int VAR_16 ;
 int FUNC_16 (char*,int ) ;

int
FUNC_17(int VAR_17, char **VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 char *VAR_24;
 struct pmcc_op *VAR_25;







 VAR_21 = VAR_5;
 VAR_20 = VAR_11;
 VAR_19 = 0;

 FUNC_1(&VAR_12);

 while ((VAR_22 = FUNC_7(VAR_17, VAR_18, ":c:d:e:lLs")) != -1)
  switch (VAR_22) {
  case 'L':
   if (VAR_20 != VAR_11) {
    VAR_19 = 1;
    break;
   }
   VAR_20 = 129;
   break;

  case 'c':
   if (VAR_20 != VAR_11 &&
       VAR_20 != 131) {
    VAR_19 = 1;
    break;
   }
   VAR_20 = 131;

   if (*VAR_14 == VAR_6)
    VAR_21 = VAR_5;
   else {
    VAR_21 = FUNC_15(VAR_14, &VAR_24, 0);
    if (*VAR_24 != '\0' || VAR_21 < 0)
     FUNC_5(VAR_0,
         "\"%s\" is not a valid CPU id",
         VAR_14);
   }
   break;

  case 'd':
  case 'e':
   if (VAR_20 != VAR_11 &&
       VAR_20 != 131) {
    VAR_19 = 1;
    break;
   }
   VAR_20 = 131;

   if (*VAR_14 == VAR_10)
    VAR_23 = VAR_9;
   else {
    VAR_23 = FUNC_15(VAR_14, &VAR_24, 0);
    if (*VAR_24 != '\0' || VAR_23 < 0)
     FUNC_5(VAR_0,
         "\"%s\" is not a valid PMC id",
         VAR_14);
   }

   if ((VAR_25 = FUNC_8(sizeof(*VAR_25))) == ((void*)0))
    FUNC_4(VAR_2, "Out of memory");

   VAR_25->op_cpu = VAR_21;
   VAR_25->op_pmc = VAR_23;
   VAR_25->op_op = VAR_22 == 'd' ? VAR_7 :
       VAR_8;

   FUNC_2(&VAR_12, VAR_25, VAR_13);
   break;

  case 'l':
   if (VAR_20 != VAR_11) {
    VAR_19 = 1;
    break;
   }
   VAR_20 = 130;
   break;

  case 's':
   if (VAR_20 != VAR_11) {
    VAR_19 = 1;
    break;
   }
   VAR_20 = 128;
   break;

  case ':':
   FUNC_5(VAR_4,
       "Missing argument to option '-%c'", VAR_15);
   break;

  case '?':
   FUNC_16("Unrecognized option \"-%c\"", VAR_15);
   FUNC_5(VAR_4, "%s", VAR_16);
   break;

  default:
   VAR_19 = 1;
   break;

  }

 if (VAR_20 == VAR_11)
  (void) FUNC_5(VAR_4, "%s", VAR_16);

 if (VAR_19)
  FUNC_6(VAR_4);

 if (FUNC_9() < 0)
  FUNC_4(VAR_3,
      "Initialization of the pmc(3) library failed");

 switch (VAR_20) {
 case 130:
  VAR_19 = FUNC_12();
  break;
 case 129:
  VAR_19 = FUNC_11();
  break;
 case 128:
  VAR_19 = FUNC_14();
  break;
 case 131:
  if (FUNC_0(&VAR_12))
   FUNC_5(VAR_4,
       "No PMCs specified to enable or disable");
  VAR_19 = FUNC_10(&VAR_12);
  break;
 default:
  FUNC_3(0);

 }

 if (VAR_19 != 0)
  FUNC_4(VAR_1, "Command failed");
 FUNC_6(0);
}
