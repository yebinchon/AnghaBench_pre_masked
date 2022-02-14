
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rmi_2d_sensor_abs_object {int mt_tool; size_t x; size_t y; size_t z; size_t wx; size_t wy; int type; } ;
struct rmi_2d_sensor {int dummy; } ;
struct f11_2d_data {size_t* abs_pos; } ;
struct f11_data {struct f11_2d_data data; } ;
typedef enum f11_finger_state { ____Placeholder_f11_finger_state } f11_finger_state ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rmi_2d_sensor*,struct rmi_2d_sensor_abs_object*,size_t) ;

__attribute__((used)) static void FUNC_1(struct f11_data *VAR_4,
       struct rmi_2d_sensor *VAR_5,
       struct rmi_2d_sensor_abs_object *VAR_6,
       enum f11_finger_state VAR_7,
       u8 VAR_8)
{
 struct f11_2d_data *VAR_9 = &VAR_4->data;
 u8 *VAR_10 = &VAR_9->abs_pos[VAR_8 * VAR_3];
 int VAR_11 = VAR_0;

 switch (VAR_7) {
 case 128:
  VAR_6->type = VAR_1;
  break;
 default:
  VAR_6->type = VAR_2;
 }

 VAR_6->mt_tool = VAR_11;
 VAR_6->x = (VAR_10[0] << 4) | (VAR_10[2] & 0x0F);
 VAR_6->y = (VAR_10[1] << 4) | (VAR_10[2] >> 4);
 VAR_6->z = VAR_10[4];
 VAR_6->wx = VAR_10[3] & 0x0f;
 VAR_6->wy = VAR_10[3] >> 4;

 FUNC_0(VAR_5, VAR_6, VAR_8);
}
