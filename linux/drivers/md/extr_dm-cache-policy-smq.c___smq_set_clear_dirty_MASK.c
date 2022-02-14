
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int cache_alloc; } ;
struct entry {int dirty; scalar_t__ pending_work; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct smq_policy*,struct entry*) ;
 int FUNC_1 (int ) ;
 struct entry* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct smq_policy*,struct entry*) ;

__attribute__((used)) static void FUNC_4(struct smq_policy *VAR_0, dm_cblock_t VAR_1, bool VAR_2)
{
 struct entry *VAR_3 = FUNC_2(&VAR_0->cache_alloc, FUNC_1(VAR_1));

 if (VAR_3->pending_work)
  VAR_3->dirty = VAR_2;
 else {
  FUNC_0(VAR_0, VAR_3);
  VAR_3->dirty = VAR_2;
  FUNC_3(VAR_0, VAR_3);
 }
}
