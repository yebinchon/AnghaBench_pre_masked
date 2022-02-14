
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int * jsurface; int codecpar; int * bsfc; int orig_extradata; int output_aformat; int input_aformat; int acodec; int acodec_first_dequeue_output_mutex; int acodec_first_dequeue_output_cond; int acodec_mutex; int acodec_cond; int any_input_mutex; int any_input_cond; } ;
typedef int JNIEnv ;
typedef TYPE_1__ IJKFF_Pipenode_Opaque ;
typedef TYPE_2__ IJKFF_Pipenode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(IJKFF_Pipenode *VAR_1)
{
    if (!VAR_1 || !VAR_1->opaque)
        return;

    IJKFF_Pipenode_Opaque *VAR_2 = VAR_1->opaque;

    FUNC_2(&VAR_2->any_input_cond);
    FUNC_3(&VAR_2->any_input_mutex);
    FUNC_2(&VAR_2->acodec_cond);
    FUNC_3(&VAR_2->acodec_mutex);
    FUNC_2(&VAR_2->acodec_first_dequeue_output_cond);
    FUNC_3(&VAR_2->acodec_first_dequeue_output_mutex);

    FUNC_0(&VAR_2->acodec);
    FUNC_1(&VAR_2->input_aformat);
    FUNC_1(&VAR_2->output_aformat);
    FUNC_8(&VAR_2->codecpar);

    JNIEnv *VAR_3 = ((void*)0);
    if (VAR_0 == FUNC_5(&VAR_3)) {
        if (VAR_2->jsurface != ((void*)0)) {
            FUNC_4(VAR_3, &VAR_2->jsurface);
        }
    }
}
