
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ h2o_send_state_t ;
struct TYPE_5__ {char* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(h2o_iovec_t *VAR_2, h2o_iovec_t *VAR_3, h2o_send_state_t VAR_4, size_t VAR_5, int VAR_6,
                           char *VAR_7)
{
    *VAR_2 = FUNC_0(((void*)0), 0);
    *VAR_3 = FUNC_0(((void*)0), 0);


    if (VAR_5 != 0) {
        VAR_2->base = VAR_7;
        VAR_2->len = FUNC_1(VAR_7, "%zx\r\n", VAR_5);
        if (VAR_4 != VAR_0) {
            VAR_3->base = "\r\n0\r\n\r\n";
            VAR_3->len = VAR_4 == VAR_1 ? (VAR_6 ? 5 : 7) : 2;
        }
    } else if (VAR_4 == VAR_1) {
        VAR_3->base = "0\r\n\r\n";
        VAR_3->len = VAR_6 ? 3 : 5;
    }


    if (VAR_4 == VAR_0) {
        VAR_3->base = "\r\n1\r\n";
        VAR_3->len = 5;
    }
}
