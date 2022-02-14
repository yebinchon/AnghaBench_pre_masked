
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef int FFPlayer ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,char*,int,char const*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(FFPlayer *VAR_2, const char *VAR_3, AVDictionary *VAR_4)
{
    AVDictionaryEntry *VAR_5 = ((void*)0);

    while ((VAR_5 = FUNC_0(VAR_4, "", VAR_5, VAR_0))) {
        FUNC_1(VAR_2, VAR_1, "%-*s: %-*s = %s\n", 12, VAR_3, 28, VAR_5->key, VAR_5->value);
    }
}
