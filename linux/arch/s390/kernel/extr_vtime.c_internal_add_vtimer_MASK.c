
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {scalar_t__ expires; int entry; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct vtimer_list*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct vtimer_list *VAR_3)
{
 if (FUNC_5(&VAR_2)) {

  FUNC_1(&VAR_0, VAR_3->expires);
  FUNC_1(&VAR_1, 0);
  FUNC_3(&VAR_3->entry, &VAR_2);
 } else {

  VAR_3->expires += FUNC_0(&VAR_1);
  if (FUNC_2((s64) VAR_3->expires <
      (s64) FUNC_0(&VAR_0)))

   FUNC_1(&VAR_0, VAR_3->expires);

  FUNC_4(VAR_3, &VAR_2);
 }
}
