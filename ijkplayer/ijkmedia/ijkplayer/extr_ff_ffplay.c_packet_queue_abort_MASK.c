
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abort_request; int mutex; int cond; } ;
typedef TYPE_1__ PacketQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(PacketQueue *VAR_0)
{
    FUNC_1(VAR_0->mutex);

    VAR_0->abort_request = 1;

    FUNC_0(VAR_0->cond);

    FUNC_2(VAR_0->mutex);
}
