
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_22__ ;
typedef struct TYPE_28__ TYPE_21__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_33__ {int quality; } ;
struct TYPE_32__ {int quality; } ;
struct TYPE_34__ {TYPE_5__ gzip; TYPE_4__ brotli; int min_size; } ;
struct st_compress_filter_t {TYPE_6__ args; } ;
struct TYPE_23__ {int * next; int do_send; } ;
struct st_compress_encoder_t {TYPE_12__* compressor; TYPE_10__ super; } ;
typedef size_t ssize_t ;
struct TYPE_26__ {size_t size; TYPE_8__* entries; } ;
struct TYPE_37__ {int status; TYPE_15__ headers; int content_length; TYPE_3__* mime_attr; } ;
struct TYPE_27__ {int len; int base; } ;
struct TYPE_30__ {TYPE_1__ method; } ;
struct TYPE_24__ {int version; int compress_hint; int preferred_chunk_size; TYPE_9__ res; int pool; int headers; TYPE_2__ input; } ;
typedef TYPE_11__ h2o_req_t ;
typedef int h2o_ostream_t ;
typedef int h2o_filter_t ;
struct TYPE_35__ {int len; int base; } ;
struct TYPE_25__ {TYPE_7__ name; } ;
typedef TYPE_12__ h2o_compress_context_t ;
struct TYPE_36__ {int value; int * name; } ;
struct TYPE_31__ {int is_compressible; } ;
struct TYPE_29__ {int buf; } ;
struct TYPE_28__ {int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_compress_encoder_t) ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (char*) ;
 TYPE_22__* VAR_3 ;
 TYPE_21__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,TYPE_15__*,...) ;
 scalar_t__ FUNC_3 (TYPE_11__*,int ,int,int **) ;
 TYPE_12__* FUNC_4 (int *,int,int ,int ) ;
 TYPE_12__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_11__*) ;
 int FUNC_10 (int *,TYPE_15__*,int ,int ) ;
 int FUNC_11 (TYPE_11__*,int **) ;

__attribute__((used)) static void FUNC_12(h2o_filter_t *VAR_8, h2o_req_t *VAR_9, h2o_ostream_t **VAR_10)
{
    struct st_compress_filter_t *VAR_11 = (void *)VAR_8;
    struct st_compress_encoder_t *VAR_12;
    int VAR_13;
    int VAR_14 = VAR_1 | VAR_2;
    h2o_compress_context_t *VAR_15;
    ssize_t VAR_16;

    if (VAR_9->version < 0x101)
        goto Next;
    if (VAR_9->res.status != 200)
        goto Next;
    if (FUNC_8(VAR_9->input.method.base, VAR_9->input.method.len, FUNC_1("HEAD")))
        goto Next;

    switch (VAR_9->compress_hint) {
    case 131:

        goto Next;
    case 130:

        break;
    case 129:
        VAR_14 = VAR_1;
        break;
    case 128:
        VAR_14 = VAR_2;
        break;
    case 132:
    default:


        if (VAR_9->res.mime_attr == ((void*)0))
            FUNC_9(VAR_9);
        if (!VAR_9->res.mime_attr->is_compressible)
            goto Next;
        if (VAR_9->res.content_length < VAR_11->args.min_size)
            goto Next;
    }


    VAR_13 = FUNC_6(&VAR_9->headers) & VAR_14;
    if (VAR_13 == 0)
        goto Next;


    size_t VAR_17 = -1, VAR_18 = -1;
    for (VAR_16 = 0; VAR_16 != VAR_9->res.headers.size; ++VAR_16) {
        if (VAR_9->res.headers.entries[VAR_16].name == &VAR_4->buf)
            VAR_17 = VAR_16;
        else if (VAR_9->res.headers.entries[VAR_16].name == &VAR_3->buf)
            VAR_18 = VAR_16;
        else
            continue;
    }
    if (VAR_17 != -1)
        goto Next;
        if (VAR_11->args.gzip.quality != -1 && (VAR_13 & VAR_2) != 0) {
        VAR_15 = FUNC_5(&VAR_9->pool, VAR_11->args.gzip.quality);
    } else {

        FUNC_10(&VAR_9->pool, &VAR_9->res.headers, VAR_5, FUNC_1("accept-encoding"));
        goto Next;
    }


    VAR_9->res.content_length = VAR_6;
    FUNC_2(&VAR_9->pool, &VAR_9->res.headers, VAR_4, ((void*)0), VAR_15->name.base, VAR_15->name.len);
    FUNC_10(&VAR_9->pool, &VAR_9->res.headers, VAR_5, FUNC_1("accept-encoding"));
    if (VAR_18 != -1) {
        VAR_9->res.headers.entries[VAR_18].value = FUNC_7(FUNC_1("none"));
    } else {
        FUNC_2(&VAR_9->pool, &VAR_9->res.headers, VAR_3, ((void*)0), FUNC_1("none"));
    }


    VAR_12 = (void *)FUNC_3(VAR_9, FUNC_0(*VAR_12), sizeof(*VAR_12), VAR_10);
    VAR_12->super.do_send = VAR_7;
    VAR_10 = &VAR_12->super.next;
    VAR_12->compressor = VAR_15;


    if (VAR_9->preferred_chunk_size > VAR_0)
        VAR_9->preferred_chunk_size = VAR_0;

Next:
    FUNC_11(VAR_9, VAR_10);
}
