
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int dirty_bitmap_size; int dirty_bitmap; } ;


 int FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dm_writecache *VAR_0)
{
 if (!FUNC_0(VAR_0))
  FUNC_1(VAR_0->dirty_bitmap, -1, VAR_0->dirty_bitmap_size);
}
