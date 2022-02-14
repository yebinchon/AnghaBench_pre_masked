
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int size; scalar_t__ enabled; } ;
struct TYPE_4__ {int crtc_clock; } ;
struct TYPE_5__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {int pipe_src_w; int pipe_src_h; TYPE_3__ pch_pfit; TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(const struct intel_crtc_state *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->base.adjusted_mode.crtc_clock;






 if (VAR_0->pch_pfit.enabled) {
  u64 VAR_2, VAR_3, VAR_4, VAR_5;
  u32 VAR_6 = VAR_0->pch_pfit.size;

  VAR_2 = VAR_0->pipe_src_w;
  VAR_3 = VAR_0->pipe_src_h;

  VAR_4 = (VAR_6 >> 16) & 0xFFFF;
  VAR_5 = VAR_6 & 0xFFFF;
  if (VAR_2 < VAR_4)
   VAR_2 = VAR_4;
  if (VAR_3 < VAR_5)
   VAR_3 = VAR_5;

  if (FUNC_0(!VAR_4 || !VAR_5))
   return VAR_1;

  VAR_1 = FUNC_1(FUNC_2(VAR_1, VAR_2 * VAR_3),
         VAR_4 * VAR_5);
 }

 return VAR_1;
}
