
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_15__ {size_t bytes_contiguous; TYPE_10__* partial_frame; TYPE_1__* body; TYPE_10__* noncontiguous; } ;
struct st_h2o_http3client_req_t {int (* handle_input ) (struct st_h2o_http3client_req_t*,int const**,int const*,int ,char const**) ;TYPE_2__ recvbuf; TYPE_4__* quic; } ;
struct TYPE_16__ {struct st_h2o_http3client_req_t* data; } ;
typedef TYPE_3__ quicly_stream_t ;
struct TYPE_19__ {int * base; } ;
struct TYPE_18__ {scalar_t__ data_off; scalar_t__ eos; } ;
struct TYPE_17__ {int sendstate; TYPE_6__ recvstate; } ;
struct TYPE_14__ {size_t size; } ;
struct TYPE_13__ {size_t size; scalar_t__ bytes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct st_h2o_http3client_req_t*,int) ;
 int FUNC_3 (struct st_h2o_http3client_req_t*) ;
 int FUNC_4 (struct st_h2o_http3client_req_t*) ;
 int FUNC_5 (TYPE_10__**,int const*,int) ;
 int FUNC_6 (TYPE_10__**,size_t) ;
 TYPE_9__ FUNC_7 (TYPE_10__**,size_t) ;
 int FUNC_8 (scalar_t__,void const*,size_t) ;
 size_t FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,size_t) ;
 int FUNC_14 (struct st_h2o_http3client_req_t*,int const**,int const*,int ,char const**) ;

__attribute__((used)) static int FUNC_15(quicly_stream_t *VAR_4, size_t VAR_5, const void *VAR_6, size_t VAR_7)
{
    struct st_h2o_http3client_req_t *VAR_8 = VAR_4->data;
    const uint8_t *VAR_9, *VAR_10;
    size_t VAR_11, VAR_12;
    int VAR_13, VAR_14;
    const char *VAR_15 = ((void*)0);

    FUNC_1(VAR_8->recvbuf.body->size + VAR_8->recvbuf.partial_frame->size == VAR_8->recvbuf.bytes_contiguous);

    if (FUNC_10(&VAR_8->quic->recvstate)) {
        VAR_11 = (size_t)(VAR_8->quic->recvstate.eos - VAR_8->quic->recvstate.data_off);
    } else {
        VAR_11 = FUNC_9(&VAR_8->quic->recvstate);
    }

    if (VAR_8->recvbuf.noncontiguous->size == 0 && VAR_11 == VAR_5 + VAR_7) {

        VAR_9 = VAR_6;
        VAR_10 = VAR_9 + VAR_7;
        VAR_12 = 0;
    } else {

        size_t VAR_16 = VAR_5 + VAR_7 - VAR_8->recvbuf.bytes_contiguous;
        if (VAR_8->recvbuf.noncontiguous->size < VAR_16) {
            FUNC_0(FUNC_7(&VAR_8->recvbuf.noncontiguous, VAR_16).base != ((void*)0));
            VAR_8->recvbuf.noncontiguous->size = VAR_16;
        }
        FUNC_8(VAR_8->recvbuf.noncontiguous->bytes + VAR_5 - VAR_8->recvbuf.bytes_contiguous, VAR_6, VAR_7);

        if (VAR_11 == VAR_8->recvbuf.bytes_contiguous)
            return 0;

        FUNC_1(VAR_11 > VAR_8->recvbuf.bytes_contiguous);
        VAR_12 = VAR_11 - VAR_8->recvbuf.bytes_contiguous;
        VAR_9 = (const uint8_t *)VAR_8->recvbuf.noncontiguous->bytes;
        VAR_10 = VAR_9 + VAR_12;
    }


    if (VAR_8->recvbuf.partial_frame->size != 0) {
        FUNC_5(&VAR_8->recvbuf.partial_frame, VAR_9, VAR_10 - VAR_9);
        VAR_9 = (const uint8_t *)VAR_8->recvbuf.partial_frame->bytes;
        VAR_10 = VAR_9 + VAR_8->recvbuf.partial_frame->size;
    }


    VAR_13 = FUNC_10(&VAR_8->quic->recvstate);
    FUNC_1(VAR_13 || VAR_9 != VAR_10);
    do {
        VAR_14 = VAR_8->handle_input(VAR_8, &VAR_9, VAR_10, VAR_13 ? VAR_0 : 0, &VAR_15);
    } while (VAR_14 == 0 && VAR_9 != VAR_10);


    if (VAR_14 == VAR_2) {
        if (VAR_13)
            return VAR_1;
        FUNC_1(VAR_9 < VAR_10);
        if (VAR_8->recvbuf.partial_frame->size != 0) {
            FUNC_1(VAR_10 == (const uint8_t *)VAR_8->recvbuf.partial_frame->bytes + VAR_8->recvbuf.partial_frame->size);
            FUNC_6(&VAR_8->recvbuf.partial_frame, VAR_9 - (const uint8_t *)VAR_8->recvbuf.partial_frame->bytes);
        } else {
            FUNC_5(&VAR_8->recvbuf.partial_frame, VAR_9, VAR_10 - VAR_9);
        }
    }


    if (VAR_13) {
        if (!FUNC_12(&VAR_8->quic->sendstate))
            FUNC_11(VAR_8->quic, VAR_3);
        FUNC_4(VAR_8);
        FUNC_3(VAR_8);
    } else if (VAR_14 != 0) {

        FUNC_2(VAR_8, VAR_14);
        FUNC_3(VAR_8);
    } else {
        if (VAR_12 != 0)
            FUNC_6(&VAR_8->recvbuf.noncontiguous, VAR_12);
        size_t VAR_17 = VAR_8->recvbuf.body->size + VAR_8->recvbuf.partial_frame->size;
        if (VAR_11 != VAR_17) {
            FUNC_1(VAR_17 < VAR_11);
            FUNC_13(VAR_8->quic, VAR_11 - VAR_17);
            VAR_8->recvbuf.bytes_contiguous = VAR_17;
        }
    }

    return 0;
}
