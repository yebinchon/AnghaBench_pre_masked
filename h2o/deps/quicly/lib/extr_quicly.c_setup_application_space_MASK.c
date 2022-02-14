
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_quicly_application_space_t {int dummy; } ;
struct TYPE_4__ {int * application; } ;
typedef TYPE_1__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_2)
{
    if ((VAR_2->application = (void *)FUNC_0(sizeof(struct st_quicly_application_space_t))) == ((void*)0))
        return VAR_0;
    return FUNC_1(VAR_2, VAR_1);
}
