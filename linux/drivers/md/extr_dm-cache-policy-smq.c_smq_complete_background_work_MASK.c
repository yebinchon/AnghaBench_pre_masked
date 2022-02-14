
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int lock; } ;
struct policy_work {int dummy; } ;
struct dm_cache_policy {int dummy; } ;


 int FUNC_0 (struct smq_policy*,struct policy_work*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct smq_policy* FUNC_3 (struct dm_cache_policy*) ;

__attribute__((used)) static void FUNC_4(struct dm_cache_policy *VAR_0,
      struct policy_work *VAR_1,
      bool VAR_2)
{
 unsigned long VAR_3;
 struct smq_policy *VAR_4 = FUNC_3(VAR_0);

 FUNC_1(&VAR_4->lock, VAR_3);
 FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_2(&VAR_4->lock, VAR_3);
}
