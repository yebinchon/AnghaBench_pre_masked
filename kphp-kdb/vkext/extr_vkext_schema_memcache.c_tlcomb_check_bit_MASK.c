
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,long,long,long,...) ;
 int VAR_1 ;
 long FUNC_1 (struct tl_tree*) ;

void *FUNC_2 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  long VAR_6 = (long)*(VAR_2 ++);
  long VAR_7 = (long)*(VAR_2 ++);
  long VAR_8 = (long)*(VAR_2 ++);



  long VAR_9 = FUNC_1 (VAR_5[VAR_6]);



  if (!(VAR_9 & (1 << VAR_7))) {
    VAR_2 += VAR_8;
  }
  VAR_0;
}
