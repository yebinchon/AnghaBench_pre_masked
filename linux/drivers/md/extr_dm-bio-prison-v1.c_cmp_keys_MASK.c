
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key {scalar_t__ virtual; scalar_t__ dev; scalar_t__ block_end; scalar_t__ block_begin; } ;



__attribute__((used)) static int FUNC_0(struct dm_cell_key *VAR_0,
      struct dm_cell_key *VAR_1)
{
 if (VAR_0->virtual < VAR_1->virtual)
  return -1;

 if (VAR_0->virtual > VAR_1->virtual)
  return 1;

 if (VAR_0->dev < VAR_1->dev)
  return -1;

 if (VAR_0->dev > VAR_1->dev)
  return 1;

 if (VAR_0->block_end <= VAR_1->block_begin)
  return -1;

 if (VAR_0->block_begin >= VAR_1->block_end)
  return 1;

 return 0;
}
