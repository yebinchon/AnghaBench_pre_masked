
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {int bitmap_root; int bitmap_info; } ;
struct disk_index_entry {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (int *,int ,int *,struct disk_index_entry*) ;

__attribute__((used)) static int FUNC_1(struct ll_disk *VAR_0, dm_block_t VAR_1,
      struct disk_index_entry *VAR_2)
{
 return FUNC_0(&VAR_0->bitmap_info, VAR_0->bitmap_root, &VAR_1, VAR_2);
}
