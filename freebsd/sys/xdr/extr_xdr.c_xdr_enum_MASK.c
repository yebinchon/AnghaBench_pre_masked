
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int enum_t ;
typedef enum sizecheck { ____Placeholder_sizecheck } sizecheck ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,long*) ;
 int FUNC_2 (int *,short*) ;

bool_t
FUNC_3(XDR *VAR_1, enum_t *VAR_2)
{
 enum sizecheck { SIZEVAL };




              if (sizeof (enum sizecheck) == sizeof (long)) {
  return (FUNC_1(VAR_1, (long *)(void *)VAR_2));
 } else if (sizeof (enum sizecheck) == sizeof (int)) {
  return (FUNC_0(VAR_1, (int *)(void *)VAR_2));
 } else if (sizeof (enum sizecheck) == sizeof (short)) {
  return (FUNC_2(VAR_1, (short *)(void *)VAR_2));
 } else {
  return (VAR_0);
 }
}
