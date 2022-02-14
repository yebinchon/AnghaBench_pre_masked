
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct throtl_grp {struct throtl_data* td; } ;
struct throtl_data {scalar_t__ throtl_slice; scalar_t__ low_upgrade_time; } ;
struct TYPE_6__ {TYPE_1__* blkcg; } ;
struct TYPE_5__ {int children; } ;
struct TYPE_4__ {TYPE_2__ css; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct throtl_grp*) ;
 TYPE_3__* FUNC_2 (struct throtl_grp*) ;
 int FUNC_3 (struct throtl_grp*) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct throtl_grp *VAR_1)
{
 struct throtl_data *VAR_2 = VAR_1->td;
 unsigned long VAR_3 = VAR_0;





 if (FUNC_4(VAR_3, VAR_2->low_upgrade_time + VAR_2->throtl_slice) &&
     FUNC_4(VAR_3, FUNC_1(VAR_1) +
     VAR_2->throtl_slice) &&
     (!FUNC_3(VAR_1) ||
      !FUNC_0(&FUNC_2(VAR_1)->blkcg->css.children)))
  return 1;
 return 0;
}
