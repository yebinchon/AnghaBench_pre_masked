
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {int dummy; } ;
struct multipath {int pg_init_count; int flags; scalar_t__ hw_handler_name; struct priority_group* current_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct multipath *VAR_2, struct priority_group *VAR_3)
{
 VAR_2->current_pg = VAR_3;


 if (VAR_2->hw_handler_name) {
  FUNC_2(VAR_0, &VAR_2->flags);
  FUNC_2(VAR_1, &VAR_2->flags);
 } else {
  FUNC_1(VAR_0, &VAR_2->flags);
  FUNC_1(VAR_1, &VAR_2->flags);
 }

 FUNC_0(&VAR_2->pg_init_count, 0);
}
