
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pwl_float_data_ex {void* b; void* g; void* r; } ;
struct hw_x_point {int x; } ;
struct gamma_coefficients {int dummy; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;


 int VAR_0 ;
 int FUNC_0 (struct gamma_coefficients*,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_1 (int ,struct gamma_coefficients*,int ) ;

__attribute__((used)) static bool FUNC_2(struct pwl_float_data_ex *VAR_3,
  uint32_t VAR_4,
  const struct hw_x_point *VAR_5, enum dc_transfer_func_predefined VAR_6)
{
 uint32_t VAR_7;
 struct gamma_coefficients VAR_8;
 uint32_t VAR_9, VAR_10;
 bool VAR_11 = 0;

 if (!FUNC_0(&VAR_8, VAR_6))
  goto release;

 VAR_7 = 0;




 VAR_9 = 13 * VAR_0;
 VAR_10 = VAR_9 + 12 * VAR_0;

 while (VAR_7 != VAR_9) {
  VAR_3[VAR_7].r = VAR_2;
  VAR_3[VAR_7].g = VAR_2;
  VAR_3[VAR_7].b = VAR_2;
  VAR_7++;
 }

 while (VAR_7 != VAR_10) {
  VAR_3[VAR_7].r = FUNC_1(
    VAR_5[VAR_7].x, &VAR_8, 0);
  VAR_3[VAR_7].g = VAR_3[VAR_7].r;
  VAR_3[VAR_7].b = VAR_3[VAR_7].r;
  VAR_7++;
 }
 while (VAR_7 != VAR_4 + 1) {
  VAR_3[VAR_7].r = VAR_1;
  VAR_3[VAR_7].g = VAR_1;
  VAR_3[VAR_7].b = VAR_1;
  VAR_7++;
 }
 VAR_11 = 1;
release:
 return VAR_11;
}
