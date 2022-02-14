
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int discard_block_size; int sectors_per_block_shift; int sectors_per_block; } ;
typedef int dm_block_t ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct cache*) ;

__attribute__((used)) static dm_block_t FUNC_2(struct cache *VAR_0)
{
 dm_block_t VAR_1 = VAR_0->discard_block_size;

 if (FUNC_1(VAR_0))
  VAR_1 >>= VAR_0->sectors_per_block_shift;
 else
  VAR_1 = FUNC_0(VAR_1, VAR_0->sectors_per_block);

 return VAR_1;
}
