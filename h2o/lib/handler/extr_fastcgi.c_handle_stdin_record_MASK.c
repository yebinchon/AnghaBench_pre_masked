
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct st_fcgi_record_header_t {size_t contentLength; } ;
struct TYPE_13__ {TYPE_8__* receiving; } ;
struct st_fcgi_generator_t {int sent_headers; TYPE_3__ resp; TYPE_5__* req; int super; int leftsize; TYPE_1__* sock; } ;
struct phr_header {int dummy; } ;
typedef int headers ;
struct TYPE_14__ {scalar_t__ bytes; } ;
typedef TYPE_4__ h2o_buffer_t ;
struct TYPE_17__ {size_t size; scalar_t__ bytes; } ;
struct TYPE_16__ {int base; } ;
struct TYPE_12__ {int content_length; } ;
struct TYPE_15__ {TYPE_2__ res; } ;
struct TYPE_11__ {TYPE_4__* input; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct st_fcgi_generator_t*,scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (TYPE_5__*,struct phr_header*,size_t) ;
 int FUNC_2 (TYPE_8__**,int) ;
 TYPE_7__ FUNC_3 (TYPE_8__**,size_t) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (int ,scalar_t__,size_t) ;
 int FUNC_7 (scalar_t__,size_t,struct phr_header*,size_t*,size_t) ;

__attribute__((used)) static int FUNC_8(struct st_fcgi_generator_t *VAR_2, struct st_fcgi_record_header_t *VAR_3)
{
    h2o_buffer_t *VAR_4 = VAR_2->sock->input;
    struct phr_header VAR_5[100];
    size_t VAR_6;
    int VAR_7;

    if (VAR_3->contentLength == 0)
        return 0;

    if (VAR_2->sent_headers) {

        if (FUNC_0(VAR_2, VAR_4->bytes + VAR_0, VAR_3->contentLength) != 0) {
            FUNC_4(VAR_2->req, VAR_1, "failed to allocate memory");
            return -1;
        }
        return 0;
    }


    VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]);
    if (VAR_2->resp.receiving->size == 0) {
        VAR_7 = FUNC_7(VAR_4->bytes + VAR_0, VAR_3->contentLength, VAR_5, &VAR_6, 0);
    } else {
        size_t VAR_8 = VAR_2->resp.receiving->size;
        FUNC_6(FUNC_3(&VAR_2->resp.receiving, VAR_3->contentLength).base, VAR_4->bytes + VAR_0,
               VAR_3->contentLength);
        VAR_2->resp.receiving->size = VAR_8 + VAR_3->contentLength;
        VAR_7 =
            FUNC_7(VAR_2->resp.receiving->bytes, VAR_2->resp.receiving->size, VAR_5, &VAR_6, VAR_8);
    }
    if (VAR_7 < 0) {
        if (VAR_7 == -2) {

            if (VAR_2->resp.receiving->size == 0) {
                FUNC_6(FUNC_3(&VAR_2->resp.receiving, VAR_3->contentLength).base,
                       VAR_4->bytes + VAR_0, VAR_3->contentLength);
                VAR_2->resp.receiving->size = VAR_3->contentLength;
            }
            return 0;
        } else {
            FUNC_4(VAR_2->req, VAR_1, "received broken response");
            return -1;
        }
    }


    if (FUNC_1(VAR_2->req, VAR_5, VAR_6) != 0)
        return -1;
    VAR_2->leftsize = VAR_2->req->res.content_length;
    FUNC_5(VAR_2->req, &VAR_2->super);
    VAR_2->sent_headers = 1;


    if (VAR_2->resp.receiving->size == 0) {
        size_t VAR_9 = VAR_3->contentLength - VAR_7;
        if (VAR_9 != 0) {
            if (FUNC_0(VAR_2, VAR_4->bytes + VAR_0 + VAR_7, VAR_9) != 0) {
                FUNC_4(VAR_2->req, VAR_1, "failed to allocate memory");
                return -1;
            }
        }
    } else {
        FUNC_2(&VAR_2->resp.receiving, VAR_7);
    }

    return 0;
}
