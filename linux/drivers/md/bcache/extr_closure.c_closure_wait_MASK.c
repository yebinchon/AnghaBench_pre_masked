
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure_waitlist {int list; } ;
struct closure {int list; int remaining; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct closure*,int ) ;
 int FUNC_3 (int *,int *) ;

bool FUNC_4(struct closure_waitlist *VAR_2, struct closure *VAR_3)
{
 if (FUNC_1(&VAR_3->remaining) & VAR_0)
  return 0;

 FUNC_2(VAR_3, VAR_1);
 FUNC_0(VAR_0 + 1, &VAR_3->remaining);
 FUNC_3(&VAR_3->list, &VAR_2->list);

 return 1;
}
