
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int what; } ;
struct TYPE_7__ {int mutex; scalar_t__ abort_request; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) inline static void FUNC_4(MessageQueue *VAR_1)
{
    FUNC_0(VAR_1->mutex);
    VAR_1->abort_request = 0;

    AVMessage VAR_2;
    FUNC_2(&VAR_2);
    VAR_2.what = VAR_0;
    FUNC_3(VAR_1, &VAR_2);
    FUNC_1(VAR_1->mutex);
}
