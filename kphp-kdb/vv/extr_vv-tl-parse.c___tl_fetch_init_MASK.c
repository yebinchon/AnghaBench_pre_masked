
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_in_methods {int (* fetch_clear ) () ;} ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;
struct TYPE_2__ {int * copy_through; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 struct tl_in_methods* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;

int FUNC_3 (void *VAR_10, void *VAR_11, enum tl_type VAR_12, struct tl_in_methods *VAR_13, int VAR_14) {
  if (VAR_5 && VAR_5->fetch_clear) {
    VAR_5->fetch_clear ();
  }
  FUNC_0 (VAR_10);
  VAR_8 = VAR_12;
  VAR_4 = VAR_10;
  VAR_7 = VAR_14;
  VAR_6 = 0;

  VAR_5 = VAR_13;
  VAR_0 = 0;
  if (VAR_3) {
    FUNC_1 (VAR_3);
    VAR_3 = 0;
  }
  VAR_2 = 0;
  VAR_1 = VAR_9 ? VAR_9->copy_through[VAR_8] : 0;
  return 0;
}
