
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_fcgi_record_header_t {size_t contentLength; size_t paddingLength; int type; } ;
struct TYPE_14__ {int inflight; } ;
struct TYPE_10__ {TYPE_7__ sending; TYPE_1__* receiving; } ;
struct st_fcgi_generator_t {int sent_headers; TYPE_4__* handler; TYPE_2__ resp; int req; } ;
struct TYPE_13__ {TYPE_8__* input; struct st_fcgi_generator_t* data; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_15__ {size_t size; int bytes; } ;
struct TYPE_11__ {int io_timeout; } ;
struct TYPE_12__ {TYPE_3__ config; } ;
struct TYPE_9__ {scalar_t__ size; } ;



 size_t VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct st_fcgi_record_header_t*,int ) ;
 int FUNC_1 (struct st_fcgi_generator_t*) ;
 int FUNC_2 (struct st_fcgi_generator_t*) ;
 int FUNC_3 (TYPE_8__**,size_t) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (struct st_fcgi_generator_t*,struct st_fcgi_record_header_t*) ;
 int VAR_3 ;
 int FUNC_8 (struct st_fcgi_generator_t*,int) ;
 int FUNC_9 (struct st_fcgi_generator_t*,int ,int ) ;

__attribute__((used)) static void FUNC_10(h2o_socket_t *VAR_4, const char *VAR_5)
{
    struct st_fcgi_generator_t *VAR_6 = VAR_4->data;
    int VAR_7 = 0;
    int VAR_8 = VAR_6->sent_headers;

    if (VAR_5 != ((void*)0)) {

        if (!VAR_6->sent_headers)
            FUNC_5(VAR_6->req, VAR_2, "fastcgi connection closed unexpectedly");
        FUNC_2(VAR_6);
        return;
    }


    while (1) {
        struct st_fcgi_record_header_t VAR_9;
        size_t VAR_10;
        if (VAR_4->input->size < VAR_0)
            break;
        FUNC_0(&VAR_9, VAR_4->input->bytes);
        VAR_10 = VAR_0 + VAR_9.contentLength + VAR_9.paddingLength;
        if (VAR_4->input->size < VAR_10)
            break;

        switch (VAR_9.type) {
        case 128:
            if (FUNC_7(VAR_6, &VAR_9) != 0)
                goto Error;
            FUNC_3(&VAR_4->input, VAR_10);
            break;
        case 129:
            if (VAR_9.contentLength != 0)
                FUNC_5(VAR_6->req, VAR_2, "%.*s", (int)VAR_9.contentLength,
                                  VAR_4->input->bytes + VAR_0);
            FUNC_3(&VAR_4->input, VAR_10);
            break;
        case 130:
            if (!VAR_6->sent_headers) {
                FUNC_5(VAR_6->req, VAR_2, "received FCGI_END_REQUEST before end of the headers");
                goto Error;
            }
            FUNC_3(&VAR_4->input, VAR_10);
            VAR_7 = 1;
            goto EOS_Received;
        default:
            FUNC_5(VAR_6->req, VAR_2, "received unexpected record, type: %u", VAR_9.type);
            FUNC_3(&VAR_4->input, VAR_10);
            if (!VAR_6->sent_headers)
                goto Error;
            goto EOS_Received;
        }
    }


    if (VAR_6->sent_headers) {
        if (!VAR_8 && VAR_6->resp.receiving->size == 0) {

            FUNC_4(&VAR_6->resp.sending);
            FUNC_6(VAR_6->req, ((void*)0), 0, VAR_1);
        } else if (!VAR_6->resp.sending.inflight) {
            FUNC_1(VAR_6);
        }
    }

    FUNC_9(VAR_6, VAR_6->handler->config.io_timeout, VAR_3);
    return;

EOS_Received:
    FUNC_8(VAR_6, VAR_7);
    return;

Error:
    FUNC_2(VAR_6);
}
