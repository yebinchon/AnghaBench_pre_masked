
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct bitmap_index {int dummy; } ;


 int FUNC_0 (struct bitmap_index*,struct object_id const*) ;
 int FUNC_1 (struct bitmap_index*,struct object_id const*) ;

__attribute__((used)) static int FUNC_2(struct bitmap_index *VAR_0,
      const struct object_id *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 return (VAR_2 >= 0) ? VAR_2 : FUNC_0(VAR_0, VAR_1);
}
