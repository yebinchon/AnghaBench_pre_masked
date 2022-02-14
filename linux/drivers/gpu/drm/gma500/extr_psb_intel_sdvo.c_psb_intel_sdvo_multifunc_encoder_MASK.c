
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_flags; } ;
struct psb_intel_sdvo {TYPE_1__ caps; } ;



__attribute__((used)) static bool
FUNC_0(struct psb_intel_sdvo *VAR_0)
{

 int VAR_1 = VAR_0->caps.output_flags & 0xf;
 return VAR_1 & -VAR_1;
}
