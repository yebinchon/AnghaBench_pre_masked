
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int lock; int tick; } ;
struct dm_cache_policy {int dummy; } ;


 int FUNC_0 (struct smq_policy*) ;
 int FUNC_1 (struct smq_policy*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct smq_policy* FUNC_4 (struct dm_cache_policy*) ;
 int FUNC_5 (struct smq_policy*) ;

__attribute__((used)) static void FUNC_6(struct dm_cache_policy *VAR_0, bool VAR_1)
{
 struct smq_policy *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_2->tick++;
 FUNC_5(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);
}
