
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct amdgpu_ring {int wptr_offs; int me; int pipe; int queue; int doorbell_index; int mqd_obj; } ;
struct TYPE_8__ {unsigned long long gpu_addr; } ;
struct TYPE_6__ {int queue_bitmap; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;
struct TYPE_7__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_2__ mec; TYPE_1__ kiq; } ;
struct amdgpu_device {TYPE_4__ wb; TYPE_3__ gfx; } ;
typedef int queue_mask ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 unsigned long long FUNC_8 (int ) ;
 int FUNC_9 (struct amdgpu_ring*,int) ;
 int FUNC_10 (struct amdgpu_ring*) ;
 int FUNC_11 (struct amdgpu_ring*,int) ;
 int FUNC_12 (unsigned long long) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (unsigned long long) ;

__attribute__((used)) static int FUNC_15(struct amdgpu_device *VAR_3)
{
 struct amdgpu_ring *VAR_4 = &VAR_3->gfx.kiq.ring;
 uint64_t VAR_5 = 0;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  if (!FUNC_13(VAR_7, VAR_3->gfx.mec.queue_bitmap))
   continue;




  if (FUNC_7(VAR_7 >= (sizeof(VAR_5)*8))) {
   FUNC_0("Invalid KCQ enabled: %d\n", VAR_7);
   break;
  }

  VAR_5 |= (1ull << VAR_7);
 }

 VAR_6 = FUNC_9(VAR_4, (8 * VAR_3->gfx.num_compute_rings) + 8);
 if (VAR_6) {
  FUNC_0("Failed to lock KIQ (%d).\n", VAR_6);
  return VAR_6;
 }

 FUNC_11(VAR_4, FUNC_1(VAR_2, 6));
 FUNC_11(VAR_4, 0);
 FUNC_11(VAR_4, FUNC_12(VAR_5));
 FUNC_11(VAR_4, FUNC_14(VAR_5));
 FUNC_11(VAR_4, 0);
 FUNC_11(VAR_4, 0);
 FUNC_11(VAR_4, 0);
 FUNC_11(VAR_4, 0);
 for (VAR_7 = 0; VAR_7 < VAR_3->gfx.num_compute_rings; VAR_7++) {
  struct amdgpu_ring *VAR_8 = &VAR_3->gfx.compute_ring[VAR_7];
  uint64_t VAR_9 = FUNC_8(VAR_8->mqd_obj);
  uint64_t VAR_10 = VAR_3->wb.gpu_addr + (VAR_8->wptr_offs * 4);


  FUNC_11(VAR_4, FUNC_1(VAR_1, 5));

  FUNC_11(VAR_4,
      FUNC_4(1));
  FUNC_11(VAR_4,
      FUNC_2(VAR_8->doorbell_index) |
      FUNC_6(VAR_8->queue) |
      FUNC_5(VAR_8->pipe) |
      FUNC_3(VAR_8->me == 1 ? 0 : 1));
  FUNC_11(VAR_4, FUNC_12(VAR_9));
  FUNC_11(VAR_4, FUNC_14(VAR_9));
  FUNC_11(VAR_4, FUNC_12(VAR_10));
  FUNC_11(VAR_4, FUNC_14(VAR_10));
 }

 FUNC_10(VAR_4);

 return 0;
}
