
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc {int dummy; } ;
struct amdgpu_dm_connector {scalar_t__ dc_link; } ;
typedef int dpcd_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int*,int) ;

__attribute__((used)) static bool FUNC_1(struct dc *VAR_2,
          struct amdgpu_dm_connector *VAR_3)
{
 uint8_t VAR_4;
 bool VAR_5 = 0;

 if (VAR_3->dc_link &&
  FUNC_0(
    ((void*)0),
    VAR_3->dc_link,
    VAR_0,
    &VAR_4,
    sizeof(VAR_4))) {
  VAR_5 = (VAR_4 & VAR_1) ? 1:0;
 }

 return VAR_5;
}
