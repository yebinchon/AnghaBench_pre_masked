
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zx_vou_hw {int dev; TYPE_1__* aux_crtc; TYPE_1__* main_crtc; scalar_t__ osd; scalar_t__ timing; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int crtc; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct zx_vou_hw *VAR_11 = VAR_10;
 u32 VAR_12;


 VAR_12 = FUNC_3(VAR_11->timing + VAR_8);
 FUNC_4(VAR_11->timing + VAR_8, VAR_12);

 if (VAR_12 & VAR_7)
  FUNC_1(&VAR_11->main_crtc->crtc);

 if (VAR_12 & VAR_6)
  FUNC_1(&VAR_11->aux_crtc->crtc);


 VAR_12 = FUNC_3(VAR_11->osd + VAR_5);
 FUNC_4(VAR_11->osd + VAR_2, VAR_12);

 if (VAR_12 & VAR_4)
  FUNC_2(VAR_11->main_crtc);

 if (VAR_12 & VAR_1)
  FUNC_2(VAR_11->aux_crtc);

 if (VAR_12 & VAR_3)
  FUNC_0(VAR_11->dev, "OSD ERROR: 0x%08x!\n", VAR_12);

 return VAR_0;
}
