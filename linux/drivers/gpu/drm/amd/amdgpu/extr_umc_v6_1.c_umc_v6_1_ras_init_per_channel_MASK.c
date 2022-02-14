
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ras_err_data {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7,
      struct ras_err_data *VAR_8,
      uint32_t VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_12 =
  FUNC_2(VAR_2, 0, VAR_6);
 VAR_13 =
  FUNC_2(VAR_2, 0, VAR_5);


 VAR_11 = FUNC_1(VAR_12 + VAR_9);
 VAR_11 = FUNC_0(VAR_11, VAR_3,
     VAR_0, 0);

 VAR_11 = FUNC_0(VAR_11, VAR_3,
     VAR_1, 0x1);
 FUNC_3(VAR_12 + VAR_9, VAR_11);

 FUNC_3(VAR_13 + VAR_9, VAR_4);


 VAR_11 = FUNC_0(VAR_11, VAR_3,
     VAR_0, 1);
 FUNC_3(VAR_12 + VAR_9, VAR_11);
 FUNC_3(VAR_13 + VAR_9, VAR_4);
}
