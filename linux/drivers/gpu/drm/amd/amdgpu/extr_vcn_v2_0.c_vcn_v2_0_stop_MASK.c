
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ dpm_enabled; } ;
struct amdgpu_device {int pg_flags; TYPE_1__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_20)
{
 uint32_t VAR_21;
 int VAR_22;

 VAR_22 = FUNC_6(VAR_20);
 if (VAR_22)
  return VAR_22;

 if (VAR_20->pg_flags & VAR_0) {
  VAR_22 = FUNC_9(VAR_20);
  if (VAR_22)
   return VAR_22;
  goto power_off;
 }


 FUNC_2(VAR_14, 0, VAR_18, VAR_12, 0x7, VAR_22);
 if (VAR_22)
  return VAR_22;

 VAR_21 = VAR_6 |
  VAR_3 |
  VAR_7 |
  VAR_8;
 FUNC_2(VAR_14, 0, VAR_16, VAR_21, VAR_21, VAR_22);
 if (VAR_22)
  return VAR_22;


 VAR_21 = FUNC_0(VAR_14, 0, VAR_15);
 VAR_21 |= VAR_2;
 FUNC_4(VAR_14, 0, VAR_15, VAR_21);

 VAR_21 = VAR_4|
  VAR_5;
 FUNC_2(VAR_14, 0, VAR_16, VAR_21, VAR_21, VAR_22);
 if (VAR_22)
  return VAR_22;


 FUNC_3(FUNC_1(VAR_1, 0, VAR_19), 0,
  ~(VAR_13));


 FUNC_3(FUNC_1(VAR_1, 0, VAR_17),
  VAR_10,
  ~VAR_10);


 FUNC_3(FUNC_1(VAR_1, 0, VAR_17),
  VAR_9,
  ~VAR_9);


 FUNC_3(FUNC_1(VAR_1, 0, VAR_17),
  VAR_11,
  ~VAR_11);


 FUNC_4(VAR_14, 0, VAR_18, 0);

 FUNC_7(VAR_20);
 FUNC_8(VAR_20);

power_off:
 if (VAR_20->pm.dpm_enabled)
  FUNC_5(VAR_20, 0);

 return 0;
}
