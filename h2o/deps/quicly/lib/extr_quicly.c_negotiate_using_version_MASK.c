
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int version; } ;
struct TYPE_7__ {TYPE_1__ super; } ;
typedef TYPE_2__ quicly_conn_t ;


 int FUNC_0 (int ,TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_1, uint32_t VAR_2)
{

    VAR_1->super.version = VAR_2;
    FUNC_0(VAR_0, VAR_1, FUNC_2(), VAR_2);


    return FUNC_1(VAR_1, ~0u);
}
