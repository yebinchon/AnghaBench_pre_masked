
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int what; int arg1; int arg2; int free_l; int obj; } ;
typedef int MessageQueue ;
typedef TYPE_1__ AVMessage ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) inline static void FUNC_4(MessageQueue *VAR_1, int VAR_2, int VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
    AVMessage VAR_7;
    FUNC_2(&VAR_7);
    VAR_7.what = VAR_2;
    VAR_7.arg1 = VAR_3;
    VAR_7.arg2 = VAR_4;
    VAR_7.obj = FUNC_0(VAR_6);
    FUNC_1(VAR_7.obj, VAR_5, VAR_6);
    VAR_7.free_l = VAR_0;
    FUNC_3(VAR_1, &VAR_7);
}
