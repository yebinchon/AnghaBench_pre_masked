
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ MessageQueue ;
typedef int AVMessage ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) inline static int FUNC_3(MessageQueue *VAR_0, AVMessage *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0->mutex);
    VAR_2 = FUNC_2(VAR_0, VAR_1);
    FUNC_1(VAR_0->mutex);

    return VAR_2;
}
