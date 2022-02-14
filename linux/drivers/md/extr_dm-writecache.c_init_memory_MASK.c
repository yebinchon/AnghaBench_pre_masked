
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_writecache {size_t n_blocks; int * entries; int block_size; int memory_map_size; } ;
struct TYPE_2__ {int magic; int seq_count; int n_blocks; int block_size; int version; int * padding; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,size_t*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (struct dm_writecache*) ;
 int FUNC_6 (struct dm_writecache*,int *,int,int) ;
 int FUNC_7 (struct dm_writecache*) ;
 int FUNC_8 (struct dm_writecache*) ;
 int FUNC_9 (struct dm_writecache*) ;
 int FUNC_10 (struct dm_writecache*,int *,int) ;

__attribute__((used)) static int FUNC_11(struct dm_writecache *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->memory_map_size, VAR_2->block_size, &VAR_2->n_blocks, ((void*)0));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(FUNC_5(VAR_2)->padding); VAR_3++)
  FUNC_4(FUNC_5(VAR_2)->padding[VAR_3], FUNC_3(0));
 FUNC_4(FUNC_5(VAR_2)->version, FUNC_2(VAR_1));
 FUNC_4(FUNC_5(VAR_2)->block_size, FUNC_2(VAR_2->block_size));
 FUNC_4(FUNC_5(VAR_2)->n_blocks, FUNC_3(VAR_2->n_blocks));
 FUNC_4(FUNC_5(VAR_2)->seq_count, FUNC_3(0));

 for (VAR_3 = 0; VAR_3 < VAR_2->n_blocks; VAR_3++)
  FUNC_6(VAR_2, &VAR_2->entries[VAR_3], -1, -1);

 FUNC_9(VAR_2);
 FUNC_8(VAR_2);
 FUNC_4(FUNC_5(VAR_2)->magic, FUNC_2(VAR_0));
 FUNC_10(VAR_2, &FUNC_5(VAR_2)->magic, sizeof FUNC_5(VAR_2)->magic);
 FUNC_8(VAR_2);

 return 0;
}
