
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct smu_context {int smc_if_version; TYPE_1__* adev; } ;
struct TYPE_2__ {int asic_type; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_5)
{
 uint32_t VAR_6 = 0xff, VAR_7 = 0xff;
 uint16_t VAR_8;
 uint8_t VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_5, &VAR_6, &VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_8 = (VAR_7 >> 16) & 0xffff;
 VAR_9 = (VAR_7 >> 8) & 0xff;
 VAR_10 = (VAR_7 >> 0) & 0xff;

 switch (VAR_5->adev->asic_type) {
 case 128:
  VAR_5->smc_if_version = VAR_4;
  break;
 case 131:
  VAR_5->smc_if_version = VAR_0;
  break;
 case 130:
  VAR_5->smc_if_version = VAR_2;
  break;
 case 129:
  VAR_5->smc_if_version = VAR_3;
  break;
 default:
  FUNC_0("smu unsupported asic type:%d.\n", VAR_5->adev->asic_type);
  VAR_5->smc_if_version = VAR_1;
  break;
 }
 if (VAR_6 != VAR_5->smc_if_version) {
  FUNC_1("smu driver if version = 0x%08x, smu fw if version = 0x%08x, "
   "smu fw version = 0x%08x (%d.%d.%d)\n",
   VAR_5->smc_if_version, VAR_6,
   VAR_7, VAR_8, VAR_9, VAR_10);
  FUNC_2("SMU driver if version not matched\n");
 }

 return VAR_11;
}
