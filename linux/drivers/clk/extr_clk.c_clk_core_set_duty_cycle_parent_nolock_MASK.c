
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_duty {int dummy; } ;
struct clk_core {int flags; TYPE_1__* parent; int duty; } ;
struct TYPE_2__ {int duty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct clk_duty*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct clk_core *VAR_2,
       struct clk_duty *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->parent &&
     VAR_2->flags & (VAR_0 | VAR_1)) {
  VAR_4 = FUNC_0(VAR_2->parent, VAR_3);
  FUNC_1(&VAR_2->duty, &VAR_2->parent->duty, sizeof(VAR_2->duty));
 }

 return VAR_4;
}
