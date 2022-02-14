
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_21)
{
 uint32_t VAR_22;
 int VAR_23 = 0;


 FUNC_6(FUNC_3(VAR_8, 0, VAR_17),
  VAR_9,
  ~VAR_9);


 VAR_22 = FUNC_2(VAR_14, 0, VAR_15);
 VAR_22 |= 1 << VAR_2;
 VAR_22 |= 1 << VAR_0;
 VAR_22 |= 4 << VAR_1;
 FUNC_7(VAR_14, 0, VAR_15, VAR_22);


 VAR_22 = FUNC_2(VAR_14, 0, VAR_16);
 VAR_22 |= (VAR_5
  |VAR_4
  |VAR_6
  |VAR_3
  |VAR_7);
 FUNC_7(VAR_14, 0, VAR_16, VAR_22);


 VAR_22 = FUNC_1(FUNC_3(VAR_8, 0, VAR_18));
 VAR_22 &= ~VAR_10;
 VAR_22 |= 0x1;
 FUNC_5(FUNC_3(VAR_8, 0, VAR_18), VAR_22);

 VAR_22 = 2 << VAR_11;
 FUNC_5(FUNC_3(VAR_8, 0, VAR_19), VAR_22);

 FUNC_4(VAR_14, 0, VAR_20,
  (2 << VAR_13),
  VAR_12, VAR_23);

 if (VAR_23) {
  FUNC_0("amdgpu: JPEG enable power gating failed\n");
  return VAR_23;
 }

 return VAR_23;
}
