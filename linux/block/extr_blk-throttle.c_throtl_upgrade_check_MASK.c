
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct throtl_grp {unsigned long last_check_time; TYPE_1__* td; } ;
struct TYPE_3__ {scalar_t__ limit_index; scalar_t__ throtl_slice; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct throtl_grp*) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct throtl_grp *VAR_2)
{
 unsigned long VAR_3 = VAR_1;

 if (VAR_2->td->limit_index != VAR_0)
  return;

 if (FUNC_3(VAR_2->last_check_time + VAR_2->td->throtl_slice, VAR_3))
  return;

 VAR_2->last_check_time = VAR_3;

 if (!FUNC_4(VAR_3,
      FUNC_0(VAR_2) + VAR_2->td->throtl_slice))
  return;

 if (FUNC_1(VAR_2->td, ((void*)0)))
  FUNC_2(VAR_2->td);
}
