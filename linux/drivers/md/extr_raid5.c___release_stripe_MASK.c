
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int count; } ;
struct r5conf {int dummy; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct r5conf*,struct stripe_head*,struct list_head*) ;

__attribute__((used)) static void FUNC_2(struct r5conf *VAR_0, struct stripe_head *VAR_1,
        struct list_head *VAR_2)
{
 if (FUNC_0(&VAR_1->count))
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
