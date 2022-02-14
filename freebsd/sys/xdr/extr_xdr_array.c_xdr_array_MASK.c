
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ (* xdrproc_t ) (TYPE_1__*,int *) ;
typedef int u_int ;
typedef int * caddr_t ;
typedef scalar_t__ bool_t ;
struct TYPE_7__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int*) ;

bool_t
FUNC_6(XDR *VAR_3,
    caddr_t *VAR_4,
    u_int *VAR_5,
    u_int VAR_6,
    u_int VAR_7,
    xdrproc_t VAR_8)
{
 u_int VAR_9;
 caddr_t VAR_10 = *VAR_4;
 u_int VAR_11;
 bool_t VAR_12 = VAR_1;
 u_int VAR_13;


 if (!FUNC_5(VAR_3, VAR_5)) {
  return (VAR_0);
 }
 VAR_11 = *VAR_5;
 if ((VAR_11 > VAR_6 || VAR_2/VAR_7 < VAR_11) &&
     (VAR_3->x_op != 128)) {
  return (VAR_0);
 }
 VAR_13 = VAR_11 * VAR_7;





 if (VAR_10 == ((void*)0))
  switch (VAR_3->x_op) {
  case 130:
   if (VAR_11 == 0)
    return (VAR_1);
   *VAR_4 = VAR_10 = FUNC_0(VAR_13);
   if (VAR_10 == ((void*)0)) {
    FUNC_3("xdr_array: out of memory");
    return (VAR_0);
   }
   FUNC_2(VAR_10, 0, VAR_13);
   break;

  case 128:
   return (VAR_1);

  case 129:
   break;
 }




 for (VAR_9 = 0; (VAR_9 < VAR_11) && VAR_12; VAR_9++) {
  VAR_12 = (*VAR_8)(VAR_3, VAR_10);
  VAR_10 += VAR_7;
 }




 if (VAR_3->x_op == 128) {
  FUNC_1(*VAR_4, VAR_13);
  *VAR_4 = ((void*)0);
 }
 return (VAR_12);
}
