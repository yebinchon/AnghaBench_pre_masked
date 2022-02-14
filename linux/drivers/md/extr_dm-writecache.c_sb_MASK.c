
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_memory_superblock {int dummy; } ;
struct dm_writecache {struct wc_memory_superblock* memory_map; } ;



__attribute__((used)) static struct wc_memory_superblock *FUNC_0(struct dm_writecache *VAR_0)
{
 return VAR_0->memory_map;
}
