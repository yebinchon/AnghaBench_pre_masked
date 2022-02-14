
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_memory_entry {int dummy; } ;
struct wc_entry {int dummy; } ;
struct dm_writecache {int block_size; } ;


 scalar_t__ FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_2 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_3 (struct dm_writecache*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dm_writecache *VAR_0, struct wc_entry *VAR_1)
{
 FUNC_3(VAR_0, FUNC_2(VAR_0, VAR_1), sizeof(struct wc_memory_entry));
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_0, FUNC_1(VAR_0, VAR_1), VAR_0->block_size);
}
