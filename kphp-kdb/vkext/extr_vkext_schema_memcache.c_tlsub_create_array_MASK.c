
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int ref_cnt; long flags; int * methods; } ;
struct tl_tree_array {long args_num; void* multiplicity; TYPE_2__** args; TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;
struct TYPE_4__ {void* type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;

void *FUNC_2 (void **VAR_5, void **VAR_6, zval **VAR_7, struct tl_tree **VAR_8) {
  struct tl_tree_array *VAR_9 = FUNC_1 (sizeof (*VAR_9));
  VAR_1 ++;
  VAR_4 ++;
  VAR_9->self.ref_cnt = 1;
  VAR_9->self.flags = (long)*(VAR_5 ++);
  VAR_9->self.methods = &VAR_3;
  VAR_9->args_num = (long)*(VAR_5 ++);
  int VAR_10;
  VAR_9->args = FUNC_1 (sizeof (void *) * VAR_9->args_num);
  for (VAR_10 = VAR_9->args_num - 1; VAR_10 >= 0; VAR_10--) {
    VAR_9->args[VAR_10] = FUNC_1 (sizeof (*VAR_9->args[VAR_10]));
    VAR_9->args[VAR_10]->id = *(VAR_5 ++ );
    VAR_9->args[VAR_10]->type = *(--VAR_6);

  }
  VAR_9->multiplicity = *(--VAR_6);




  *(VAR_6 ++) = VAR_9;
  VAR_0;
}
