
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef int u32 ;
struct TYPE_3__ {int size; scalar_t__ enabled; } ;
struct TYPE_4__ {int enable; } ;
struct intel_crtc_state {int pipe_src_w; int pipe_src_h; TYPE_1__ pch_pfit; TYPE_2__ base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint_fixed_16_16_t
FUNC_4(const struct intel_crtc_state *VAR_0)
{
 uint_fixed_16_16_t VAR_1 = FUNC_3(1);

 if (!VAR_0->base.enable)
  return VAR_1;

 if (VAR_0->pch_pfit.enabled) {
  u32 VAR_2, VAR_3, VAR_4, VAR_5;
  u32 VAR_6 = VAR_0->pch_pfit.size;
  uint_fixed_16_16_t VAR_7, VAR_8;
  uint_fixed_16_16_t VAR_9, VAR_10;

  VAR_2 = VAR_0->pipe_src_w;
  VAR_3 = VAR_0->pipe_src_h;
  VAR_4 = VAR_6 >> 16;
  VAR_5 = VAR_6 & 0xffff;

  if (!VAR_4 || !VAR_5)
   return VAR_1;

  VAR_7 = FUNC_0(VAR_2, VAR_4);
  VAR_8 = FUNC_0(VAR_3, VAR_5);
  VAR_10 = FUNC_1(VAR_7, FUNC_3(1));
  VAR_9 = FUNC_1(VAR_8, FUNC_3(1));

  VAR_1 = FUNC_2(VAR_10, VAR_9);
 }

 return VAR_1;
}
