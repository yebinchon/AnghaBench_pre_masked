
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int** sequence; int seq_version; } ;
struct TYPE_4__ {TYPE_1__ dsi; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;



 int const VAR_0 ;


 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_2)
{
 const u8 *VAR_3 = VAR_2->vbt.dsi.sequence[VAR_1];
 int VAR_4, VAR_5;

 if (FUNC_0(!VAR_3 || VAR_2->vbt.dsi.seq_version != 1))
  return 0;


 for (VAR_4 = 1; VAR_3[VAR_4] != VAR_0; VAR_4 += VAR_5) {
  switch (VAR_3[VAR_4]) {
  case 128:
   return VAR_4 == 1 ? 0 : VAR_4;
  case 130:
   VAR_5 = 5;
   break;
  case 129:
   VAR_5 = 3;
   break;
  default:
   return 0;
  }
 }

 return 0;
}
