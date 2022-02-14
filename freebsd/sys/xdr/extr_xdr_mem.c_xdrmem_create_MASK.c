
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int int32_t ;
typedef enum xdr_op { ____Placeholder_xdr_op } xdr_op ;
struct TYPE_3__ {int x_op; char* x_private; char* x_base; int x_handy; int * x_ops; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(XDR *VAR_2, char *VAR_3, u_int VAR_4, enum xdr_op VAR_5)
{

 VAR_2->x_op = VAR_5;
 VAR_2->x_ops = ((unsigned long)VAR_3 & (sizeof(int32_t) - 1))
     ? &VAR_1 : &VAR_0;
 VAR_2->x_private = VAR_2->x_base = VAR_3;
 VAR_2->x_handy = VAR_4;
}
