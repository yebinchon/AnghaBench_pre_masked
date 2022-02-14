
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;


 long VAR_2 ;

 int FUNC_0 (TYPE_1__*,long*) ;
 int FUNC_1 (TYPE_1__*,long*) ;
 long VAR_3 ;

bool_t
FUNC_2(XDR *VAR_4, bool_t *VAR_5)
{
 long VAR_6;

 switch (VAR_4->x_op) {

 case 129:
  VAR_6 = *VAR_5 ? VAR_3 : VAR_2;
  return (FUNC_1(VAR_4, &VAR_6));

 case 130:
  if (!FUNC_0(VAR_4, &VAR_6)) {
   return (VAR_0);
  }
  *VAR_5 = (VAR_6 == VAR_2) ? VAR_0 : VAR_1;
  return (VAR_1);

 case 128:
  return (VAR_1);
 }

 return (VAR_0);
}
