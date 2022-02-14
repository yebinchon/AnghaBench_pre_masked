
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_entry {int dummy; } ;
struct dm_writecache {scalar_t__ seq_count; } ;


 scalar_t__ FUNC_0 (struct dm_writecache*,struct wc_entry*) ;

__attribute__((used)) static bool FUNC_1(struct dm_writecache *VAR_0, struct wc_entry *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) < VAR_0->seq_count;
}
