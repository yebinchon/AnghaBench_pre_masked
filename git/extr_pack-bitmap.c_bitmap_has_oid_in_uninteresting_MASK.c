
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct bitmap_index {int haves; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bitmap_index*,struct object_id const*) ;

int FUNC_2(struct bitmap_index *VAR_0,
        const struct object_id *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;
 if (!VAR_0->haves)
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return 0;

 return FUNC_0(VAR_0->haves, VAR_2);
}
