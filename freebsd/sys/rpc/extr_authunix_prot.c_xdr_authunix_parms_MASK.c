
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct xucred {int cr_uid; int* cr_groups; int cr_ngroups; } ;
typedef int hostbuf ;
typedef int bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int*) ;

bool_t
FUNC_7(XDR *VAR_7, uint32_t *VAR_8, struct xucred *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13;
 char VAR_14[VAR_1];

 if (VAR_7->x_op == VAR_5) {



  FUNC_1(((void*)0), VAR_14, sizeof(VAR_14));
  VAR_10 = FUNC_2(VAR_14);
  if (VAR_10 > 255)
   VAR_10 = 255;
 } else {
  VAR_10 = 0;
 }
 VAR_13 = 0;

 if (!FUNC_6(VAR_7, VAR_8)
     || !FUNC_6(VAR_7, &VAR_10))
  return (VAR_0);




 if (VAR_7->x_op == VAR_5) {
  if (!FUNC_4(VAR_7, VAR_14, VAR_10))
   return (VAR_0);
 } else {
  FUNC_5(VAR_7, FUNC_3(VAR_7) + FUNC_0(VAR_10));
 }

 if (!FUNC_6(VAR_7, &VAR_9->cr_uid))
  return (VAR_0);
 if (!FUNC_6(VAR_7, &VAR_9->cr_groups[0]))
  return (VAR_0);

 if (VAR_7->x_op == VAR_5) {
  VAR_11 = VAR_9->cr_ngroups - 1;
  if (VAR_11 > VAR_2)
   VAR_11 = VAR_2;
 }

 if (!FUNC_6(VAR_7, &VAR_11))
  return (VAR_0);
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_12 + 1 < VAR_6 + 1) {
   if (!FUNC_6(VAR_7, &VAR_9->cr_groups[VAR_12 + 1]))
    return (VAR_0);
  } else {
   if (!FUNC_6(VAR_7, &VAR_13))
    return (VAR_0);
  }
 }

 if (VAR_7->x_op == VAR_4) {
  if (VAR_11 + 1 > VAR_6 + 1)
   VAR_9->cr_ngroups = VAR_6 + 1;
  else
   VAR_9->cr_ngroups = VAR_11 + 1;
 }

 return (VAR_3);
}
