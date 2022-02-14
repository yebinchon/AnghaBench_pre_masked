
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_5,
         bool VAR_6)
{
 FUNC_0(VAR_5);

 if (VAR_6) {



  FUNC_5(VAR_5, VAR_6);

  FUNC_3(VAR_5, VAR_6);

  FUNC_4(VAR_5, VAR_6);
 } else {



  FUNC_4(VAR_5, VAR_6);

  FUNC_3(VAR_5, VAR_6);

  FUNC_5(VAR_5, VAR_6);
 }

 if (VAR_5->cg_flags &
     (VAR_4 |
      VAR_3 |
      VAR_2 |
      VAR_3 |
      VAR_0 |
      VAR_1))
  FUNC_2(VAR_5, VAR_6);

 FUNC_1(VAR_5);

 return 0;
}
