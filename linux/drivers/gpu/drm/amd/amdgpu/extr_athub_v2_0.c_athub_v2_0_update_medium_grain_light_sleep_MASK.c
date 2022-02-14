
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct amdgpu_device *VAR_5,
        bool VAR_6)
{
 uint32_t VAR_7, VAR_8;

 VAR_7 = VAR_8 = FUNC_0(VAR_2, 0, VAR_4);

 if (VAR_6 && (VAR_5->cg_flags & VAR_1) &&
     (VAR_5->cg_flags & VAR_0))
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;

 if (VAR_7 != VAR_8)
  FUNC_1(VAR_2, 0, VAR_4, VAR_8);
}
