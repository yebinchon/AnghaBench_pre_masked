
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rotation; TYPE_2__* fb; } ;
struct malidp_plane_state {TYPE_3__ base; } ;
typedef enum mmu_prefetch_mode { ____Placeholder_mmu_prefetch_mode } mmu_prefetch_mode ;
struct TYPE_5__ {int modifier; TYPE_1__* format; } ;
struct TYPE_4__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct malidp_plane_state*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static enum mmu_prefetch_mode FUNC_4
  (struct malidp_plane_state *VAR_5, u32 *VAR_6)
{
 u32 VAR_7;


 VAR_7 = *VAR_6 & VAR_0;

 while (VAR_7) {
  u32 VAR_8 = 1 << FUNC_1(VAR_7);

  if (FUNC_2(VAR_5, VAR_8)) {
   *VAR_6 = VAR_8;
   return VAR_2;
  }

  VAR_7 -= VAR_8;
 }


 VAR_7 = *VAR_6 & VAR_1;

 if (FUNC_3(VAR_5->base.fb->format->format,
           VAR_5->base.fb->modifier,
           VAR_5->base.rotation)) {

  *VAR_6 = 1 << FUNC_0(VAR_7);
  return VAR_4;
 }
 *VAR_6 = 0;
 return VAR_3;
}
