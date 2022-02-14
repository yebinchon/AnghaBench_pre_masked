
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_3,
          bool VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_6 = FUNC_0(VAR_2);

 if (VAR_4 && (VAR_3->cg_flags & VAR_0))
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 if (VAR_5 != VAR_6)
  FUNC_1(VAR_2, VAR_6);
}
