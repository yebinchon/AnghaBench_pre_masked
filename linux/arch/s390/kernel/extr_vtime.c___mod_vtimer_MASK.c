
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vtimer_list {scalar_t__ expires; scalar_t__ interval; int entry; int function; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vtimer_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (struct vtimer_list*) ;

__attribute__((used)) static int FUNC_6(struct vtimer_list *VAR_1, u64 VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(!VAR_1->function);

 if (VAR_1->expires == VAR_2 && FUNC_5(VAR_1))
  return 1;
 FUNC_3(&VAR_0, VAR_4);
 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5)
  FUNC_2(&VAR_1->entry);
 VAR_1->interval = VAR_3 ? VAR_2 : 0;
 VAR_1->expires = VAR_2;
 FUNC_1(VAR_1);
 FUNC_4(&VAR_0, VAR_4);
 return VAR_5;
}
