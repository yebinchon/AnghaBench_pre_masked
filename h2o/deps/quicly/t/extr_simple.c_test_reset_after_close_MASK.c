
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ingress; } ;
struct TYPE_11__ {int is_detached; TYPE_1__ super; } ;
typedef TYPE_2__ test_streambuf_t ;
struct TYPE_12__ {int recvstate; TYPE_2__* data; int stream_id; } ;
typedef TYPE_3__ quicly_stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_3__**,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,char*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int VAR_3 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    quicly_stream_t *VAR_4, *VAR_5;
    test_streambuf_t *VAR_6, *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_5(VAR_1, &VAR_4, 0);
    FUNC_3(VAR_8 == 0);
    VAR_6 = VAR_4->data;
    FUNC_9(VAR_4, "hello", 5);

    FUNC_11(VAR_1, VAR_3);
    VAR_2 += VAR_0;
    FUNC_11(VAR_3, VAR_1);

    VAR_5 = FUNC_4(VAR_3, VAR_4->stream_id);
    FUNC_1(VAR_5 != ((void*)0));
    VAR_7 = VAR_5->data;
    FUNC_3(FUNC_2(&VAR_7->super.ingress, "hello"));
    FUNC_10(VAR_5, 5);

    FUNC_9(VAR_4, "world", 5);
    FUNC_8(VAR_4);
    FUNC_7(VAR_4, FUNC_0(
                                           12345));


    FUNC_11(VAR_1, VAR_3);

    FUNC_3(FUNC_2(&VAR_7->super.ingress, ""));
    FUNC_3(FUNC_6(&VAR_5->recvstate));

    FUNC_8(VAR_5);

    FUNC_11(VAR_3, VAR_1);

    FUNC_3(VAR_6->is_detached);

    VAR_2 += VAR_0;
    FUNC_11(VAR_1, VAR_3);

    FUNC_3(VAR_7->is_detached);
}
