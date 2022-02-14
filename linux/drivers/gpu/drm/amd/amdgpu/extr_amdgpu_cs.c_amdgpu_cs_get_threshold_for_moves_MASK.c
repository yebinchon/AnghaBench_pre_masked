
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int last_update_us; int accum_us; int accum_us_vis; int lock; int log2_max_MBps; } ;
struct TYPE_5__ {int * man; } ;
struct TYPE_6__ {TYPE_1__ bdev; } ;
struct TYPE_8__ {int real_vram_size; int visible_vram_size; } ;
struct amdgpu_device {int flags; TYPE_3__ mm_stats; TYPE_2__ mman; TYPE_4__ gmc; int vram_pin_size; } ;
typedef int s64 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,int) ;
 void* FUNC_8 (int,int const) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_12(struct amdgpu_device *VAR_2,
           u64 *VAR_3,
           u64 *VAR_4)
{
 s64 VAR_5, VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 const s64 VAR_10 = 200000;

 if (!VAR_2->mm_stats.log2_max_MBps) {
  *VAR_3 = 0;
  *VAR_4 = 0;
  return;
 }

 VAR_8 = VAR_2->gmc.real_vram_size - FUNC_3(&VAR_2->vram_pin_size);
 VAR_9 = FUNC_1(&VAR_2->mman.bdev.man[VAR_1]);
 VAR_7 = VAR_9 >= VAR_8 ? 0 : VAR_8 - VAR_9;

 FUNC_9(&VAR_2->mm_stats.lock);


 VAR_5 = FUNC_6(FUNC_5());
 VAR_6 = VAR_5 - VAR_2->mm_stats.last_update_us;
 VAR_2->mm_stats.last_update_us = VAR_5;
 VAR_2->mm_stats.accum_us = FUNC_8(VAR_2->mm_stats.accum_us + VAR_6,
                                      VAR_10);
 if (VAR_7 >= 128 * 1024 * 1024 || VAR_7 >= VAR_8 / 8) {
  s64 VAR_11;




  if (!(VAR_2->flags & VAR_0))
   VAR_11 = FUNC_4(VAR_2, VAR_7 / 4);
  else
   VAR_11 = 0;

  VAR_2->mm_stats.accum_us = FUNC_7(VAR_11, VAR_2->mm_stats.accum_us);
 }




 *VAR_3 = FUNC_11(VAR_2, VAR_2->mm_stats.accum_us);


 if (!FUNC_0(&VAR_2->gmc)) {
  u64 VAR_12 = VAR_2->gmc.visible_vram_size;
  u64 VAR_13 =
   FUNC_2(&VAR_2->mman.bdev.man[VAR_1]);

  if (VAR_13 < VAR_12) {
   u64 VAR_14 = VAR_12 - VAR_13;
   VAR_2->mm_stats.accum_us_vis = FUNC_8(VAR_2->mm_stats.accum_us_vis +
         VAR_6, VAR_10);

   if (VAR_14 >= VAR_12 / 2)
    VAR_2->mm_stats.accum_us_vis =
     FUNC_7(FUNC_4(VAR_2, VAR_14 / 2),
         VAR_2->mm_stats.accum_us_vis);
  }

  *VAR_4 = FUNC_11(VAR_2, VAR_2->mm_stats.accum_us_vis);
 } else {
  *VAR_4 = 0;
 }

 FUNC_10(&VAR_2->mm_stats.lock);
}
