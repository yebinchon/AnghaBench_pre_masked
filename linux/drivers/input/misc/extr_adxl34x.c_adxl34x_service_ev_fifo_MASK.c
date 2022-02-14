
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axis_triple {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct adxl34x_platform_data {int ev_code_z; int ev_type; int ev_code_y; int ev_code_x; } ;
struct TYPE_2__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct adxl34x {TYPE_1__ swcal; int input; struct adxl34x_platform_data pdata; } ;


 int FUNC_0 (struct adxl34x*,struct axis_triple*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct adxl34x *VAR_0)
{
 struct adxl34x_platform_data *VAR_1 = &VAR_0->pdata;
 struct axis_triple VAR_2;

 FUNC_0(VAR_0, &VAR_2);

 FUNC_1(VAR_0->input, VAR_1->ev_type, VAR_1->ev_code_x,
      VAR_2.x - VAR_0->swcal.x);
 FUNC_1(VAR_0->input, VAR_1->ev_type, VAR_1->ev_code_y,
      VAR_2.y - VAR_0->swcal.y);
 FUNC_1(VAR_0->input, VAR_1->ev_type, VAR_1->ev_code_z,
      VAR_2.z - VAR_0->swcal.z);
}
