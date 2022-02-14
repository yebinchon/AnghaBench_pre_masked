
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* ctm; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_color_ctm {unsigned long long* matrix; } ;
struct TYPE_3__ {struct drm_color_ctm* data; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long long const) ;
 int FUNC_1 (unsigned long long,int) ;
 unsigned long long FUNC_2 (unsigned long long,int ,scalar_t__) ;
 unsigned long long* FUNC_3 (unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state const*) ;

__attribute__((used)) static void FUNC_5(const struct intel_crtc_state *VAR_6,
    u16 VAR_7[9])
{
 const struct drm_color_ctm *VAR_8 = VAR_6->base.ctm->data;
 const u64 *VAR_9;
 u64 VAR_10[9];
 int VAR_11;

 if (FUNC_4(VAR_6))
  VAR_9 = FUNC_3(VAR_10, VAR_8->matrix);
 else
  VAR_9 = VAR_8->matrix;





 for (VAR_11 = 0; VAR_11 < 9; VAR_11++) {
  u64 VAR_12 = ((1ULL << 63) - 1) & VAR_9[VAR_11];





  VAR_12 = FUNC_2(VAR_12, 0, VAR_5 - 1);

  VAR_7[VAR_11] = 0;


  if (FUNC_0(VAR_9[VAR_11]))
   VAR_7[VAR_11] |= 1 << 15;

  if (VAR_12 < VAR_0)
   VAR_7[VAR_11] |= (3 << 12) |
    FUNC_1(VAR_12, 12);
  else if (VAR_12 < VAR_1)
   VAR_7[VAR_11] |= (2 << 12) |
    FUNC_1(VAR_12, 11);
  else if (VAR_12 < VAR_2)
   VAR_7[VAR_11] |= (1 << 12) |
    FUNC_1(VAR_12, 10);
  else if (VAR_12 < VAR_3)
   VAR_7[VAR_11] |= FUNC_1(VAR_12, 9);
  else if (VAR_12 < VAR_4)
   VAR_7[VAR_11] |= (7 << 12) |
    FUNC_1(VAR_12, 8);
  else
   VAR_7[VAR_11] |= (6 << 12) |
    FUNC_1(VAR_12, 7);
 }
}
