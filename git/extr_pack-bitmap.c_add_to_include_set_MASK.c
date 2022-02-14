
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stored_bitmap {int dummy; } ;
struct object_id {int dummy; } ;
struct include_data {scalar_t__ base; scalar_t__ seen; } ;
struct bitmap_index {int bitmaps; } ;
typedef scalar_t__ khiter_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct object_id const) ;
 struct stored_bitmap* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct stored_bitmap*) ;

__attribute__((used)) static int FUNC_7(struct bitmap_index *VAR_0,
         struct include_data *VAR_1,
         const struct object_id *VAR_2,
         int VAR_3)
{
 khiter_t VAR_4;

 if (VAR_1->seen && FUNC_0(VAR_1->seen, VAR_3))
  return 0;

 if (FUNC_0(VAR_1->base, VAR_3))
  return 0;

 VAR_4 = FUNC_4(VAR_0->bitmaps, *VAR_2);
 if (VAR_4 < FUNC_3(VAR_0->bitmaps)) {
  struct stored_bitmap *VAR_5 = FUNC_5(VAR_0->bitmaps, VAR_4);
  FUNC_1(VAR_1->base, FUNC_6(VAR_5));
  return 0;
 }

 FUNC_2(VAR_1->base, VAR_3);
 return 1;
}
