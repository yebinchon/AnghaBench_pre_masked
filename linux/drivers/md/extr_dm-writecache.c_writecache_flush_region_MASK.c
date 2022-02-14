
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int dirty_bitmap; scalar_t__ memory_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct dm_writecache *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (!FUNC_0(VAR_1))
  FUNC_1(((char *)VAR_2 - (char *)VAR_1->memory_map) / VAR_0,
     VAR_1->dirty_bitmap);
}
