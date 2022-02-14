
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_entry {scalar_t__ index; } ;
struct dm_writecache {int start_sector; int metadata_sectors; int block_size_bits; } ;
typedef int sector_t ;


 int VAR_0 ;

__attribute__((used)) static sector_t FUNC_0(struct dm_writecache *VAR_1, struct wc_entry *VAR_2)
{
 return VAR_1->start_sector + VAR_1->metadata_sectors +
  ((sector_t)VAR_2->index << (VAR_1->block_size_bits - VAR_0));
}
