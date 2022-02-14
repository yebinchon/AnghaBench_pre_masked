
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_struct {int bio; struct dm_writecache* wc; } ;
struct wc_entry {int dummy; } ;
struct dm_writecache {unsigned int block_size; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int *,int ,unsigned int,int ) ;
 void* FUNC_1 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_2 (void*,unsigned int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static bool FUNC_5(struct writeback_struct *VAR_0, struct wc_entry *VAR_1, gfp_t VAR_2)
{
 struct dm_writecache *VAR_3 = VAR_0->wc;
 unsigned VAR_4 = VAR_3->block_size;
 void *VAR_5 = FUNC_1(VAR_3, VAR_1);

 FUNC_2(VAR_5, VAR_4);
 return FUNC_0(&VAR_0->bio, FUNC_3(VAR_5),
       VAR_4, FUNC_4(VAR_5)) != 0;
}
