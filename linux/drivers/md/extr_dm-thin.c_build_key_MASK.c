
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int dummy; } ;
struct dm_cell_key {int virtual; void* block_end; void* block_begin; int dev; } ;
typedef enum lock_space { ____Placeholder_lock_space } lock_space ;
typedef void* dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_device*) ;

__attribute__((used)) static void FUNC_1(struct dm_thin_device *VAR_1, enum lock_space VAR_2,
        dm_block_t VAR_3, dm_block_t VAR_4, struct dm_cell_key *VAR_5)
{
 VAR_5->virtual = (VAR_2 == VAR_0);
 VAR_5->dev = FUNC_0(VAR_1);
 VAR_5->block_begin = VAR_3;
 VAR_5->block_end = VAR_4;
}
