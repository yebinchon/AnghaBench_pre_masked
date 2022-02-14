
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {int* pipestat; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(struct drm_psb_private *VAR_0, int VAR_1, u32 VAR_2)
{
 if ((VAR_0->pipestat[VAR_1] & VAR_2) != VAR_2) {
  u32 VAR_3 = FUNC_4(VAR_1);
  VAR_0->pipestat[VAR_1] |= VAR_2;

  if (FUNC_2(VAR_0->dev, 0)) {
   u32 VAR_4 = FUNC_0(VAR_3);
   VAR_4 |= (VAR_2 | (VAR_2 >> 16));
   FUNC_1(VAR_4, VAR_3);
   (void) FUNC_0(VAR_3);
   FUNC_3(VAR_0->dev);
  }
 }
}
