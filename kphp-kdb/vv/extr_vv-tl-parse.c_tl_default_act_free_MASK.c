
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_act_extra {int flags; int size; int header; } ;


 int FUNC_0 (struct tl_act_extra*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tl_act_extra*,int ) ;

void FUNC_3 (struct tl_act_extra *VAR_0) {
  FUNC_1 (VAR_0->header);
  if (!(VAR_0->flags & 1)) {
    return;
  }
  if (VAR_0->flags & 2) {
    FUNC_0 (VAR_0);
  } else {
    FUNC_2 (VAR_0, VAR_0->size);
  }
}
