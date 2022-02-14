
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int max_degraded; TYPE_1__* mddev; } ;
struct TYPE_2__ {scalar_t__ reshape_position; int degraded; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct r5conf*) ;

__attribute__((used)) static int FUNC_1(struct r5conf *VAR_1)
{
 int VAR_2;

 if (VAR_1->mddev->reshape_position == VAR_0)
  return VAR_1->mddev->degraded > VAR_1->max_degraded;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 > VAR_1->max_degraded)
  return 1;
 return 0;
}
