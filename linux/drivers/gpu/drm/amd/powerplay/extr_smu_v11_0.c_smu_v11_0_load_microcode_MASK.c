
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct TYPE_6__ {int ucode_array_offset_bytes; } ;
struct smc_firmware_header_v1_0 {TYPE_3__ header; } ;
struct TYPE_5__ {TYPE_1__* fw; } ;
struct amdgpu_device {int usec_timeout; TYPE_2__ pm; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int const) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_9->adev;
 const uint32_t *VAR_11;
 const struct smc_firmware_header_v1_0 *VAR_12;
 uint32_t VAR_13 = VAR_6;
 uint32_t VAR_14;
 uint32_t VAR_15;

 VAR_12 = (const struct smc_firmware_header_v1_0 *) VAR_10->pm.fw->data;
 VAR_11 = (const uint32_t *)(VAR_10->pm.fw->data +
  FUNC_2(VAR_12->header.ucode_array_offset_bytes));

 for (VAR_14 = 1; VAR_14 < VAR_4/4 - 1; VAR_14++) {
  FUNC_1(VAR_13, VAR_11[VAR_14]);
  VAR_13 += 4;
 }

 FUNC_1(VAR_3 | (VAR_8 & 0xffffffff),
  1 & VAR_5);
 FUNC_1(VAR_3 | (VAR_8 & 0xffffffff),
  1 & ~VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_10->usec_timeout; VAR_14++) {
  VAR_15 = FUNC_0(VAR_3 |
   (VAR_7 & 0xffffffff));
  if ((VAR_15 & VAR_1) >>
   VAR_2)
   break;
  FUNC_3(1);
 }

 if (VAR_14 == VAR_10->usec_timeout)
  return -VAR_0;

 return 0;
}
