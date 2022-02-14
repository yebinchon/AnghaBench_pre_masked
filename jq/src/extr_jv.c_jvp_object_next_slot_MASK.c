
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_slot {int next; } ;
typedef int jv ;


 struct object_slot* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct object_slot* FUNC_1(jv VAR_0, struct object_slot* VAR_1) {
  return FUNC_0(VAR_0, VAR_1->next);
}
