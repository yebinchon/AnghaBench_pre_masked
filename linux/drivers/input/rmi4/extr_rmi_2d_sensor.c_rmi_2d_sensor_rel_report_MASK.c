
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_2d_axis_alignment {scalar_t__ swap_axes; scalar_t__ flip_y; scalar_t__ flip_x; } ;
struct rmi_2d_sensor {int input; struct rmi_2d_axis_alignment axis_align; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct rmi_2d_sensor *VAR_4, int VAR_5, int VAR_6)
{
 struct rmi_2d_axis_alignment *VAR_7 = &VAR_4->axis_align;

 VAR_5 = FUNC_2(VAR_2, FUNC_1(VAR_3, (int)VAR_5));
 VAR_6 = FUNC_2(VAR_2, FUNC_1(VAR_3, (int)VAR_6));

 if (VAR_7->flip_x)
  VAR_5 = FUNC_2(VAR_2, -VAR_5);

 if (VAR_7->flip_y)
  VAR_6 = FUNC_2(VAR_2, -VAR_6);

 if (VAR_7->swap_axes)
  FUNC_3(VAR_5, VAR_6);

 if (VAR_5 || VAR_6) {
  FUNC_0(VAR_4->input, VAR_0, VAR_5);
  FUNC_0(VAR_4->input, VAR_1, VAR_6);
 }
}
