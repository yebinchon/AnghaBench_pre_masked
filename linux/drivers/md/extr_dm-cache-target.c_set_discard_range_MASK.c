
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct discard_load_info {int discard_begin; int discard_end; int block_size; TYPE_1__* cache; } ;
typedef int sector_t ;
struct TYPE_2__ {int discard_nr_blocks; int discard_block_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct discard_load_info *VAR_0)
{
 sector_t VAR_1, VAR_2;

 if (VAR_0->discard_begin == VAR_0->discard_end)
  return;




 VAR_1 = VAR_0->discard_begin * VAR_0->block_size;
 VAR_2 = VAR_0->discard_end * VAR_0->block_size;




 VAR_1 = FUNC_0(VAR_1, VAR_0->cache->discard_block_size);
 FUNC_2(VAR_2, VAR_0->cache->discard_block_size);





 if (VAR_2 > FUNC_1(VAR_0->cache->discard_nr_blocks))
  VAR_2 = FUNC_1(VAR_0->cache->discard_nr_blocks);

 for (; VAR_1 < VAR_2; VAR_1++)
  FUNC_3(VAR_0->cache, FUNC_4(VAR_1));
}
