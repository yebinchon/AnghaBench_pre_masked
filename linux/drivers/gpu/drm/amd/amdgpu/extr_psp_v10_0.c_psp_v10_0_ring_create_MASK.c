
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_ring {unsigned int ring_size; int ring_mem_mc_addr; } ;
struct psp_context {struct amdgpu_device* adev; struct psp_ring km_ring; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct psp_context*,int ,int,int,int) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct psp_context *VAR_5,
     enum psp_ring_type VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 struct psp_ring *VAR_9 = &VAR_5->km_ring;
 struct amdgpu_device *VAR_10 = VAR_5->adev;


 VAR_8 = FUNC_2(VAR_9->ring_mem_mc_addr);
 FUNC_1(VAR_0, 0, VAR_2, VAR_8);

 VAR_8 = FUNC_5(VAR_9->ring_mem_mc_addr);
 FUNC_1(VAR_0, 0, VAR_3, VAR_8);

 VAR_8 = VAR_9->ring_size;
 FUNC_1(VAR_0, 0, VAR_4, VAR_8);

 VAR_8 = VAR_6;
 VAR_8 = VAR_8 << 16;
 FUNC_1(VAR_0, 0, VAR_1, VAR_8);


 FUNC_3(20);


 VAR_7 = FUNC_4(VAR_5, FUNC_0(VAR_0, 0, VAR_1),
      0x80000000, 0x8000FFFF, 0);

 return VAR_7;
}
