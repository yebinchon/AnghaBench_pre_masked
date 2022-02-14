
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rot_context {int dummy; } ;
struct TYPE_5__ {int x; int y; } ;
struct TYPE_6__ {int* pitch; int height; } ;
struct exynos_drm_ipp_buffer {int* dma_addr; TYPE_2__ rect; TYPE_1__* format; TYPE_3__ buf; } ;
struct TYPE_4__ {int* cpp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct rot_context *VAR_2,
    struct exynos_drm_ipp_buffer *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_3(VAR_3->buf.height) |
       FUNC_4(VAR_3->buf.pitch[0] / VAR_3->format->cpp[0]);
 FUNC_5(VAR_4, VAR_0);


 VAR_4 = FUNC_1(VAR_3->rect.y) | FUNC_0(VAR_3->rect.x);
 FUNC_5(VAR_4, VAR_1);


 FUNC_5(VAR_3->dma_addr[0], FUNC_2(0));
 FUNC_5(VAR_3->dma_addr[1], FUNC_2(1));
}
