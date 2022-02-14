
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gamma_coefficients {void** user_gamma; void** a3; void** a2; void** a1; void** a0; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;


 size_t FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static bool FUNC_2(struct gamma_coefficients *VAR_10, enum dc_transfer_func_predefined VAR_11)
{

 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;
 bool VAR_14 = 1;

 if (VAR_11 == VAR_4)
  VAR_13 = 0;
 else if (VAR_11 == VAR_0)
  VAR_13 = 1;
 else if (VAR_11 == VAR_1)
  VAR_13 = 2;
 else if (VAR_11 == VAR_2)
  VAR_13 = 3;
 else if (VAR_11 == VAR_3)
  VAR_13 = 4;
 else {
  VAR_14 = 0;
  goto release;
 }

 do {
  VAR_10->a0[VAR_12] = FUNC_1(
   VAR_5[VAR_13], 10000000);
  VAR_10->a1[VAR_12] = FUNC_1(
   VAR_6[VAR_13], 1000);
  VAR_10->a2[VAR_12] = FUNC_1(
   VAR_7[VAR_13], 1000);
  VAR_10->a3[VAR_12] = FUNC_1(
   VAR_8[VAR_13], 1000);
  VAR_10->user_gamma[VAR_12] = FUNC_1(
   VAR_9[VAR_13], 1000);

  ++VAR_12;
 } while (VAR_12 != FUNC_0(VAR_10->a0));
release:
 return VAR_14;
}
