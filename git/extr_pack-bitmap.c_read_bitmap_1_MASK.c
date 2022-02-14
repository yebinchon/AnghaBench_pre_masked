
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int dummy; } ;
struct bitmap_index {scalar_t__ map; scalar_t__ map_pos; scalar_t__ map_size; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ewah_bitmap*) ;
 struct ewah_bitmap* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct ewah_bitmap*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct ewah_bitmap *FUNC_4(struct bitmap_index *VAR_0)
{
 struct ewah_bitmap *VAR_1 = FUNC_2();

 ssize_t VAR_2 = FUNC_3(VAR_1,
  VAR_0->map + VAR_0->map_pos,
  VAR_0->map_size - VAR_0->map_pos);

 if (VAR_2 < 0) {
  FUNC_0("Failed to load bitmap index (corrupted?)");
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 VAR_0->map_pos += VAR_2;
 return VAR_1;
}
