
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int crtc_mask; } ;
struct TYPE_3__ {int output_flags; } ;
struct intel_sdvo {TYPE_2__ base; TYPE_1__ caps; scalar_t__ controlled_output; } ;


 int FUNC_0 (char*,int ,unsigned char,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct intel_sdvo*,int) ;
 int FUNC_3 (struct intel_sdvo*,int) ;
 int FUNC_4 (struct intel_sdvo*,int) ;
 int FUNC_5 (struct intel_sdvo*,int) ;
 int FUNC_6 (unsigned char*,int *,int) ;

__attribute__((used)) static bool
FUNC_7(struct intel_sdvo *VAR_10, u16 VAR_11)
{


 if (VAR_11 & VAR_6)
  if (!FUNC_3(VAR_10, 0))
   return 0;

 if ((VAR_11 & VAR_9) == VAR_9)
  if (!FUNC_3(VAR_10, 1))
   return 0;


 if (VAR_11 & VAR_5)
  if (!FUNC_5(VAR_10, VAR_5))
   return 0;

 if (VAR_11 & VAR_1)
  if (!FUNC_5(VAR_10, VAR_1))
   return 0;

 if (VAR_11 & VAR_7)
  if (!FUNC_5(VAR_10, VAR_7))
   return 0;

 if (VAR_11 & VAR_4)
  if (!FUNC_2(VAR_10, 0))
   return 0;

 if ((VAR_11 & VAR_8) == VAR_8)
  if (!FUNC_2(VAR_10, 1))
   return 0;

 if (VAR_11 & VAR_2)
  if (!FUNC_4(VAR_10, 0))
   return 0;

 if ((VAR_11 & VAR_0) == VAR_0)
  if (!FUNC_4(VAR_10, 1))
   return 0;

 if ((VAR_11 & VAR_3) == 0) {
  unsigned char VAR_12[2];

  VAR_10->controlled_output = 0;
  FUNC_6(VAR_12, &VAR_10->caps.output_flags, 2);
  FUNC_0("%s: Unknown SDVO output type (0x%02x%02x)\n",
         FUNC_1(VAR_10),
         VAR_12[0], VAR_12[1]);
  return 0;
 }
 VAR_10->base.crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);

 return 1;
}
