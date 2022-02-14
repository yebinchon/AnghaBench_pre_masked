
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int flags; TYPE_1__* parent; int duty; } ;
struct TYPE_2__ {int duty; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct clk_core *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->parent &&
     VAR_1->flags & VAR_0) {
  VAR_2 = FUNC_1(VAR_1->parent);
  FUNC_2(&VAR_1->duty, &VAR_1->parent->duty, sizeof(VAR_1->duty));
 } else {
  FUNC_0(VAR_1);
 }

 return VAR_2;
}
