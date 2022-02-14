
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jobject ;
struct TYPE_5__ {int jbuffer_capacity; int * jbuffer; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef int JNIEnv ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ IjkIOAndroidioContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static jobject FUNC_4(JNIEnv *VAR_0, IjkURLContext *VAR_1, int VAR_2) {
    IjkIOAndroidioContext *VAR_3 = VAR_1->priv_data;
    if (!VAR_3)
        return ((void*)0);

    if (VAR_3->jbuffer && VAR_3->jbuffer_capacity >= VAR_2)
        return VAR_3->jbuffer;

    VAR_2 = FUNC_0(VAR_2, VAR_3->jbuffer_capacity * 2);

    FUNC_1(VAR_0, &VAR_3->jbuffer);
    VAR_3->jbuffer_capacity = 0;

    VAR_3->jbuffer = FUNC_3(VAR_0, VAR_2);
    if (FUNC_2(VAR_0) || !VAR_3->jbuffer) {
        VAR_3->jbuffer = ((void*)0);
        return ((void*)0);
    }

    VAR_3->jbuffer_capacity = VAR_2;
    return VAR_3->jbuffer;
}
