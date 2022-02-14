
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct cgs_device {int dummy; } ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;
struct TYPE_2__ {int asic_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static uint32_t FUNC_1(struct cgs_device *VAR_13, uint32_t VAR_14)
{
 VAR_10;
 enum AMDGPU_UCODE_ID VAR_15 = VAR_5;

 switch (VAR_14) {
 case 130:
  VAR_15 = VAR_7;
  break;
 case 129:
  VAR_15 = VAR_8;
  break;
 case 137:
  VAR_15 = VAR_0;
  break;
 case 132:
  VAR_15 = VAR_4;
  break;
 case 136:
  VAR_15 = VAR_1;
  break;
 case 135:
 case 134:
  VAR_15 = VAR_2;
  break;
 case 133:




  if (VAR_12->asic_type >= VAR_11)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_3;
  break;
 case 131:
  VAR_15 = VAR_6;
  break;
 case 128:
  VAR_15 = VAR_9;
  break;
 default:
  FUNC_0("Firmware type not supported\n");
 }
 return VAR_15;
}
