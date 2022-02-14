
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_socket_t ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *) ;
 char const* VAR_2 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(h2o_socket_t *VAR_6, const char *VAR_7)
{
    if (VAR_7 != ((void*)0) && VAR_7 != VAR_2) {

        FUNC_3(VAR_5, "TLS handshake failure:%s\n", VAR_7);
        FUNC_0(VAR_5);
        FUNC_4(VAR_6);
        FUNC_2(1);
        return;
    }

    if (VAR_3) {
        FUNC_5(VAR_6, VAR_4);
    } else {
        h2o_iovec_t VAR_8 = {FUNC_1("0")};
        FUNC_6(VAR_6, &VAR_8, 1, VAR_1);
        FUNC_5(VAR_6, VAR_0);
    }
}
