
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* opaque; } ;
struct TYPE_5__ {int acodec_mutex; int acodec_cond; scalar_t__ acodec_reconfigure_request; scalar_t__ acodec_flush_request; } ;
typedef int JNIEnv ;
typedef TYPE_1__ IJKFF_Pipenode_Opaque ;
typedef TYPE_2__ IJKFF_Pipenode ;
typedef int AVFrame ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int*,int *,int*) ;

__attribute__((used)) static int FUNC_4(JNIEnv *VAR_0, IJKFF_Pipenode *VAR_1, int64_t VAR_2, int *VAR_3, AVFrame *VAR_4, int *VAR_5)
{
    IJKFF_Pipenode_Opaque *VAR_6 = VAR_1->opaque;
    FUNC_1(VAR_6->acodec_mutex);

    if (VAR_6->acodec_flush_request || VAR_6->acodec_reconfigure_request) {


        FUNC_0(VAR_6->acodec_cond, VAR_6->acodec_mutex, 100);
    }

    int VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_2(VAR_6->acodec_mutex);
    return VAR_7;
}
