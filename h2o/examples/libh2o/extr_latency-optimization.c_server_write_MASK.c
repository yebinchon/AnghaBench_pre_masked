
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_socket_t ;
struct TYPE_4__ {char* base; size_t len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int ,char*,size_t) ;
 size_t FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int,int ) ;
 int VAR_0 ;
 TYPE_1__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(h2o_socket_t *VAR_4)
{
    size_t VAR_5 = FUNC_1(VAR_4, &VAR_0);
    h2o_iovec_t VAR_6 = FUNC_3();

    if (VAR_1)
        VAR_6.base[0] = '1';
    if (VAR_5 < VAR_6.len)
        VAR_6.len = VAR_5;

    FUNC_0(VAR_3, "writing %zu bytes\n", VAR_6.len);
    FUNC_2(VAR_4, &VAR_6, 1, VAR_2);
}
