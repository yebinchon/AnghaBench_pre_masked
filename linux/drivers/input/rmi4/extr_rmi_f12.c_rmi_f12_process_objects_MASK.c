
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rmi_2d_sensor_abs_object {int x; int y; int z; int wx; int wy; int type; int mt_tool; } ;
struct rmi_2d_sensor {struct rmi_2d_sensor_abs_object* objs; int dmax; int nbr_fingers; int tracking_pos; int tracking_slots; int input; scalar_t__ kernel_tracking; } ;
struct f12_data {TYPE_1__* data1; struct rmi_2d_sensor sensor; } ;
struct TYPE_2__ {int num_subpackets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct rmi_2d_sensor*,struct rmi_2d_sensor_abs_object*,int) ;
 int FUNC_2 (struct rmi_2d_sensor*,struct rmi_2d_sensor_abs_object*,int) ;

__attribute__((used)) static void FUNC_3(struct f12_data *VAR_9, u8 *VAR_10, int VAR_11)
{
 int VAR_12;
 struct rmi_2d_sensor *VAR_13 = &VAR_9->sensor;
 int VAR_14 = VAR_9->data1->num_subpackets;

 if ((VAR_9->data1->num_subpackets * VAR_0) > VAR_11)
  VAR_14 = VAR_11 / VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  struct rmi_2d_sensor_abs_object *VAR_15 = &VAR_13->objs[VAR_12];

  VAR_15->type = VAR_5;
  VAR_15->mt_tool = VAR_1;

  switch (VAR_10[0]) {
  case 131:
   VAR_15->type = VAR_4;
   break;
  case 129:
   VAR_15->type = VAR_7;
   VAR_15->mt_tool = VAR_3;
   break;
  case 130:
   VAR_15->type = VAR_6;
   VAR_15->mt_tool = VAR_2;
   break;
  case 128:
   VAR_15->type = VAR_8;
   break;
  }

  VAR_15->x = (VAR_10[2] << 8) | VAR_10[1];
  VAR_15->y = (VAR_10[4] << 8) | VAR_10[3];
  VAR_15->z = VAR_10[5];
  VAR_15->wx = VAR_10[6];
  VAR_15->wy = VAR_10[7];

  FUNC_1(VAR_13, VAR_15, VAR_12);

  VAR_10 += VAR_0;
 }

 if (VAR_13->kernel_tracking)
  FUNC_0(VAR_13->input,
          VAR_13->tracking_slots,
          VAR_13->tracking_pos,
          VAR_13->nbr_fingers,
          VAR_13->dmax);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
  FUNC_2(VAR_13, &VAR_13->objs[VAR_12], VAR_12);
}
