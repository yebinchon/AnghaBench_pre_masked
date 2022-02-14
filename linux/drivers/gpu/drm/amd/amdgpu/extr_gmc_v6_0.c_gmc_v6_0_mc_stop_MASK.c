
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_4)
{
 u32 VAR_5;

 FUNC_4((void *)VAR_4);

 VAR_5 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_5, VAR_1, VAR_0) != 1) {

  FUNC_3(VAR_2, 0);

  VAR_5 = FUNC_1(VAR_5,
      VAR_1, VAR_0, 0);
  FUNC_3(VAR_3, VAR_5 | 1);
 }

 FUNC_5(100);

}
