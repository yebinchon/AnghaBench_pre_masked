
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_7, uint32_t VAR_8,
      uint32_t VAR_9, uint32_t VAR_10,
      uint32_t VAR_11, uint32_t *VAR_12)
{
 FUNC_1(VAR_0, 0, VAR_6,
  (VAR_8 << VAR_3) |
  (VAR_10 << VAR_2) |
  (VAR_9 << VAR_4) |
  (VAR_1));
 while (VAR_11--)
  *(VAR_12++) = FUNC_0(VAR_0, 0, VAR_5);
}
