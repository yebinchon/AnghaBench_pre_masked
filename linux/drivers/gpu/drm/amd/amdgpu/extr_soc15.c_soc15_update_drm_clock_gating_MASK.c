
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3, bool VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_6 = FUNC_0(FUNC_1(VAR_1, 0, VAR_2));

 if (VAR_4 && (VAR_3->cg_flags & VAR_0))
  VAR_6 &= ~(0x01000000 |
     0x02000000 |
     0x04000000 |
     0x08000000 |
     0x10000000 |
     0x20000000 |
     0x40000000 |
     0x80000000);
 else
  VAR_6 |= (0x01000000 |
    0x02000000 |
    0x04000000 |
    0x08000000 |
    0x10000000 |
    0x20000000 |
    0x40000000 |
    0x80000000);

 if (VAR_5 != VAR_6)
  FUNC_2(FUNC_1(VAR_1, 0, VAR_2), VAR_6);
}
