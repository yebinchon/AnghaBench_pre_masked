
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kvm_t ;
struct TYPE_2__ {int n_value; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8 = -1, VAR_9 = 0;
 kvm_t *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);

 while ((VAR_7 = FUNC_2(VAR_5, VAR_6, "hnM:p:r")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_3 = 1;
   break;

  case 'M':
   VAR_11 = VAR_4;
   break;

  case 'p':
   if (FUNC_12(VAR_4, "hci_raw") == 0)
    VAR_8 = 132;
   else if (FUNC_12(VAR_4, "l2cap_raw") == 0)
    VAR_8 = 130;
   else if (FUNC_12(VAR_4, "l2cap") == 0)
    VAR_8 = 131;
   else if (FUNC_12(VAR_4, "rfcomm") == 0)
    VAR_8 = 129;
   else if (FUNC_12(VAR_4, "rfcomm_s") == 0)
    VAR_8 = 128;
   else
    FUNC_13();

   break;

  case 'r':
   VAR_9 = 1;
   break;

  case 'h':
  default:
   FUNC_13();

  }
 }

 if ((VAR_8 == 132 || VAR_8 == 129 || VAR_8 == 128) && VAR_9)
  FUNC_13();






 if (VAR_11 != ((void*)0))
  if (FUNC_11(FUNC_1()) != 0)
   FUNC_0(1, "setgid");

 VAR_10 = FUNC_4(VAR_11);
 if (VAR_10 == ((void*)0))
  return (1);

 switch (VAR_8) {
 case 132:
  FUNC_3(VAR_10, VAR_2[132].n_value);
  break;

 case 130:
  if (VAR_9)
   FUNC_8(VAR_10, VAR_2[VAR_0].n_value);
  else
   FUNC_7(VAR_10, VAR_2[130].n_value);
  break;

 case 131:
  if (VAR_9)
   FUNC_8(VAR_10, VAR_2[VAR_1].n_value);
  else
   FUNC_6(VAR_10, VAR_2[131].n_value);
  break;

 case 129:
  FUNC_9(VAR_10, VAR_2[129].n_value);
  break;

 case 128:
  FUNC_10(VAR_10, VAR_2[128].n_value);
  break;

 default:
  if (VAR_9) {
   FUNC_8(VAR_10, VAR_2[VAR_0].n_value);
   FUNC_8(VAR_10, VAR_2[VAR_1].n_value);
  } else {
   FUNC_3(VAR_10, VAR_2[132].n_value);
   FUNC_7(VAR_10, VAR_2[130].n_value);
   FUNC_6(VAR_10, VAR_2[131].n_value);
   FUNC_10(VAR_10, VAR_2[128].n_value);
   FUNC_9(VAR_10, VAR_2[129].n_value);
  }
  break;
 }

 return (FUNC_5(VAR_10));
}
