
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; char* val; } ;
struct TYPE_6__ {TYPE_2__ str; } ;
struct TYPE_8__ {TYPE_1__ value; int type; } ;
typedef TYPE_3__ zval ;
struct tl_tree {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 () ;

void *FUNC_3 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  char *VAR_6;
  int VAR_7 = FUNC_1 (&VAR_6);
  if (FUNC_2 ()) { return 0; }
  FUNC_0 (*VAR_4);
  (*VAR_4)->type = VAR_0;
  (*VAR_4)->value.str.len = VAR_7;
  (*VAR_4)->value.str.val = VAR_6;
  VAR_1;
}
