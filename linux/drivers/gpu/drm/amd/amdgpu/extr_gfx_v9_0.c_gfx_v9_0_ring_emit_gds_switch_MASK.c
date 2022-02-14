
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,int ,int,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_6,
       uint32_t VAR_7,
       uint32_t VAR_8, uint32_t VAR_9,
       uint32_t VAR_10, uint32_t VAR_11,
       uint32_t VAR_12, uint32_t VAR_13)
{
 struct amdgpu_device *VAR_14 = VAR_6->adev;


 FUNC_1(VAR_6, 0, 0,
       FUNC_0(VAR_0, 0, VAR_4) + 2 * VAR_7,
       VAR_8);


 FUNC_1(VAR_6, 0, 0,
       FUNC_0(VAR_0, 0, VAR_5) + 2 * VAR_7,
       VAR_9);


 FUNC_1(VAR_6, 0, 0,
       FUNC_0(VAR_0, 0, VAR_2) + VAR_7,
       VAR_11 << VAR_1 | VAR_10);


 FUNC_1(VAR_6, 0, 0,
       FUNC_0(VAR_0, 0, VAR_3) + VAR_7,
       (1 << (VAR_13 + VAR_12)) - (1 << VAR_12));
}
