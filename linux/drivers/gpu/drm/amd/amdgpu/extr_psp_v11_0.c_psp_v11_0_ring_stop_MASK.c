
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct psp_context*) ;
 int FUNC_4 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct psp_context *VAR_5,
         enum psp_ring_type VAR_6)
{
 int VAR_7 = 0;
 struct amdgpu_device *VAR_8 = VAR_5->adev;


 if (FUNC_3(VAR_5))
  FUNC_1(VAR_2, 0, VAR_3,
         VAR_0);
 else
  FUNC_1(VAR_2, 0, VAR_4,
         VAR_1);


 FUNC_2(20);


 if (FUNC_3(VAR_5))
  VAR_7 = FUNC_4(VAR_5, FUNC_0(VAR_2, 0, VAR_3),
       0x80000000, 0x80000000, 0);
 else
  VAR_7 = FUNC_4(VAR_5, FUNC_0(VAR_2, 0, VAR_4),
       0x80000000, 0x80000000, 0);

 return VAR_7;
}
