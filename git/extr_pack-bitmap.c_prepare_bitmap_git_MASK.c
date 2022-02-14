
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct bitmap_index {int dummy; } ;


 int FUNC_0 (struct bitmap_index*) ;
 int FUNC_1 (struct bitmap_index*) ;
 int FUNC_2 (struct repository*,struct bitmap_index*) ;
 struct bitmap_index* FUNC_3 (int,int) ;

struct bitmap_index *FUNC_4(struct repository *VAR_0)
{
 struct bitmap_index *VAR_1 = FUNC_3(1, sizeof(*VAR_1));

 if (!FUNC_2(VAR_0, VAR_1) && !FUNC_1(VAR_1))
  return VAR_1;

 FUNC_0(VAR_1);
 return ((void*)0);
}
