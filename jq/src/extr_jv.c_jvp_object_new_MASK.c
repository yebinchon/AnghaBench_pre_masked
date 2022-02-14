
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct object_slot {int dummy; } ;
struct TYPE_10__ {int count; } ;
struct TYPE_11__ {TYPE_3__ refcnt; TYPE_1__* elements; scalar_t__ next_free; } ;
typedef TYPE_4__ jvp_object ;
struct TYPE_9__ {TYPE_3__* member_0; } ;
struct TYPE_12__ {int member_3; TYPE_2__ member_4; int member_2; int member_1; int member_0; } ;
typedef TYPE_5__ jv ;
struct TYPE_8__ {int next; void* value; scalar_t__ hash; void* string; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int) ;

__attribute__((used)) static jv FUNC_2(int VAR_2) {



  FUNC_0(VAR_2 > 0 && (VAR_2 & (VAR_2 - 1)) == 0);

  jvp_object* VAR_3 = FUNC_1(sizeof(jvp_object) +
                                 sizeof(struct object_slot) * VAR_2 +
                                 sizeof(int) * (VAR_2 * 2));
  VAR_3->refcnt.count = 1;
  for (int VAR_4=0; VAR_4<VAR_2; VAR_4++) {
    VAR_3->elements[VAR_4].next = VAR_4 - 1;
    VAR_3->elements[VAR_4].string = VAR_1;
    VAR_3->elements[VAR_4].hash = 0;
    VAR_3->elements[VAR_4].value = VAR_1;
  }
  VAR_3->next_free = 0;
  int* VAR_5 = (int*)(&VAR_3->elements[VAR_2]);
  for (int VAR_6=0; VAR_6<VAR_2*2; VAR_6++) {
    VAR_5[VAR_6] = -1;
  }
  jv VAR_7 = {VAR_0, 0, 0, VAR_2, &VAR_3->refcnt};
  return VAR_7;
}
