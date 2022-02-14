
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bitmap_index* hashes; struct bitmap_index* objects; } ;
struct bitmap_index {int haves; int result; TYPE_1__ ext_index; int bitmaps; int tags; int blobs; int trees; int commits; int map_size; scalar_t__ map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bitmap_index*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5(struct bitmap_index *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->map)
  FUNC_4(VAR_0->map, VAR_0->map_size);
 FUNC_1(VAR_0->commits);
 FUNC_1(VAR_0->trees);
 FUNC_1(VAR_0->blobs);
 FUNC_1(VAR_0->tags);
 FUNC_3(VAR_0->bitmaps);
 FUNC_2(VAR_0->ext_index.objects);
 FUNC_2(VAR_0->ext_index.hashes);
 FUNC_0(VAR_0->result);
 FUNC_0(VAR_0->haves);
 FUNC_2(VAR_0);
}
