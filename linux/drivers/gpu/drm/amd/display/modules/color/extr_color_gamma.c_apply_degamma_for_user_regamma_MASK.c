
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pwl_float_data_ex {int r; int b; int g; } ;
struct hw_x_point {int x; } ;
struct gamma_coefficients {int dummy; } ;


 int FUNC_0 (struct gamma_coefficients*,int) ;
 struct hw_x_point* VAR_0 ;
 int FUNC_1 (int ,struct gamma_coefficients*,int ) ;

__attribute__((used)) static void FUNC_2(struct pwl_float_data_ex *VAR_1,
  uint32_t VAR_2)
{
 uint32_t VAR_3;

 struct gamma_coefficients VAR_4;
 struct pwl_float_data_ex *VAR_5 = VAR_1;
 const struct hw_x_point *VAR_6 = VAR_0;

 FUNC_0(&VAR_4, 1);

 VAR_3 = 0;
 while (VAR_3 != VAR_2 + 1) {
  VAR_5->r = FUNC_1(
    VAR_6->x, &VAR_4, 0);
  VAR_5->g = VAR_5->r;
  VAR_5->b = VAR_5->r;
  ++VAR_6;
  ++VAR_5;
  ++VAR_3;
 }
}
