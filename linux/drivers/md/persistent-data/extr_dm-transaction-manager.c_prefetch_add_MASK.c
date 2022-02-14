
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefetch_set {scalar_t__* blocks; int lock; } ;
typedef scalar_t__ dm_block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct prefetch_set *VAR_1, dm_block_t VAR_2)
{
 unsigned VAR_3 = FUNC_2(VAR_2);

 FUNC_0(&VAR_1->lock);
 if (VAR_1->blocks[VAR_3] == VAR_0)
  VAR_1->blocks[VAR_3] = VAR_2;

 FUNC_1(&VAR_1->lock);
}
