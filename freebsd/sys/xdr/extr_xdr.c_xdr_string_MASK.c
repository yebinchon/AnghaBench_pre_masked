
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;



 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*) ;

bool_t
FUNC_6(XDR *VAR_2, char **VAR_3, u_int VAR_4)
{
 char *VAR_5 = *VAR_3;
 u_int VAR_6;
 u_int VAR_7;
 bool_t VAR_8, VAR_9 = VAR_0;




 switch (VAR_2->x_op) {
 case 128:
  if (VAR_5 == ((void*)0)) {
   return(VAR_1);
  }

 case 129:
  VAR_6 = FUNC_3(VAR_5);
  break;
 case 130:
  break;
 }
 if (! FUNC_5(VAR_2, &VAR_6)) {
  return (VAR_0);
 }
 if (VAR_6 > VAR_4) {
  return (VAR_0);
 }
 VAR_7 = VAR_6 + 1;




 switch (VAR_2->x_op) {

 case 130:
  if (VAR_7 == 0) {
   return (VAR_1);
  }
  if (VAR_5 == ((void*)0)) {
   *VAR_3 = VAR_5 = FUNC_0(VAR_7);
   VAR_9 = VAR_1;
  }
  if (VAR_5 == ((void*)0)) {
   FUNC_2("xdr_string: out of memory");
   return (VAR_0);
  }
  VAR_5[VAR_6] = 0;


 case 129:
  VAR_8 = FUNC_4(VAR_2, VAR_5, VAR_6);
  if ((VAR_2->x_op == 130) && (VAR_8 == VAR_0)) {
   if (VAR_9 == VAR_1) {
    FUNC_1(VAR_5, VAR_7);
    *VAR_3 = ((void*)0);
   }
  }
  return (VAR_8);

 case 128:
  FUNC_1(VAR_5, VAR_7);
  *VAR_3 = ((void*)0);
  return (VAR_1);
 }

 return (VAR_0);
}
