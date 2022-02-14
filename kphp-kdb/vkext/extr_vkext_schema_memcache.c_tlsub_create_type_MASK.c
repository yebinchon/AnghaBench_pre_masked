
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int ref_cnt; long flags; int * methods; } ;
struct tl_tree_type {int children_num; void** children; TYPE_2__* type; TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;
struct TYPE_4__ {char* id; int arity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;

void *FUNC_2 (void **VAR_6, void **VAR_7, zval **VAR_8, struct tl_tree **VAR_9) {
  struct tl_tree_type *VAR_10 = FUNC_1 (sizeof (*VAR_10));
  VAR_1 ++;
  VAR_5 ++;
  VAR_10->self.ref_cnt = 1;
  VAR_4 ++;
  VAR_10->self.flags = (long)*(VAR_6 ++);
  VAR_10->self.methods = &VAR_3;
  VAR_10->type = *(VAR_6 ++);



  VAR_10->children_num = VAR_10->type->arity;
  VAR_10->children = FUNC_1 (sizeof (void *) * VAR_10->children_num);
  int VAR_11;
  for (VAR_11 = VAR_10->children_num - 1; VAR_11 >= 0; VAR_11--) {
    VAR_10->children[VAR_11] = *(--VAR_7);

  }
  *(VAR_7 ++) = VAR_10;

  VAR_0;
}
