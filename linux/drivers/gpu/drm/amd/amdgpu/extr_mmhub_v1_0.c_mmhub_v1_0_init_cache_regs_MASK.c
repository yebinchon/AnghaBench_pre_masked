
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ translate_further; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_22)
{
 uint32_t VAR_23;

 if (FUNC_3(VAR_22))
  return;


 VAR_23 = FUNC_1(VAR_9, 0, VAR_17);
 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_2, 1);
 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_3, 1);

 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_8,
       0);
 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_10, 0);
 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_1, 1);
 VAR_23 = FUNC_0(VAR_23, VAR_13, VAR_4, 0);
 FUNC_2(VAR_9, 0, VAR_17, VAR_23);

 VAR_23 = FUNC_1(VAR_9, 0, VAR_18);
 VAR_23 = FUNC_0(VAR_23, VAR_14, VAR_5, 1);
 VAR_23 = FUNC_0(VAR_23, VAR_14, VAR_6, 1);
 FUNC_2(VAR_9, 0, VAR_18, VAR_23);

 if (VAR_22->gmc.translate_further) {
  VAR_23 = FUNC_0(VAR_23, VAR_15, VAR_0, 12);
  VAR_23 = FUNC_0(VAR_23, VAR_15,
        VAR_7, 9);
 } else {
  VAR_23 = FUNC_0(VAR_23, VAR_15, VAR_0, 9);
  VAR_23 = FUNC_0(VAR_23, VAR_15,
        VAR_7, 6);
 }
 FUNC_2(VAR_9, 0, VAR_19, VAR_23);

 VAR_23 = VAR_21;
 VAR_23 = FUNC_0(VAR_23, VAR_16, VAR_11, 0);
 VAR_23 = FUNC_0(VAR_23, VAR_16, VAR_12, 0);
 FUNC_2(VAR_9, 0, VAR_20, VAR_23);
}
