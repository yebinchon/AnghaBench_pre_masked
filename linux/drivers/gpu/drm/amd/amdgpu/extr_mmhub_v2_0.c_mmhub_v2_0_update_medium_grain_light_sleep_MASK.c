
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4,
             bool VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = VAR_7 = FUNC_0(VAR_1, 0, VAR_3);

 if (VAR_5 && (VAR_4->cg_flags & VAR_0))
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;

 if (VAR_6 != VAR_7)
  FUNC_1(VAR_1, 0, VAR_3, VAR_7);
}
