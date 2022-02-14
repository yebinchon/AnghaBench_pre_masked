
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_4 = FUNC_0(VAR_1);
 if (VAR_3 && (VAR_2->pg_flags & VAR_0))
  VAR_4 &= ~0x8000;
 else
  VAR_4 |= 0x8000;
 if (VAR_5 != VAR_4)
  FUNC_1(VAR_1, VAR_4);
}
