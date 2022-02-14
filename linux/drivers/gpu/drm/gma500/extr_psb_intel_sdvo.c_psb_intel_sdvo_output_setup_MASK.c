
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int needs_tv_clock; int crtc_mask; } ;
struct TYPE_3__ {int output_flags; } ;
struct psb_intel_sdvo {int is_tv; int is_lvds; TYPE_2__ base; TYPE_1__ caps; scalar_t__ controlled_output; } ;


 int FUNC_0 (char*,int ,unsigned char,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (struct psb_intel_sdvo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (unsigned char*,int *,int) ;
 int FUNC_3 (struct psb_intel_sdvo*,int) ;
 int FUNC_4 (struct psb_intel_sdvo*,int) ;
 int FUNC_5 (struct psb_intel_sdvo*,int) ;
 int FUNC_6 (struct psb_intel_sdvo*,int) ;

__attribute__((used)) static bool
FUNC_7(struct psb_intel_sdvo *VAR_9, uint16_t VAR_10)
{
 VAR_9->is_tv = 0;
 VAR_9->base.needs_tv_clock = 0;
 VAR_9->is_lvds = 0;



 if (VAR_10 & VAR_6)
  if (!FUNC_4(VAR_9, 0))
   return 0;

 if ((VAR_10 & VAR_8) == VAR_8)
  if (!FUNC_4(VAR_9, 1))
   return 0;


 if (VAR_10 & VAR_5)
  if (!FUNC_6(VAR_9, VAR_5))
   return 0;

 if (VAR_10 & VAR_1)
  if (!FUNC_6(VAR_9, VAR_1))
   return 0;

 if (VAR_10 & VAR_4)
  if (!FUNC_3(VAR_9, 0))
   return 0;

 if ((VAR_10 & VAR_7) == VAR_7)
  if (!FUNC_3(VAR_9, 1))
   return 0;

 if (VAR_10 & VAR_2)
  if (!FUNC_5(VAR_9, 0))
   return 0;

 if ((VAR_10 & VAR_0) == VAR_0)
  if (!FUNC_5(VAR_9, 1))
   return 0;

 if ((VAR_10 & VAR_3) == 0) {
  unsigned char VAR_11[2];

  VAR_9->controlled_output = 0;
  FUNC_2(VAR_11, &VAR_9->caps.output_flags, 2);
  FUNC_0("%s: Unknown SDVO output type (0x%02x%02x)\n",
         FUNC_1(VAR_9),
         VAR_11[0], VAR_11[1]);
  return 0;
 }
 VAR_9->base.crtc_mask = (1 << 0) | (1 << 1);

 return 1;
}
