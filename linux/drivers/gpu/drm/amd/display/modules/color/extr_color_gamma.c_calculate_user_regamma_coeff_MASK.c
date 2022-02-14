
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * gamma; int * A3; int * A2; int * A1; int * A0; } ;
struct regamma_lut {TYPE_1__ coeff; } ;
struct hw_x_point {int x; } ;
struct gamma_coefficients {void** user_gamma; void** a3; void** a2; void** a1; void** a0; } ;
struct TYPE_4__ {void** blue; void** green; void** red; } ;
struct dc_transfer_func {int type; TYPE_2__ tf_pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_2__*) ;
 struct hw_x_point* VAR_2 ;
 void* FUNC_1 (int ,int) ;
 void* VAR_3 ;
 void* FUNC_2 (int ,struct gamma_coefficients*,int) ;

bool FUNC_3(struct dc_transfer_func *VAR_4,
  const struct regamma_lut *VAR_5)
{
 struct gamma_coefficients VAR_6;
 const struct hw_x_point *VAR_7 = VAR_2;
 uint32_t VAR_8 = 0;

 do {
  VAR_6.a0[VAR_8] = FUNC_1(
    VAR_5->coeff.A0[VAR_8], 10000000);
  VAR_6.a1[VAR_8] = FUNC_1(
    VAR_5->coeff.A1[VAR_8], 1000);
  VAR_6.a2[VAR_8] = FUNC_1(
    VAR_5->coeff.A2[VAR_8], 1000);
  VAR_6.a3[VAR_8] = FUNC_1(
    VAR_5->coeff.A3[VAR_8], 1000);
  VAR_6.user_gamma[VAR_8] = FUNC_1(
    VAR_5->coeff.gamma[VAR_8], 1000);

  ++VAR_8;
 } while (VAR_8 != 3);

 VAR_8 = 0;

 while (VAR_8 != 32) {
  VAR_4->tf_pts.red[VAR_8] = VAR_3;
  VAR_4->tf_pts.green[VAR_8] = VAR_3;
  VAR_4->tf_pts.blue[VAR_8] = VAR_3;
  ++VAR_7;
  ++VAR_8;
 }
 while (VAR_8 != VAR_0 + 1) {
  VAR_4->tf_pts.red[VAR_8] = FUNC_2(
    VAR_7->x, &VAR_6, 0);
  VAR_4->tf_pts.green[VAR_8] = FUNC_2(
    VAR_7->x, &VAR_6, 1);
  VAR_4->tf_pts.blue[VAR_8] = FUNC_2(
    VAR_7->x, &VAR_6, 2);
  ++VAR_7;
  ++VAR_8;
 }


 FUNC_0(VAR_0, &VAR_4->tf_pts);
 VAR_4->type = VAR_1;

 return 1;
}
