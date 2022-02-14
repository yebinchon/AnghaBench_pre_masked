
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* value; } ;
struct TYPE_5__ {int dict; } ;
typedef TYPE_1__ IjkMediaMeta ;
typedef TYPE_2__ AVDictionaryEntry ;


 TYPE_2__* FUNC_0 (int ,char const*,int *,int ) ;

const char *FUNC_1(IjkMediaMeta *VAR_0, const char *VAR_1)
{
    if (!VAR_0 || !VAR_0->dict || !VAR_1)
        return ((void*)0);

    AVDictionaryEntry *VAR_2 = FUNC_0(VAR_0->dict, VAR_1, ((void*)0), 0);
    if (!VAR_2)
        return ((void*)0);

    return VAR_2->value;
}
