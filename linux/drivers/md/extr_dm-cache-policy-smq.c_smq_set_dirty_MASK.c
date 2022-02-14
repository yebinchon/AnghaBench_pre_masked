
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int lock; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct smq_policy*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct smq_policy* FUNC_3 (struct dm_cache_policy*) ;

__attribute__((used)) static void FUNC_4(struct dm_cache_policy *VAR_0, dm_cblock_t VAR_1)
{
 unsigned long VAR_2;
 struct smq_policy *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3, VAR_1, 1);
 FUNC_2(&VAR_3->lock, VAR_2);
}
