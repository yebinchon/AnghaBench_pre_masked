
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxsfb_drm_private {TYPE_1__* devdata; scalar_t__ base; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ next_buf; scalar_t__ cur_buf; } ;


 int FUNC_0 (struct mxsfb_drm_private*) ;
 int FUNC_1 (struct mxsfb_drm_private*) ;
 int FUNC_2 (struct mxsfb_drm_private*) ;
 scalar_t__ FUNC_3 (struct mxsfb_drm_private*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

void FUNC_5(struct mxsfb_drm_private *VAR_0)
{
 dma_addr_t VAR_1;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_1, VAR_0->base + VAR_0->devdata->cur_buf);
  FUNC_4(VAR_1, VAR_0->base + VAR_0->devdata->next_buf);
 }

 FUNC_2(VAR_0);
}
