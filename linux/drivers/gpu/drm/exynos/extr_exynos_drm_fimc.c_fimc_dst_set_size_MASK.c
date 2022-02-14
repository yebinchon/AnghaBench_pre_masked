
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fimc_context {int dev; } ;
struct TYPE_6__ {int w; int h; int y; int x; } ;
struct TYPE_5__ {unsigned int* pitch; scalar_t__ width; int height; } ;
struct exynos_drm_ipp_buffer {TYPE_3__ rect; TYPE_2__ buf; TYPE_1__* format; } ;
struct TYPE_4__ {unsigned int* cpp; } ;


 int FUNC_0 (int ,char*,unsigned int,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int) ;
 int VAR_10 ;
 int FUNC_9 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (struct fimc_context*,int ) ;
 int FUNC_13 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_14(struct fimc_context *VAR_14,
        struct exynos_drm_ipp_buffer *VAR_15)
{
 unsigned int VAR_16 = VAR_15->buf.pitch[0] / VAR_15->format->cpp[0];
 u32 VAR_17, VAR_18;

 FUNC_0(VAR_14->dev, "hsize[%d]vsize[%d]\n", VAR_16,
     VAR_15->buf.height);


 VAR_17 = (FUNC_10(VAR_16) |
  FUNC_11(VAR_15->buf.height));

 FUNC_13(VAR_14, VAR_17, VAR_12);

 FUNC_0(VAR_14->dev, "x[%d]y[%d]w[%d]h[%d]\n", VAR_15->rect.x,
     VAR_15->rect.y,
     VAR_15->rect.w, VAR_15->rect.h);


 VAR_17 = FUNC_12(VAR_14, VAR_0);
 VAR_17 &= ~VAR_3;

 if (VAR_15->buf.width >= VAR_13)
  VAR_17 |= VAR_2;
 else
  VAR_17 |= VAR_1;

 FUNC_13(VAR_14, VAR_17, VAR_0);

 VAR_18 = FUNC_12(VAR_14, VAR_8);


 VAR_17 = FUNC_12(VAR_14, VAR_8);
 VAR_17 &= ~(VAR_10 |
  VAR_11);
 if (VAR_18 & VAR_9)
  VAR_17 |= (FUNC_8(VAR_15->rect.h) |
   FUNC_9(VAR_15->rect.w));
 else
  VAR_17 |= (FUNC_8(VAR_15->rect.w) |
   FUNC_9(VAR_15->rect.h));
 FUNC_13(VAR_14, VAR_17, VAR_8);


 VAR_17 = FUNC_7(VAR_15->rect.w * VAR_15->rect.h);
 FUNC_13(VAR_14, VAR_17, VAR_7);


 VAR_17 = (FUNC_5(VAR_15->rect.x) |
  FUNC_6(VAR_15->rect.y));
 FUNC_13(VAR_14, VAR_17, VAR_6);
 VAR_17 = (FUNC_1(VAR_15->rect.x) |
  FUNC_2(VAR_15->rect.y));
 FUNC_13(VAR_14, VAR_17, VAR_4);
 VAR_17 = (FUNC_3(VAR_15->rect.x) |
  FUNC_4(VAR_15->rect.y));
 FUNC_13(VAR_14, VAR_17, VAR_5);
}
