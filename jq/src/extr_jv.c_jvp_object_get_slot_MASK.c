
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_slot {int dummy; } ;
typedef int jv ;
struct TYPE_2__ {struct object_slot* elements; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct object_slot* FUNC_3(jv VAR_0, int VAR_1) {
  FUNC_0(VAR_1 == -1 || (VAR_1 >= 0 && VAR_1 < FUNC_2(VAR_0)));
  if (VAR_1 == -1) return 0;
  else return &FUNC_1(VAR_0)->elements[VAR_1];
}
