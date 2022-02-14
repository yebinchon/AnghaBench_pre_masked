
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_9,
            uint32_t VAR_10,
            unsigned long *VAR_11)
{
 uint64_t VAR_12;
 uint32_t VAR_13;

 VAR_13 =
                FUNC_2(VAR_6, 0, VAR_8);


 VAR_12 = FUNC_1(VAR_13 + VAR_10);
 if ((FUNC_0(VAR_12, VAR_1, VAR_7) == 1) &&
     (FUNC_0(VAR_12, VAR_1, VAR_0) == 1 ||
     FUNC_0(VAR_12, VAR_1, VAR_5) == 1 ||
     FUNC_0(VAR_12, VAR_1, VAR_2) == 1 ||
     FUNC_0(VAR_12, VAR_1, VAR_4) == 1 ||
     FUNC_0(VAR_12, VAR_1, VAR_3) == 1))
  *VAR_11 += 1;
}
