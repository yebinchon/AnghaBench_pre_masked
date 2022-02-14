
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefetch_set {scalar_t__* blocks; int lock; } ;
struct dm_block_manager {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct dm_block_manager*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct prefetch_set *VAR_2, struct dm_block_manager *VAR_3)
{
 unsigned VAR_4;

 FUNC_1(&VAR_2->lock);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2->blocks[VAR_4] != VAR_0) {
   FUNC_0(VAR_3, VAR_2->blocks[VAR_4]);
   VAR_2->blocks[VAR_4] = VAR_0;
  }

 FUNC_2(&VAR_2->lock);
}
