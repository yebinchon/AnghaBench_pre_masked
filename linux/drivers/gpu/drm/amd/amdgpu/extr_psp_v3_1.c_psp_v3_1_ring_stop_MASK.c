
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct psp_context*) ;
 int FUNC_4 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct psp_context *VAR_4,
         enum psp_ring_type VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 struct amdgpu_device *VAR_8 = VAR_4->adev;

 if (FUNC_3(VAR_4)) {

  VAR_7 = VAR_0;
  FUNC_1(VAR_1, 0, VAR_2, VAR_7);


  FUNC_2(20);


  VAR_6 = FUNC_4(VAR_4,
    FUNC_0(VAR_1, 0, VAR_2),
    0x80000000, 0x80000000, 0);
 } else {

  VAR_7 = 3 << 16;
  FUNC_1(VAR_1, 0, VAR_3, VAR_7);


  FUNC_2(20);


  VAR_6 = FUNC_4(VAR_4,
    FUNC_0(VAR_1, 0, VAR_3),
    0x80000000, 0x80000000, 0);
 }

 return VAR_6;
}
