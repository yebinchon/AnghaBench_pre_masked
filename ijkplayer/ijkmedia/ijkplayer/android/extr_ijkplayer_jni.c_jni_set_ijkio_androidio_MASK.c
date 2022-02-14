
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ jobject ;
typedef int jlong ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int mutex; } ;
struct TYPE_10__ {scalar_t__ (* NewGlobalRef ) (TYPE_1__**,scalar_t__) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__**,scalar_t__) ;
 int FUNC_2 (TYPE_1__**,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__**,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__**) ;
 TYPE_4__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__**,scalar_t__) ;

__attribute__((used)) static int64_t FUNC_8(JNIEnv* VAR_1, jobject VAR_2, jobject VAR_3)
{
    int64_t VAR_4 = 0;

    FUNC_5(&VAR_0.mutex);

    jobject VAR_5 = (jobject) (intptr_t) FUNC_1(VAR_1, VAR_2);
    if (VAR_5) {
        FUNC_0(VAR_1, VAR_5);
        FUNC_3(VAR_1, &VAR_5);
        FUNC_2(VAR_1, VAR_2, 0);
    }

    if (VAR_3) {
        jobject VAR_6 = (*VAR_1)->NewGlobalRef(VAR_1, VAR_3);
        if (FUNC_4(VAR_1) || !VAR_6)
            goto fail;

        VAR_4 = (int64_t) (intptr_t) VAR_6;
        FUNC_2(VAR_1, VAR_2, (jlong) VAR_4);
    }

fail:
    FUNC_6(&VAR_0.mutex);
    return VAR_4;
}
