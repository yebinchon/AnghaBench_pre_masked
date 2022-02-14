
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_13,
         uint32_t VAR_14,
         unsigned long *VAR_15)
{
 uint32_t VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 uint64_t VAR_20;
 uint32_t VAR_21;

 VAR_17 =
  FUNC_4(VAR_5, 0, VAR_12);
 VAR_19 =
  FUNC_4(VAR_5, 0, VAR_11);
 VAR_21 =
  FUNC_4(VAR_5, 0, VAR_10);


 VAR_16 = FUNC_2(VAR_17 + VAR_14);
 VAR_16 = FUNC_1(VAR_16, VAR_7,
     VAR_2, 0);
 FUNC_5(VAR_17 + VAR_14, VAR_16);
 VAR_18 = FUNC_2(VAR_19 + VAR_14);
 *VAR_15 +=
  (FUNC_0(VAR_18, VAR_6, VAR_1) -
   VAR_8);

 FUNC_5(VAR_19 + VAR_14, VAR_8);


 VAR_16 = FUNC_1(VAR_16, VAR_7,
     VAR_2, 1);
 FUNC_5(VAR_17 + VAR_14, VAR_16);
 VAR_18 = FUNC_2(VAR_19 + VAR_14);
 *VAR_15 +=
  (FUNC_0(VAR_18, VAR_6, VAR_1) -
   VAR_8);

 FUNC_5(VAR_19 + VAR_14, VAR_8);



 VAR_20 = FUNC_3(VAR_21 + VAR_14);
 if (FUNC_0(VAR_20, VAR_4, VAR_3) == 6 &&
     FUNC_0(VAR_20, VAR_4, VAR_9) == 1 &&
     FUNC_0(VAR_20, VAR_4, VAR_0) == 1)
  *VAR_15 += 1;
}
