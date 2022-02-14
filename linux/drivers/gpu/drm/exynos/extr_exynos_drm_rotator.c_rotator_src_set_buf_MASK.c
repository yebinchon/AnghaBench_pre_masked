
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rot_context {int dummy; } ;
struct TYPE_6__ {int w; int h; int x; int y; } ;
struct TYPE_4__ {int* pitch; int height; } ;
struct exynos_drm_ipp_buffer {int* dma_addr; TYPE_3__ rect; TYPE_2__* format; TYPE_1__ buf; } ;
struct TYPE_5__ {int* cpp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct rot_context *VAR_3,
    struct exynos_drm_ipp_buffer *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_2(VAR_4->buf.height) |
       FUNC_3(VAR_4->buf.pitch[0] / VAR_4->format->cpp[0]);
 FUNC_7(VAR_5, VAR_0);


 VAR_5 = FUNC_1(VAR_4->rect.y) | FUNC_0(VAR_4->rect.x);
 FUNC_7(VAR_5, VAR_1);
 VAR_5 = FUNC_5(VAR_4->rect.h) |
       FUNC_6(VAR_4->rect.w);
 FUNC_7(VAR_5, VAR_2);


 FUNC_7(VAR_4->dma_addr[0], FUNC_4(0));
 FUNC_7(VAR_4->dma_addr[1], FUNC_4(1));
}
