
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct name_decoration {int type; int next; } ;
typedef enum decoration_type { ____Placeholder_decoration_type } decoration_type ;


 int FUNC_0 (struct name_decoration*,char const*,char const*) ;
 int FUNC_1 (int *,struct object*,struct name_decoration*) ;
 int VAR_0 ;

void FUNC_2(enum decoration_type VAR_1, const char *VAR_2, struct object *VAR_3)
{
 struct name_decoration *VAR_4;
 FUNC_0(VAR_4, VAR_2, VAR_2);
 VAR_4->type = VAR_1;
 VAR_4->next = FUNC_1(&VAR_0, VAR_3, VAR_4);
}
