
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ AVInputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(AVInputFormat *VAR_2)
{
    if (FUNC_2(VAR_2->name)) {
        FUNC_0(((void*)0), VAR_1, "skip     demuxer : %s (duplicated)\n", VAR_2->name);
    } else {
        FUNC_0(((void*)0), VAR_0, "register demuxer : %s\n", VAR_2->name);
        FUNC_1(VAR_2);
    }
}
