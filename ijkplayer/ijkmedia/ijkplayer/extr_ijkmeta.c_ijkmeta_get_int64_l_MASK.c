
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int dict; } ;
typedef TYPE_1__ IjkMediaMeta ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char const*,int *,int ) ;

int64_t FUNC_2(IjkMediaMeta *VAR_0, const char *VAR_1, int64_t VAR_2)
{
    if (!VAR_0 || !VAR_0->dict)
        return VAR_2;

    AVDictionaryEntry *VAR_3 = FUNC_1(VAR_0->dict, VAR_1, ((void*)0), 0);
    if (!VAR_3 || !VAR_3->value)
        return VAR_2;

    return FUNC_0(VAR_3->value);
}
