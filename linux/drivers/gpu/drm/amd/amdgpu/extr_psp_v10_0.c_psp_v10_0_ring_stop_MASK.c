
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct psp_context *VAR_2,
          enum psp_ring_type VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 struct amdgpu_device *VAR_6 = VAR_2->adev;


 VAR_5 = 3 << 16;
 FUNC_1(VAR_0, 0, VAR_1, VAR_5);


 FUNC_2(20);


 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_0, 0, VAR_1),
      0x80000000, 0x80000000, 0);

 return VAR_4;
}
