
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee1394_device_id {int vendor_id; int model_id; int specifier_id; int version; int match_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(const struct ieee1394_device_id *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5[0] == VAR_4->vendor_id)
  VAR_6 |= VAR_2;
 if (VAR_5[1] == VAR_4->model_id)
  VAR_6 |= VAR_0;
 if (VAR_5[2] == VAR_4->specifier_id)
  VAR_6 |= VAR_1;
 if (VAR_5[3] == VAR_4->version)
  VAR_6 |= VAR_3;

 return (VAR_6 & VAR_4->match_flags) == VAR_4->match_flags;
}
