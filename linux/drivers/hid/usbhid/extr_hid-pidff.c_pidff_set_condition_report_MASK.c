
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_4__* set_condition; TYPE_1__* block_load; } ;
struct TYPE_8__ {TYPE_2__* condition; } ;
struct ff_effect {TYPE_3__ u; } ;
struct TYPE_9__ {int* value; } ;
struct TYPE_7__ {int deadband; int left_saturation; int right_saturation; int left_coeff; int right_coeff; int center; } ;
struct TYPE_6__ {int* value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(struct pidff_device *VAR_10,
           struct ff_effect *VAR_11)
{
 int VAR_12;

 VAR_10->set_condition[VAR_3].value[0] =
  VAR_10->block_load[VAR_3].value[0];

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_10->set_condition[VAR_6].value[0] = VAR_12;
  FUNC_2(&VAR_10->set_condition[VAR_1],
     VAR_11->u.condition[VAR_12].center);
  FUNC_2(&VAR_10->set_condition[VAR_7],
     VAR_11->u.condition[VAR_12].right_coeff);
  FUNC_2(&VAR_10->set_condition[VAR_4],
     VAR_11->u.condition[VAR_12].left_coeff);
  FUNC_1(&VAR_10->set_condition[VAR_8],
     VAR_11->u.condition[VAR_12].right_saturation);
  FUNC_1(&VAR_10->set_condition[VAR_5],
     VAR_11->u.condition[VAR_12].left_saturation);
  FUNC_1(&VAR_10->set_condition[VAR_2],
     VAR_11->u.condition[VAR_12].deadband);
  FUNC_0(VAR_10->hid, VAR_10->reports[VAR_9],
    VAR_0);
 }
}
