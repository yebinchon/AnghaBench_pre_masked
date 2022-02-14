
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_ring {unsigned int ring_size; int ring_mem_mc_addr; } ;
struct psp_context {struct amdgpu_device* adev; struct psp_ring km_ring; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct psp_context*) ;
 int FUNC_6 (struct psp_context*,int) ;
 scalar_t__ FUNC_7 (struct psp_context*) ;
 int FUNC_8 (struct psp_context*,int ,int,int,int) ;
 unsigned int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct psp_context *VAR_8,
    enum psp_ring_type VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 struct psp_ring *VAR_12 = &VAR_8->km_ring;
 struct amdgpu_device *VAR_13 = VAR_8->adev;

 FUNC_5(VAR_8);

 if (FUNC_7(VAR_8)) {
  VAR_10 = FUNC_6(VAR_8, VAR_9);
  if (VAR_10) {
   FUNC_0("psp_v3_1_ring_stop_sriov failed!\n");
   return VAR_10;
  }


  VAR_11 = FUNC_3(VAR_12->ring_mem_mc_addr);
  FUNC_2(VAR_0, 0, VAR_2, VAR_11);

  VAR_11 = FUNC_9(VAR_12->ring_mem_mc_addr);
  FUNC_2(VAR_0, 0, VAR_3, VAR_11);


  VAR_11 = VAR_9;
  VAR_11 = VAR_11 << 16;
  FUNC_2(VAR_0, 0, VAR_1, VAR_11);


  FUNC_4(20);


  VAR_10 = FUNC_8(VAR_8, FUNC_1(VAR_0, 0,
     VAR_1), 0x80000000,
     0x8000FFFF, 0);
 } else {


  VAR_11 = FUNC_3(VAR_12->ring_mem_mc_addr);
  FUNC_2(VAR_0, 0, VAR_5, VAR_11);

  VAR_11 = FUNC_9(VAR_12->ring_mem_mc_addr);
  FUNC_2(VAR_0, 0, VAR_6, VAR_11);

  VAR_11 = VAR_12->ring_size;
  FUNC_2(VAR_0, 0, VAR_7, VAR_11);

  VAR_11 = VAR_9;
  VAR_11 = VAR_11 << 16;
  FUNC_2(VAR_0, 0, VAR_4, VAR_11);


  FUNC_4(20);


  VAR_10 = FUNC_8(VAR_8, FUNC_1(VAR_0, 0,
     VAR_4), 0x80000000,
     0x8000FFFF, 0);

 }
 return VAR_10;
}
