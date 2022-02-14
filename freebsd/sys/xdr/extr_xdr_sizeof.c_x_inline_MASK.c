
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int int32_t ;
typedef void* caddr_t ;
struct TYPE_3__ {scalar_t__ x_op; int * x_private; int x_handy; void* x_base; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static int32_t *
FUNC_2(XDR *VAR_3, u_int VAR_4)
{

 if (VAR_4 == 0) {
  return (((void*)0));
 }
 if (VAR_3->x_op != VAR_2) {
  return (((void*)0));
 }
 if (VAR_4 < (u_int)(uintptr_t)VAR_3->x_base) {

  VAR_3->x_handy += VAR_4;
  return ((int32_t *) VAR_3->x_private);
 } else {

  if (VAR_3->x_private)
   FUNC_0(VAR_3->x_private, VAR_0);
  if ((VAR_3->x_private = (caddr_t) FUNC_1(VAR_4, VAR_0, VAR_1)) == ((void*)0)) {
   VAR_3->x_base = 0;
   return (((void*)0));
  }
  VAR_3->x_base = (caddr_t)(uintptr_t) VAR_4;
  VAR_3->x_handy += VAR_4;
  return ((int32_t *) VAR_3->x_private);
 }
}
