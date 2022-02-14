
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct stripe_head *VAR_3)
{
 return (FUNC_0(VAR_1, &VAR_3->state) ||
  FUNC_0(VAR_2, &VAR_3->state)) &&
        !FUNC_0(VAR_0, &VAR_3->state);
}
