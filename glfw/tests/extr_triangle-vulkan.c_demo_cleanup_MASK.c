
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {int mem; int image; int view; } ;
struct TYPE_6__ {int mem; int buf; } ;
struct demo {size_t swapchainImageCount; int window; TYPE_4__* queue_props; int inst; int surface; int msg_callback; scalar_t__ validate; int device; TYPE_4__* buffers; int swapchain; TYPE_3__ depth; TYPE_2__* textures; TYPE_1__ vertices; int desc_layout; int pipeline_layout; int render_pass; int pipeline; int cmd_pool; scalar_t__ draw_cmd; scalar_t__ setup_cmd; int desc_pool; TYPE_4__* framebuffers; } ;
struct TYPE_9__ {int view; } ;
struct TYPE_7__ {int sampler; int mem; int image; int view; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,TYPE_4__,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int ,int *) ;
 int FUNC_19 (int ,int ,int,scalar_t__*) ;
 int FUNC_20 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_21(struct demo *VAR_1) {
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->swapchainImageCount; VAR_2++) {
        FUNC_9(VAR_1->device, VAR_1->framebuffers[VAR_2], ((void*)0));
    }
    FUNC_0(VAR_1->framebuffers);
    FUNC_6(VAR_1->device, VAR_1->desc_pool, ((void*)0));

    if (VAR_1->setup_cmd) {
        FUNC_19(VAR_1->device, VAR_1->cmd_pool, 1, &VAR_1->setup_cmd);
    }
    FUNC_19(VAR_1->device, VAR_1->cmd_pool, 1, &VAR_1->draw_cmd);
    FUNC_4(VAR_1->device, VAR_1->cmd_pool, ((void*)0));

    FUNC_13(VAR_1->device, VAR_1->pipeline, ((void*)0));
    FUNC_15(VAR_1->device, VAR_1->render_pass, ((void*)0));
    FUNC_14(VAR_1->device, VAR_1->pipeline_layout, ((void*)0));
    FUNC_7(VAR_1->device, VAR_1->desc_layout, ((void*)0));

    FUNC_3(VAR_1->device, VAR_1->vertices.buf, ((void*)0));
    FUNC_20(VAR_1->device, VAR_1->vertices.mem, ((void*)0));

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        FUNC_11(VAR_1->device, VAR_1->textures[VAR_2].view, ((void*)0));
        FUNC_10(VAR_1->device, VAR_1->textures[VAR_2].image, ((void*)0));
        FUNC_20(VAR_1->device, VAR_1->textures[VAR_2].mem, ((void*)0));
        FUNC_16(VAR_1->device, VAR_1->textures[VAR_2].sampler, ((void*)0));
    }

    for (VAR_2 = 0; VAR_2 < VAR_1->swapchainImageCount; VAR_2++) {
        FUNC_11(VAR_1->device, VAR_1->buffers[VAR_2].view, ((void*)0));
    }

    FUNC_11(VAR_1->device, VAR_1->depth.view, ((void*)0));
    FUNC_10(VAR_1->device, VAR_1->depth.image, ((void*)0));
    FUNC_20(VAR_1->device, VAR_1->depth.mem, ((void*)0));

    FUNC_18(VAR_1->device, VAR_1->swapchain, ((void*)0));
    FUNC_0(VAR_1->buffers);

    FUNC_8(VAR_1->device, ((void*)0));
    if (VAR_1->validate) {
        FUNC_5(VAR_1->inst, VAR_1->msg_callback, ((void*)0));
    }
    FUNC_17(VAR_1->inst, VAR_1->surface, ((void*)0));
    FUNC_12(VAR_1->inst, ((void*)0));

    FUNC_0(VAR_1->queue_props);

    FUNC_1(VAR_1->window);
    FUNC_2();
}
