
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sendstate; int recvstate; } ;
typedef TYPE_1__ quicly_stream_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char**,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,size_t,void const*,size_t) ;
 int FUNC_8 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int,char*,char*) ;
 int FUNC_10 (TYPE_1__*,int,int,char*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char*,int) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(quicly_stream_t *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
    char *VAR_4;
    int VAR_5;
    int VAR_6;

    if ((VAR_6 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3)) != 0)
        return VAR_6;

    if (!FUNC_1(FUNC_6(VAR_0), &VAR_4, &VAR_5)) {
        if (!FUNC_2(&VAR_0->recvstate))
            return 0;

        FUNC_10(VAR_0, 1, 500, "text/plain; charset=utf-8");
        FUNC_12(VAR_0, "failed to parse HTTP request\n");
        goto Sent;
    }
    if (!FUNC_2(&VAR_0->recvstate))
        FUNC_3(VAR_0, FUNC_0(0));

    if (FUNC_13(VAR_4, "/logo.jpg") == 0 && FUNC_9(VAR_0, VAR_5, "assets/logo.jpg", "image/jpeg"))
        goto Sent;
    if (FUNC_13(VAR_4, "/main.jpg") == 0 && FUNC_9(VAR_0, VAR_5, "assets/main.jpg", "image/jpeg"))
        goto Sent;
    if (FUNC_11(VAR_0, VAR_4, VAR_5))
        goto Sent;
    if (FUNC_14(VAR_4) && FUNC_9(VAR_0, VAR_5, VAR_4 + 1, "text/plain"))
        goto Sent;

    if (!FUNC_4(&VAR_0->sendstate))
        return 0;

    FUNC_10(VAR_0, VAR_5, 404, "text/plain; charset=utf-8");
    FUNC_12(VAR_0, "not found\n");
Sent:
    FUNC_5(VAR_0);
    FUNC_8(VAR_0, VAR_3);
    return 0;
}
