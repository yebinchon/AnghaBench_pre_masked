
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_act_extra {int flags; int size; int act; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_0 (int) ;
 int FUNC_1 (struct tl_act_extra*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct tl_act_extra *FUNC_6 (long long VAR_4) {
  if (VAR_4) {
    return 0;
  }
  int VAR_5 = FUNC_5 ();
  if (FUNC_3 ()) {
    return 0;
  }
  if (VAR_5 == VAR_0) {
    FUNC_4 ();
    FUNC_2 ();
    if (FUNC_3 ()) {
      return 0;
    }
    struct tl_act_extra *VAR_6 = FUNC_0 (sizeof (*VAR_6));
    FUNC_1 (VAR_6, 0, sizeof (*VAR_6));
    VAR_6->flags = 3;
    VAR_6->size = sizeof (*VAR_6);
    VAR_6->act = VAR_2;
    return VAR_6;
  }
  if (VAR_5 == VAR_1) {
    FUNC_4 ();
    FUNC_2 ();
    if (FUNC_3 ()) {
      return 0;
    }
    struct tl_act_extra *VAR_7 = FUNC_0 (sizeof (*VAR_7));
    FUNC_1 (VAR_7, 0, sizeof (*VAR_7));
    VAR_7->flags = 3;
    VAR_7->size = sizeof (*VAR_7);
    VAR_7->act = VAR_3;
    return VAR_7;
  }
  return 0;
}
