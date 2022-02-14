
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ path; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;
struct tree_desc_x {struct tree_desc_skip* skip; TYPE_2__ d; } ;
struct tree_desc_skip {scalar_t__ ptr; struct tree_desc_skip* prev; } ;
struct name_entry {scalar_t__ path; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct tree_desc_skip* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct tree_desc_x *VAR_0, struct name_entry *VAR_1)
{
 if (VAR_0->d.entry.path == VAR_1->path) {
  FUNC_0(&VAR_0->d);
 } else {

  struct tree_desc_skip *VAR_2 = FUNC_1(sizeof(*VAR_2));
  VAR_2->ptr = VAR_1->path;
  VAR_2->prev = VAR_0->skip;
  VAR_0->skip = VAR_2;
 }
}
