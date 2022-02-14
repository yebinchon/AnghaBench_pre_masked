
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int conn; int recvstate; int sendstate; } ;
typedef TYPE_1__ quicly_stream_t ;
struct TYPE_11__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 TYPE_2__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,size_t,void const*,size_t) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_11(quicly_stream_t *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4)
{
    int VAR_5;


    if ((VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4)) != 0)
        return VAR_5;


    ptls_iovec_t VAR_6 = FUNC_8(VAR_1);

    if (FUNC_2()) {

        if (FUNC_5(&VAR_1->sendstate)) {
            FUNC_7(VAR_1, VAR_6.base, VAR_6.len);

            if (FUNC_4(&VAR_1->recvstate))
                FUNC_6(VAR_1);
        }
    } else {

        FUNC_1(VAR_6.base, 1, VAR_6.len, VAR_0);
        FUNC_0(VAR_0);

        if (FUNC_4(&VAR_1->recvstate))
            FUNC_3(VAR_1->conn, 0, "");
    }


    FUNC_10(VAR_1, VAR_6.len);

    return 0;
}
