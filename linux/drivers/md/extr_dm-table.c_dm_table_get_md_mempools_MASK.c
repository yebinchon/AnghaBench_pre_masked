
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {struct dm_md_mempools* mempools; } ;
struct dm_md_mempools {int dummy; } ;



struct dm_md_mempools *FUNC_0(struct dm_table *VAR_0)
{
 return VAR_0->mempools;
}
