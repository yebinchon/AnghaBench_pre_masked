
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {scalar_t__ write_promote_level; scalar_t__ read_promote_level; int cache_alloc; } ;
struct entry {scalar_t__ level; } ;
typedef enum promote_result { ____Placeholder_promote_result } promote_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static enum promote_result FUNC_2(struct smq_policy *VAR_2, struct entry *VAR_3,
       int VAR_4, bool VAR_5)
{
 if (VAR_4 == VAR_1) {
  if (!FUNC_0(&VAR_2->cache_alloc) && VAR_5)
   return VAR_0;

  return FUNC_1(VAR_3->level >= VAR_2->write_promote_level);
 } else
  return FUNC_1(VAR_3->level >= VAR_2->read_promote_level);
}
