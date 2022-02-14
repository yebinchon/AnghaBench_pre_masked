
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_rewrite_cfg {int combine; scalar_t__* trees; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct object_id const*,struct object_id const*,int,int ) ;

int FUNC_1(struct notes_rewrite_cfg *VAR_0,
     const struct object_id *VAR_1, const struct object_id *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 for (VAR_4 = 0; VAR_0->trees[VAR_4]; VAR_4++)
  VAR_3 = FUNC_0(VAR_0->trees[VAR_4], VAR_1, VAR_2, 1, VAR_0->combine) || VAR_3;
 return VAR_3;
}
