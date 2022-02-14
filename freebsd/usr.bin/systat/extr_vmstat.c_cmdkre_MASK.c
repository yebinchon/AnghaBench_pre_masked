
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dinfo; } ;
struct TYPE_4__ {int generation; int numdevs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (char const*,char const*,int ,int *) ;
 int FUNC_3 (int,char*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

int
FUNC_7(const char *VAR_13, const char *VAR_14)
{
 int VAR_15;

 if (FUNC_6(VAR_13, "run")) {
  VAR_15 = 1;
  FUNC_0(&VAR_10, &VAR_9);
  switch (FUNC_1(((void*)0), &VAR_8)) {
  case -1:
   FUNC_3(1, "%s", VAR_5);
   break;
  case 1:
   VAR_7 = VAR_8.dinfo->numdevs;
   VAR_6 = VAR_8.dinfo->generation;
   VAR_15 = FUNC_2("refresh", ((void*)0), VAR_1, &VAR_4);
   if (VAR_15 == 2)
    FUNC_5();
   break;
  default:
   break;
  }
  VAR_11 = VAR_2;
  return (VAR_15);
 }
 if (FUNC_6(VAR_13, "boot")) {
  VAR_11 = VAR_0;
  FUNC_0(&VAR_12, &VAR_9);
  return (1);
 }
 if (FUNC_6(VAR_13, "time")) {
  VAR_11 = VAR_3;
  return (1);
 }
 if (FUNC_6(VAR_13, "zero")) {
  VAR_15 = 1;
  if (VAR_11 == VAR_2) {
   FUNC_4(&VAR_9);
   switch (FUNC_1(((void*)0), &VAR_8)) {
   case -1:
    FUNC_3(1, "%s", VAR_5);
    break;
   case 1:
    VAR_7 = VAR_8.dinfo->numdevs;
    VAR_6 = VAR_8.dinfo->generation;
    VAR_15 = FUNC_2("refresh",((void*)0), VAR_1, &VAR_4);
    if (VAR_15 == 2)
     FUNC_5();
    break;
   default:
    break;
   }
  }
  return (VAR_15);
 }
 VAR_15 = FUNC_2(VAR_13, VAR_14, VAR_1, &VAR_4);

 if (VAR_15 == 2)
  FUNC_5();

 return(VAR_15);
}
