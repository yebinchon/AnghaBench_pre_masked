
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_act_extra {int flags; int size; } ;


 struct tl_act_extra* FUNC_0 (int ) ;
 int FUNC_1 (struct tl_act_extra*,struct tl_act_extra*,int ) ;

struct tl_act_extra *FUNC_2 (struct tl_act_extra *VAR_0) {
  struct tl_act_extra *VAR_1 = FUNC_0 (VAR_0->size);
  FUNC_1 (VAR_1, VAR_0, VAR_0->size);
  VAR_1->flags = (VAR_1->flags & ~1) | 2;
  return VAR_1;
}
