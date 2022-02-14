
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fimc_context {int dev; } ;
struct TYPE_6__ {unsigned int* pitch; int height; } ;
struct TYPE_5__ {int x; unsigned int w; int y; int h; } ;
struct exynos_drm_ipp_buffer {TYPE_3__ buf; TYPE_2__ rect; TYPE_1__* format; } ;
struct TYPE_4__ {unsigned int* cpp; } ;


 int FUNC_0 (int ,char*,int,int,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (struct fimc_context*,int ) ;
 int FUNC_6 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct fimc_context *VAR_5,
       struct exynos_drm_ipp_buffer *VAR_6)
{
 unsigned int VAR_7 = VAR_6->buf.pitch[0] / VAR_6->format->cpp[0];
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


 VAR_9 = VAR_6->rect.x;
 VAR_10 = VAR_7 - VAR_6->rect.w - VAR_6->rect.x;
 VAR_11 = VAR_6->rect.y;
 VAR_12 = VAR_6->buf.height - VAR_6->rect.h - VAR_6->rect.y;

 FUNC_0(VAR_5->dev, "x[%d]y[%d]w[%d]h[%d]hsize[%d]vsize[%d]\n",
     VAR_6->rect.x, VAR_6->rect.y, VAR_6->rect.w, VAR_6->rect.h,
     VAR_7, VAR_6->buf.height);
 FUNC_0(VAR_5->dev, "h1[%d]h2[%d]v1[%d]v2[%d]\n", VAR_9, VAR_10, VAR_11,
     VAR_12);





 VAR_8 = FUNC_5(VAR_5, VAR_0);
 VAR_8 &= ~(VAR_2 |
  VAR_4);
 VAR_8 |= (FUNC_3(VAR_9) |
  FUNC_4(VAR_11));
 VAR_8 |= VAR_3;
 FUNC_6(VAR_5, VAR_8, VAR_0);

 VAR_8 = (FUNC_1(VAR_10) |
  FUNC_2(VAR_12));
 FUNC_6(VAR_5, VAR_8, VAR_1);
}
