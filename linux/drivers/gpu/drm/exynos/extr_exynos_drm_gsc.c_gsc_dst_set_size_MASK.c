
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct gsc_scaler {scalar_t__ range; } ;
struct gsc_context {scalar_t__ rotation; struct gsc_scaler sc; } ;
struct TYPE_6__ {scalar_t__ h; scalar_t__ w; int y; int x; } ;
struct TYPE_5__ {int* pitch; int height; } ;
struct exynos_drm_ipp_buffer {TYPE_3__ rect; TYPE_2__ buf; TYPE_1__* format; } ;
struct TYPE_4__ {int* cpp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct gsc_context *VAR_12,
        struct exynos_drm_ipp_buffer *VAR_13)
{
 struct gsc_scaler *VAR_14 = &VAR_12->sc;
 u32 VAR_15;


 VAR_15 = (FUNC_1(VAR_13->rect.x) |
  FUNC_2(VAR_13->rect.y));
 FUNC_7(VAR_15, VAR_1);


 if (VAR_12->rotation)
  VAR_15 = (FUNC_5(VAR_13->rect.h) |
         FUNC_4(VAR_13->rect.w));
 else
  VAR_15 = (FUNC_5(VAR_13->rect.w) |
         FUNC_4(VAR_13->rect.h));
 FUNC_7(VAR_15, VAR_10);


 VAR_15 = FUNC_6(VAR_2);
 VAR_15 &= ~(VAR_0 | VAR_3);
 VAR_15 |= FUNC_3(VAR_13->buf.pitch[0] / VAR_13->format->cpp[0]) |
        FUNC_0(VAR_13->buf.height);
 FUNC_7(VAR_15, VAR_2);

 VAR_15 = FUNC_6(VAR_4);
 VAR_15 &= ~VAR_9;

 if (VAR_13->rect.w >= VAR_11)
  if (VAR_14->range)
   VAR_15 |= VAR_6;
  else
   VAR_15 |= VAR_5;
 else
  if (VAR_14->range)
   VAR_15 |= VAR_8;
  else
   VAR_15 |= VAR_7;

 FUNC_7(VAR_15, VAR_4);
}
