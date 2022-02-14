
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
struct demo {size_t swapchainImageCount; TYPE_4__* buffers; TYPE_3__ depth; int device; TYPE_2__* textures; TYPE_1__ vertices; int desc_layout; int pipeline_layout; int render_pass; int pipeline; int cmd_pool; scalar_t__ draw_cmd; scalar_t__ setup_cmd; int desc_pool; TYPE_4__* framebuffers; } ;
struct TYPE_9__ {int view; } ;
struct TYPE_7__ {int sampler; int mem; int image; int view; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demo*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,TYPE_4__,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ,int,scalar_t__*) ;
 int FUNC_14 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_15(struct demo *VAR_2) {
    uint32_t VAR_3;






    for (VAR_3 = 0; VAR_3 < VAR_2->swapchainImageCount; VAR_3++) {
        FUNC_6(VAR_2->device, VAR_2->framebuffers[VAR_3], ((void*)0));
    }
    FUNC_1(VAR_2->framebuffers);
    FUNC_4(VAR_2->device, VAR_2->desc_pool, ((void*)0));

    if (VAR_2->setup_cmd) {
        FUNC_13(VAR_2->device, VAR_2->cmd_pool, 1, &VAR_2->setup_cmd);
        VAR_2->setup_cmd = VAR_1;
    }
    FUNC_13(VAR_2->device, VAR_2->cmd_pool, 1, &VAR_2->draw_cmd);
    FUNC_3(VAR_2->device, VAR_2->cmd_pool, ((void*)0));

    FUNC_9(VAR_2->device, VAR_2->pipeline, ((void*)0));
    FUNC_11(VAR_2->device, VAR_2->render_pass, ((void*)0));
    FUNC_10(VAR_2->device, VAR_2->pipeline_layout, ((void*)0));
    FUNC_5(VAR_2->device, VAR_2->desc_layout, ((void*)0));

    FUNC_2(VAR_2->device, VAR_2->vertices.buf, ((void*)0));
    FUNC_14(VAR_2->device, VAR_2->vertices.mem, ((void*)0));

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_8(VAR_2->device, VAR_2->textures[VAR_3].view, ((void*)0));
        FUNC_7(VAR_2->device, VAR_2->textures[VAR_3].image, ((void*)0));
        FUNC_14(VAR_2->device, VAR_2->textures[VAR_3].mem, ((void*)0));
        FUNC_12(VAR_2->device, VAR_2->textures[VAR_3].sampler, ((void*)0));
    }

    for (VAR_3 = 0; VAR_3 < VAR_2->swapchainImageCount; VAR_3++) {
        FUNC_8(VAR_2->device, VAR_2->buffers[VAR_3].view, ((void*)0));
    }

    FUNC_8(VAR_2->device, VAR_2->depth.view, ((void*)0));
    FUNC_7(VAR_2->device, VAR_2->depth.image, ((void*)0));
    FUNC_14(VAR_2->device, VAR_2->depth.mem, ((void*)0));

    FUNC_1(VAR_2->buffers);



    FUNC_0(VAR_2);
}
