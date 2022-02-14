
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_4,
         bool VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_7 = FUNC_1(VAR_3);

 if (VAR_5 && (VAR_4->cg_flags & VAR_0))
  VAR_7 = FUNC_0(VAR_7, VAR_2, VAR_1, 0);
 else
  VAR_7 = FUNC_0(VAR_7, VAR_2, VAR_1, 1);

 if (VAR_6 != VAR_7)
  FUNC_2(VAR_3, VAR_7);
}
