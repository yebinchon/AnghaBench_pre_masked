
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int positions; } ;
struct bitmap_index {scalar_t__ map_size; int * map; void* tags; void* blobs; void* trees; void* commits; int pack; TYPE_1__ ext_index; int bitmaps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct bitmap_index*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 void* FUNC_6 (struct bitmap_index*) ;

__attribute__((used)) static int FUNC_7(struct bitmap_index *VAR_0)
{
 FUNC_0(VAR_0->map);

 VAR_0->bitmaps = FUNC_1();
 VAR_0->ext_index.positions = FUNC_2();
 if (FUNC_4(VAR_0->pack))
  goto failed;

 if (!(VAR_0->commits = FUNC_6(VAR_0)) ||
  !(VAR_0->trees = FUNC_6(VAR_0)) ||
  !(VAR_0->blobs = FUNC_6(VAR_0)) ||
  !(VAR_0->tags = FUNC_6(VAR_0)))
  goto failed;

 if (FUNC_3(VAR_0) < 0)
  goto failed;

 return 0;

failed:
 FUNC_5(VAR_0->map, VAR_0->map_size);
 VAR_0->map = ((void*)0);
 VAR_0->map_size = 0;
 return -1;
}
