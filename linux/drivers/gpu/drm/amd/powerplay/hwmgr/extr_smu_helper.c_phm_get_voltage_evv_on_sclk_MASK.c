
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int,int*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int,int,int*) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int,int,int*) ;

int FUNC_3(struct pp_hwmgr *VAR_2, uint8_t VAR_3,
    uint32_t VAR_4, uint16_t VAR_5, uint16_t *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8 = 0;

 if (VAR_2->chip_id < VAR_1) {
  VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6);
 } else if (VAR_2->chip_id < VAR_0) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (*VAR_6 >= 2000 || *VAR_6 == 0)
   *VAR_6 = 1150;
 } else {
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
  *VAR_6 = (uint16_t)(VAR_7/100);
 }
 return VAR_8;
}
