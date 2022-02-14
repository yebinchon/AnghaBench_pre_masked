
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_slot {int next; int string; int hash; } ;
struct TYPE_3__ {int next_free; } ;
typedef TYPE_1__ jvp_object ;
typedef int jv ;


 struct object_slot* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct object_slot* FUNC_4(jv VAR_0, jv VAR_1, int* VAR_2) {
  jvp_object* VAR_3 = FUNC_1(VAR_0);
  int VAR_4 = VAR_3->next_free;
  if (VAR_4 == FUNC_2(VAR_0)) return 0;
  struct object_slot* VAR_5 = FUNC_0(VAR_0, VAR_4);
  VAR_3->next_free++;
  VAR_5->next = *VAR_2;
  *VAR_2 = VAR_4;
  VAR_5->hash = FUNC_3(VAR_1);
  VAR_5->string = VAR_1;
  return VAR_5;
}
