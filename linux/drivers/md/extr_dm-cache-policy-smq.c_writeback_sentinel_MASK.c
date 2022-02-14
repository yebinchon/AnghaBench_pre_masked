
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int current_writeback_sentinels; int writeback_sentinel_alloc; } ;
struct entry {int dummy; } ;


 struct entry* FUNC_0 (int *,unsigned int,int ) ;

__attribute__((used)) static struct entry *FUNC_1(struct smq_policy *VAR_0, unsigned VAR_1)
{
 return FUNC_0(&VAR_0->writeback_sentinel_alloc, VAR_1, VAR_0->current_writeback_sentinels);
}
