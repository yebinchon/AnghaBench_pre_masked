
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ x_op; int * x_private; int * x_base; } ;
typedef TYPE_1__ XDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(XDR *VAR_1)
{

 if (VAR_1->x_op == VAR_0 && VAR_1->x_base) {
  FUNC_0((struct mbuf *) VAR_1->x_base);
  VAR_1->x_base = ((void*)0);
  VAR_1->x_private = ((void*)0);
 }
}
