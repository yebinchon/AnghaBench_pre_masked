
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smq_policy {int cache_alloc; } ;
struct entry {int dirty; int pending_work; int level; int oblock; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 scalar_t__ VAR_0 ;
 struct entry* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct smq_policy*,struct entry*) ;
 int FUNC_4 (int ) ;
 struct smq_policy* FUNC_5 (struct dm_cache_policy*) ;

__attribute__((used)) static int FUNC_6(struct dm_cache_policy *VAR_1,
       dm_oblock_t VAR_2, dm_cblock_t VAR_3,
       bool VAR_4, uint32_t VAR_5, bool VAR_6)
{
 struct smq_policy *VAR_7 = FUNC_5(VAR_1);
 struct entry *VAR_8;

 VAR_8 = FUNC_0(&VAR_7->cache_alloc, FUNC_1(VAR_3));
 VAR_8->oblock = VAR_2;
 VAR_8->dirty = VAR_4;
 VAR_8->level = VAR_6 ? FUNC_2(VAR_5, VAR_0 - 1) : FUNC_4(VAR_3);
 VAR_8->pending_work = 0;





 FUNC_3(VAR_7, VAR_8);

 return 0;
}
