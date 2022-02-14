
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_memory_entry {int dummy; } ;
struct wc_entry {int dummy; } ;
struct dm_writecache {int freelist_wait; } ;


 int FUNC_0 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_1 (struct dm_writecache*,struct wc_entry*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_6 (struct dm_writecache*,int ,int) ;
 int FUNC_7 (struct dm_writecache*,struct wc_entry*) ;

__attribute__((used)) static void FUNC_8(struct dm_writecache *VAR_0, struct wc_entry *VAR_1)
{
 FUNC_7(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1);
 FUNC_6(VAR_0, FUNC_1(VAR_0, VAR_1), sizeof(struct wc_memory_entry));
 if (FUNC_2(FUNC_3(&VAR_0->freelist_wait)))
  FUNC_4(&VAR_0->freelist_wait);
}
