
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_ring {unsigned int ring_size; int ring_mem_mc_addr; } ;
struct psp_context {struct amdgpu_device* adev; struct psp_ring km_ring; } ;
struct amdgpu_device {int dummy; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct psp_context*) ;
 int FUNC_5 (struct psp_context*,int ,int,int,int) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_9,
    enum psp_ring_type VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 struct psp_ring *VAR_13 = &VAR_9->km_ring;
 struct amdgpu_device *VAR_14 = VAR_9->adev;

 if (FUNC_4(VAR_9)) {

  VAR_12 = FUNC_2(VAR_13->ring_mem_mc_addr);
  FUNC_1(VAR_1, 0, VAR_3, VAR_12);

  VAR_12 = FUNC_6(VAR_13->ring_mem_mc_addr);
  FUNC_1(VAR_1, 0, VAR_4, VAR_12);


  FUNC_1(VAR_1, 0, VAR_2,
          VAR_0);


  FUNC_3(20);


  VAR_11 = FUNC_5(VAR_9, FUNC_0(VAR_1, 0, VAR_2),
       0x80000000, 0x8000FFFF, 0);

 } else {

  VAR_12 = FUNC_2(VAR_13->ring_mem_mc_addr);
  FUNC_1(VAR_1, 0, VAR_6, VAR_12);

  VAR_12 = FUNC_6(VAR_13->ring_mem_mc_addr);
  FUNC_1(VAR_1, 0, VAR_7, VAR_12);

  VAR_12 = VAR_13->ring_size;
  FUNC_1(VAR_1, 0, VAR_8, VAR_12);

  VAR_12 = VAR_10;
  VAR_12 = VAR_12 << 16;
  FUNC_1(VAR_1, 0, VAR_5, VAR_12);


  FUNC_3(20);


  VAR_11 = FUNC_5(VAR_9, FUNC_0(VAR_1, 0, VAR_5),
       0x80000000, 0x8000FFFF, 0);
 }

 return VAR_11;
}
