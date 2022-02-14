
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1,
          bool VAR_2)
{
 uint32_t VAR_3, VAR_4;

 VAR_3 = VAR_4 = FUNC_0(0x157a);

 if (VAR_2 && (VAR_1->cg_flags & VAR_0))
  VAR_4 |= 1;
 else
  VAR_4 &= ~1;

 if (VAR_3 != VAR_4)
  FUNC_1(0x157a, VAR_4);
}
