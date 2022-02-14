
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int cache_stats; int table; } ;
struct policy_work {int dummy; } ;
struct entry {int level; } ;
typedef enum promote_result { ____Placeholder_promote_result } promote_result ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct entry* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct smq_policy*,struct entry*) ;
 int FUNC_2 (struct smq_policy*,int ,struct policy_work**) ;
 int FUNC_3 (struct smq_policy*,struct entry*) ;
 int FUNC_4 (struct smq_policy*,struct entry*,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct entry* FUNC_7 (struct smq_policy*,int ) ;

__attribute__((used)) static int FUNC_8(struct smq_policy *VAR_2, dm_oblock_t VAR_3, dm_cblock_t *VAR_4,
      int VAR_5, bool VAR_6,
      struct policy_work **VAR_7, bool *VAR_8)
{
 struct entry *VAR_9, *VAR_10;
 enum promote_result VAR_11;

 *VAR_8 = 0;

 VAR_9 = FUNC_0(&VAR_2->table, VAR_3);
 if (VAR_9) {
  FUNC_5(&VAR_2->cache_stats, VAR_9->level);

  FUNC_3(VAR_2, VAR_9);
  *VAR_4 = FUNC_1(VAR_2, VAR_9);
  return 0;

 } else {
  FUNC_6(&VAR_2->cache_stats);




  VAR_10 = FUNC_7(VAR_2, VAR_3);

  VAR_11 = FUNC_4(VAR_2, VAR_10, VAR_5, VAR_6);
  if (VAR_11 != VAR_1) {
   FUNC_2(VAR_2, VAR_3, VAR_7);
   *VAR_8 = 1;
  }

  return -VAR_0;
 }
}
