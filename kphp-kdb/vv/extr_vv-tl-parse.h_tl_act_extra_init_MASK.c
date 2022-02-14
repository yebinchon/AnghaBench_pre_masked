
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_act_extra {int size; int (* act ) (struct tl_act_extra*) ;scalar_t__ dup; scalar_t__ free; scalar_t__ flags; } ;



__attribute__((used)) static inline struct tl_act_extra *FUNC_0 (void *VAR_0, int VAR_1, int (*VAR_2)(struct tl_act_extra *)) {
  struct tl_act_extra *VAR_3 = (struct tl_act_extra *)VAR_0;
  VAR_3->size = VAR_1 + sizeof (*VAR_3);
  VAR_3->flags = 0;
  VAR_3->act = VAR_2;
  VAR_3->free = 0;
  VAR_3->dup = 0;
  return VAR_3;
}
