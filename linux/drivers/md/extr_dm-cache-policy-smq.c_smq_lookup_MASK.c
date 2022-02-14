
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int lock; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct smq_policy*,int ,int *,int,int,int *,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct smq_policy* FUNC_3 (struct dm_cache_policy*) ;

__attribute__((used)) static int FUNC_4(struct dm_cache_policy *VAR_0, dm_oblock_t VAR_1, dm_cblock_t *VAR_2,
        int VAR_3, bool VAR_4,
        bool *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct smq_policy *VAR_8 = FUNC_3(VAR_0);

 FUNC_1(&VAR_8->lock, VAR_7);
 VAR_6 = FUNC_0(VAR_8, VAR_1, VAR_2,
       VAR_3, VAR_4,
       ((void*)0), VAR_5);
 FUNC_2(&VAR_8->lock, VAR_7);

 return VAR_6;
}
