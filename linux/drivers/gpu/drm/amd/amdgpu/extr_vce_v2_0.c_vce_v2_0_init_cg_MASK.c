
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_4 &= ~0xfff;
 VAR_4 |= ((0 << 0) | (4 << 4));
 VAR_4 |= 0x40000;
 FUNC_1(VAR_0, VAR_4);

 VAR_4 = FUNC_0(VAR_2);
 VAR_4 &= ~0xfff;
 VAR_4 |= ((0 << 0) | (4 << 4));
 FUNC_1(VAR_2, VAR_4);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= 0x10;
 VAR_4 &= ~0x100000;
 FUNC_1(VAR_1, VAR_4);
}
