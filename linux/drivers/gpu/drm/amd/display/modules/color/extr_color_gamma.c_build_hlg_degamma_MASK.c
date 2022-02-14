
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pwl_float_data_ex {int r; int b; int g; } ;
struct hw_x_point {int x; } ;


 int FUNC_0 (int ,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pwl_float_data_ex *VAR_0,
  uint32_t VAR_1,
  const struct hw_x_point *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 struct pwl_float_data_ex *VAR_6 = VAR_0;
 const struct hw_x_point *VAR_7 = VAR_2;

 VAR_5 = 0;

 while (VAR_5 != VAR_1 + 1) {
  FUNC_0(VAR_7->x, &VAR_6->r, VAR_3, VAR_4);
  VAR_6->g = VAR_6->r;
  VAR_6->b = VAR_6->r;
  ++VAR_7;
  ++VAR_6;
  ++VAR_5;
 }
}
