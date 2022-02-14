
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_fr_pool {int lock; int free_list; } ;
struct srp_fr_desc {int entry; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct srp_fr_pool *VAR_0, struct srp_fr_desc **VAR_1,
       int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_1[VAR_4]->entry, &VAR_0->free_list);
 FUNC_2(&VAR_0->lock, VAR_3);
}
