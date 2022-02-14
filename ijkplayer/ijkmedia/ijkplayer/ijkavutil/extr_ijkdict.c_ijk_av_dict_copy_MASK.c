
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ IjkAVDictionaryEntry ;
typedef int IjkAVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int **,int ,int ,int) ;

int FUNC_2(IjkAVDictionary **VAR_1, const IjkAVDictionary *VAR_2, int VAR_3)
{
    IjkAVDictionaryEntry *VAR_4 = ((void*)0);

    while ((VAR_4 = FUNC_0(VAR_2, "", VAR_4, VAR_0))) {
        int VAR_5 = FUNC_1(VAR_1, VAR_4->key, VAR_4->value, VAR_3);
        if (VAR_5 < 0)
            return VAR_5;
    }

    return 0;
}
