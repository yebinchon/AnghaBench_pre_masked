
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int crtc; } ;
struct pl111_drm_dev_private {scalar_t__ regs; TYPE_1__ pipe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct pl111_drm_dev_private *VAR_7 = VAR_6;
 u32 VAR_8;
 irqreturn_t VAR_9 = VAR_4;

 VAR_8 = FUNC_1(VAR_7->regs + VAR_2);

 if (!VAR_8)
  return VAR_4;

 if (VAR_8 & VAR_0) {
  FUNC_0(&VAR_7->pipe.crtc);

  VAR_9 = VAR_3;
 }


 FUNC_2(VAR_8, VAR_7->regs + VAR_1);

 return VAR_9;
}
