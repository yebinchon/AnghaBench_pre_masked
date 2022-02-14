
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dcn20_hubp* FUNC_1 (struct hubp*) ;

void FUNC_2(
 struct hubp *VAR_7,
 enum dc_rotation_angle VAR_8,
 bool VAR_9)
{
 struct dcn20_hubp *VAR_10 = FUNC_1(VAR_7);
 uint32_t VAR_11;


 if (VAR_9)
  VAR_11 = 1;
 else
  VAR_11 = 0;


 if (VAR_8 == VAR_3)
  FUNC_0(VAR_0,
    VAR_2, 0,
    VAR_1, VAR_11);
 else if (VAR_8 == VAR_6)
  FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1, VAR_11);
 else if (VAR_8 == VAR_4)
  FUNC_0(VAR_0,
    VAR_2, 2,
    VAR_1, VAR_11);
 else if (VAR_8 == VAR_5)
  FUNC_0(VAR_0,
    VAR_2, 3,
    VAR_1, VAR_11);
}
