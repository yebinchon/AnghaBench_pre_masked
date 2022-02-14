
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct decoration {int nr; int size; } ;


 int FUNC_0 (struct decoration*) ;
 void* FUNC_1 (struct decoration*,struct object const*,void*) ;

void *FUNC_2(struct decoration *VAR_0, const struct object *VAR_1,
  void *VAR_2)
{
 int VAR_3 = VAR_0->nr + 1;

 if (VAR_3 > VAR_0->size * 2 / 3)
  FUNC_0(VAR_0);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
