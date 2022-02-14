
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; scalar_t__ id; } ;
struct TYPE_3__ {char wc; int token; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (char) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int) ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_14 = VAR_11;
 int VAR_15;

 VAR_11 = 0;
 if (VAR_10 == ((void*)0))
  return (VAR_4);





 if (FUNC_1(VAR_10, "...") == 0) {
  return (VAR_1);
 }


 for (VAR_15 = 0; VAR_8[VAR_15].name; VAR_15++) {
  int VAR_16;
  if (FUNC_1(VAR_8[VAR_15].name, VAR_10) != 0) {
   continue;
  }

  VAR_9 = VAR_8[VAR_15].id;


  if (VAR_9 == VAR_2) {
   VAR_7 = VAR_2;
  }


  for (VAR_16 = 0; VAR_6[VAR_16]; VAR_16++) {
   if (VAR_6[VAR_16] != VAR_9)
    continue;
   VAR_7 = VAR_9;
  }

  return (VAR_8[VAR_15].id);
 }


 if (FUNC_0(*VAR_10) || (*VAR_10 == '-' && FUNC_0(VAR_10[1]))) {
  char *VAR_17;
  VAR_13.num = FUNC_3(VAR_10, &VAR_17, 10);
  if (*VAR_17 != 0)
   FUNC_4("malformed number");
  return (VAR_5);
 }





 if (VAR_14 == 1) {
  VAR_13.wc = VAR_10[0];
  return (VAR_0);
 }


 VAR_13.token = FUNC_2(VAR_10);
 VAR_10 = ((void*)0);
 VAR_12 = 0;
 VAR_11 = 0;
 return (VAR_3);
}
