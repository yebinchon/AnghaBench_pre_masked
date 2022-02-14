
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pwl_float_data_ex {int r; int b; int g; } ;
struct hw_x_point {int x; } ;
struct gamma_coefficients {int dummy; } ;
struct fixed31_32 {int dummy; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gamma_coefficients*,int) ;
 int FUNC_1 (struct gamma_coefficients*) ;
 struct gamma_coefficients* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,struct gamma_coefficients*,int ) ;

__attribute__((used)) static bool FUNC_5(struct pwl_float_data_ex *VAR_4,
  uint32_t VAR_5,
  const struct hw_x_point *VAR_6, enum dc_transfer_func_predefined VAR_7)
{
 uint32_t VAR_8;
 bool VAR_9 = 0;

 struct gamma_coefficients *VAR_10;
 struct pwl_float_data_ex *VAR_11 = VAR_4;
 const struct hw_x_point *VAR_12 = VAR_6;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  goto release;

 if (!FUNC_0(VAR_10, VAR_7))
  goto release;

 FUNC_3(VAR_2, 0, VAR_1 * sizeof(struct fixed31_32));
 VAR_3 = 0;
 VAR_8 = 0;
 while (VAR_8 <= VAR_5) {

  VAR_11->r = FUNC_4(
   VAR_12->x, VAR_10, 0);
  VAR_11->g = VAR_11->r;
  VAR_11->b = VAR_11->r;
  ++VAR_12;
  ++VAR_11;
  ++VAR_8;
 }
 VAR_3 = -1;
 VAR_9 = 1;
release:
 FUNC_1(VAR_10);
 return VAR_9;
}
