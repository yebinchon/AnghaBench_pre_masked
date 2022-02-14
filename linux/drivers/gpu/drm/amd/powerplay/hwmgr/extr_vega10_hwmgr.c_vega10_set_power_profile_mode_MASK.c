
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct vega10_hwmgr {int* custom_profile_mode; } ;
struct pp_hwmgr {size_t power_profile_mode; struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_4, long *VAR_5, uint32_t VAR_6)
{
 struct vega10_hwmgr *VAR_7 = VAR_4->backend;
 uint8_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint32_t VAR_12 = VAR_5[VAR_6];

 if (VAR_12 == VAR_3) {
  if (VAR_6 != 0 && VAR_6 != 4)
   return -VAR_0;





  if (VAR_6 == 0) {
   if (VAR_7->custom_profile_mode[0] != 0)
    goto out;
   else
    return -VAR_0;
  }

  VAR_7->custom_profile_mode[0] = VAR_8 = VAR_5[0];
  VAR_7->custom_profile_mode[1] = VAR_9 = VAR_5[1];
  VAR_7->custom_profile_mode[2] = VAR_10 = VAR_5[2];
  VAR_7->custom_profile_mode[3] = VAR_11 = VAR_5[3];
  FUNC_0(VAR_4,
     VAR_1,
     VAR_8 | VAR_9<<8 |
     VAR_10 << 16 | VAR_11<<24);
 }

out:
 FUNC_0(VAR_4, VAR_2,
      1 << VAR_12);
 VAR_4->power_profile_mode = VAR_12;

 return 0;
}
