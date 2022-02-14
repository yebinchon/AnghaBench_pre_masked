
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3,
     bool VAR_4)
{
 u32 VAR_5;


 if (VAR_3->flags & VAR_0)
  return;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_4)
  VAR_5 = FUNC_0(VAR_5, VAR_1, VAR_1, 1);
 else
  VAR_5 = FUNC_0(VAR_5, VAR_1, VAR_1, 0);

 FUNC_2(VAR_2, VAR_5);
}
