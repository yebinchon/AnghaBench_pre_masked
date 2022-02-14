
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pti_device {int mode; int clkdiv; int freeclk; int lpp_dest; int lpp_dest_mask; TYPE_2__* thdev; scalar_t__ base; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ output; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_10 ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct pti_device *VAR_11)
{
 u32 VAR_12 = FUNC_1(VAR_11->base + VAR_9);

 VAR_11->mode = (VAR_12 & VAR_8) >> FUNC_0(VAR_8);
 VAR_11->clkdiv = (VAR_12 & VAR_6) >> FUNC_0(VAR_6);
 VAR_11->freeclk = !!(VAR_12 & VAR_7);

 if (!VAR_10[VAR_11->mode])
  VAR_11->mode = FUNC_2(4);
 if (!VAR_11->clkdiv)
  VAR_11->clkdiv = 1;

 if (VAR_11->thdev->output.type == VAR_0) {
  if (VAR_12 & VAR_5)
   VAR_11->lpp_dest_mask |= VAR_4;
  if (VAR_12 & VAR_1)
   VAR_11->lpp_dest_mask |= VAR_3;
  if (VAR_12 & VAR_2)
   VAR_11->lpp_dest = 1;
 }
}
