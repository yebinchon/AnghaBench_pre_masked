
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * x_private; scalar_t__ x_base; scalar_t__ x_handy; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(XDR *VAR_1)
{

 VAR_1->x_handy = 0;
 VAR_1->x_base = 0;
 if (VAR_1->x_private) {
  FUNC_0(VAR_1->x_private, VAR_0);
  VAR_1->x_private = ((void*)0);
 }
 return;
}
