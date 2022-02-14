
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct smu_context {int smc_if_version; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_0)
{
 uint32_t VAR_1 = 0xff, VAR_2 = 0xff;
 uint16_t VAR_3;
 uint8_t VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_0, &VAR_1, &VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_3 = (VAR_2 >> 16) & 0xffff;
 VAR_4 = (VAR_2 >> 8) & 0xff;
 VAR_5 = (VAR_2 >> 0) & 0xff;
 if (VAR_1 != VAR_0->smc_if_version) {
  FUNC_0("smu driver if version = 0x%08x, smu fw if version = 0x%08x, "
   "smu fw version = 0x%08x (%d.%d.%d)\n",
   VAR_0->smc_if_version, VAR_1,
   VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_1("SMU driver if version not matched\n");
 }

 return VAR_6;
}
