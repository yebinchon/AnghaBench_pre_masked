
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_var {int type; scalar_t__ flags; struct tl_combinator_tree* ptr; int id; } ;
struct tl_combinator_tree {int dummy; } ;


 struct tl_var** VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 int FUNC_1 (int ,struct tl_var*,int ) ;
 scalar_t__ FUNC_2 (int ,struct tl_var*) ;
 int * VAR_2 ;
 int FUNC_3 (int,char*,char*) ;
 struct tl_var* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

struct tl_var *FUNC_6 (char *VAR_3, struct tl_combinator_tree *VAR_4, int VAR_5) {
  FUNC_3 (2, "Add var %s\n", VAR_3);
  struct tl_var *VAR_6 = FUNC_4 (sizeof (*VAR_6));
  VAR_6->id = FUNC_5 (VAR_3);
  VAR_6->type = VAR_5;
  VAR_6->ptr = VAR_4;
  VAR_6->flags = 0;
  if (FUNC_2 (VAR_2[VAR_1], VAR_6)) {
    return 0;
  }
  VAR_2[VAR_1] = FUNC_1 (VAR_2[VAR_1], VAR_6, FUNC_0 ());
  if (VAR_5) {
    VAR_0[VAR_1] = VAR_6;
  }
  return VAR_6;
}
