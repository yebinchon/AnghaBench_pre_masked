
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct tl_tree {int dummy; } ;
struct TYPE_2__ {int (* eq ) (struct tl_tree*,struct tl_tree*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct tl_tree*) ;
 int FUNC_1 (struct tl_tree*,struct tl_tree*) ;

void *FUNC_2 (void **VAR_1, void **VAR_2, zval **VAR_3, struct tl_tree **VAR_4) {
  struct tl_tree *VAR_5 = *(--VAR_2);
  struct tl_tree *VAR_6 = VAR_4[(long)*(VAR_1 ++)];
  if (!FUNC_0 (VAR_6)->eq (VAR_6, VAR_5)) {
    return 0;
  }
  VAR_0;
}
