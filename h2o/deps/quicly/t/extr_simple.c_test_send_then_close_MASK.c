
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int ingress; } ;
struct TYPE_16__ {int is_detached; TYPE_4__ super; } ;
typedef TYPE_5__ test_streambuf_t ;
struct TYPE_13__ {int num_ranges; TYPE_1__* ranges; } ;
struct TYPE_14__ {TYPE_2__ acked; } ;
struct TYPE_17__ {int recvstate; TYPE_3__ sendstate; TYPE_5__* data; int stream_id; } ;
typedef TYPE_6__ quicly_stream_t ;
struct TYPE_12__ {scalar_t__ start; int end; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_6__**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,char*,int) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
    quicly_stream_t *VAR_4, *VAR_5;
    test_streambuf_t *VAR_6, *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_4(VAR_1, &VAR_4, 0);
    FUNC_2(VAR_8 == 0);
    VAR_6 = VAR_4->data;
    FUNC_7(VAR_4, "hello", 5);

    FUNC_9(VAR_1, VAR_3);

    VAR_5 = FUNC_3(VAR_3, VAR_4->stream_id);
    FUNC_0(VAR_5 != ((void*)0));
    VAR_7 = VAR_5->data;
    FUNC_2(FUNC_1(&VAR_7->super.ingress, "hello"));
    FUNC_8(VAR_5, 5);

    VAR_2 += VAR_0;
    FUNC_9(VAR_3, VAR_1);

    FUNC_2(VAR_4->sendstate.acked.num_ranges == 1);
    FUNC_2(VAR_4->sendstate.acked.ranges[0].start == 0);
    FUNC_2(VAR_4->sendstate.acked.ranges[0].end == 5);
    FUNC_6(VAR_4);

    FUNC_9(VAR_1, VAR_3);

    FUNC_2(FUNC_5(&VAR_5->recvstate));
    FUNC_2(FUNC_1(&VAR_7->super.ingress, ""));
    FUNC_6(VAR_5);

    FUNC_9(VAR_3, VAR_1);

    FUNC_2(VAR_6->is_detached);
    FUNC_2(!VAR_7->is_detached);

    VAR_2 += VAR_0;
    FUNC_9(VAR_1, VAR_3);

    FUNC_2(VAR_7->is_detached);
}
