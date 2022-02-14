
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_24__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_33__ {int constants; int * mrb; } ;
typedef TYPE_17__ h2o_mruby_shared_context_t ;
struct TYPE_26__ {int generator; int error_stream; } ;
struct TYPE_34__ {TYPE_24__* req; TYPE_10__ refs; int error_stream; int rack_input; TYPE_11__* ctx; } ;
typedef TYPE_18__ h2o_mruby_generator_t ;
struct TYPE_35__ {char* base; int len; } ;
typedef TYPE_19__ h2o_iovec_t ;
struct TYPE_45__ {char* base; int len; } ;
struct TYPE_46__ {TYPE_8__ name; } ;
struct TYPE_44__ {size_t size; TYPE_19__* entries; } ;
struct TYPE_43__ {int get_peername; int get_sockname; } ;
struct TYPE_42__ {scalar_t__ len; int * base; } ;
struct TYPE_41__ {char* base; int len; } ;
struct TYPE_36__ {char* base; int len; } ;
struct TYPE_39__ {TYPE_1__ host; } ;
struct TYPE_40__ {TYPE_2__ authority; } ;
struct TYPE_32__ {char* base; int len; } ;
struct TYPE_29__ {size_t len; } ;
struct TYPE_28__ {char* base; int len; } ;
struct TYPE_38__ {scalar_t__ query_at; int reprocess_if_too_early; int remaining_reprocesses; int remaining_delegations; TYPE_9__* scheme; TYPE_20__* conn; int headers; int pool; TYPE_7__ env; TYPE_5__ entity; TYPE_4__ authority; int version; TYPE_3__* hostconf; TYPE_16__ path; TYPE_15__* pathconf; TYPE_13__ path_normalized; TYPE_12__ method; } ;
struct TYPE_37__ {TYPE_6__* callbacks; } ;
struct TYPE_30__ {size_t len; char* base; } ;
struct TYPE_31__ {TYPE_14__ path; } ;
struct TYPE_27__ {TYPE_17__* shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_24__*,size_t) ;
 int VAR_27 ;
 scalar_t__ FUNC_2 (TYPE_20__*) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (TYPE_17__*,int *,int *,int ,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (TYPE_17__*,int ) ;
 size_t FUNC_7 (char*,int ) ;
 int VAR_28 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int ,int *,int ,int ,int ,int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int ,int,int *) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 () ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_23 (char*,char*,scalar_t__) ;
 int FUNC_24 (TYPE_20__*,int ,int *,int *,int *) ;

__attribute__((used)) static mrb_value FUNC_25(h2o_mruby_generator_t *VAR_31)
{
    h2o_mruby_shared_context_t *VAR_32 = VAR_31->ctx->shared;
    mrb_state *VAR_33 = VAR_32->mrb;
    mrb_value VAR_34 = FUNC_12(VAR_33, 16);
    char VAR_35[sizeof("HTTP/1.0")];
    size_t VAR_36;


    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_16),
                 FUNC_5(VAR_33, VAR_31->req->method.base, VAR_31->req->method.len));

    size_t VAR_37 = VAR_31->req->pathconf->path.len;
    if (VAR_31->req->pathconf->path.base[VAR_31->req->pathconf->path.len - 1] == '/')
        --VAR_37;
    FUNC_0(VAR_37 <= VAR_31->req->path_normalized.len);

    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_17),
                 FUNC_5(VAR_33, VAR_31->req->pathconf->path.base, VAR_37));
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_4),
                 FUNC_1(VAR_33, VAR_31->req, VAR_37));
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_5),
                 VAR_31->req->query_at != VAR_26
                     ? FUNC_5(VAR_33, VAR_31->req->path.base + VAR_31->req->query_at + 1,
                                         VAR_31->req->path.len - (VAR_31->req->query_at + 1))
                     : FUNC_21(VAR_33, ""));
    FUNC_13(
        VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_19),
        FUNC_5(VAR_33, VAR_31->req->hostconf->authority.host.base, VAR_31->req->hostconf->authority.host.len));
    VAR_36 = FUNC_7(VAR_35, VAR_31->req->version);
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_21),
                 FUNC_5(VAR_33, VAR_35, VAR_36));
    {
        mrb_value VAR_38, VAR_39;
        FUNC_24(VAR_31->req->conn, VAR_31->req->conn->callbacks->get_sockname, VAR_33, &VAR_38, &VAR_39);
        if (!FUNC_16(VAR_38))
            FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_18), VAR_38);
        if (!FUNC_16(VAR_39))
            FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_20), VAR_39);
    }
    FUNC_13(VAR_33, VAR_34, FUNC_6(VAR_32, VAR_25),
                 FUNC_5(VAR_33, VAR_31->req->authority.base, VAR_31->req->authority.len));
    if (VAR_31->req->entity.base != ((void*)0)) {
        char VAR_40[32];
        int VAR_41 = FUNC_23(VAR_40, "%zu", VAR_31->req->entity.len);
        FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_1), FUNC_5(VAR_33, VAR_40, VAR_41));
        VAR_31->rack_input = FUNC_15(VAR_33, ((void*)0), 0);
        FUNC_14(VAR_33, VAR_31->rack_input, VAR_31->req->entity.base, (mrb_int)VAR_31->req->entity.len, 0,
                                  VAR_29, &VAR_31->rack_input);
        FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_9), VAR_31->rack_input);
    }
    {
        mrb_value VAR_42, VAR_43;
        FUNC_24(VAR_31->req->conn, VAR_31->req->conn->callbacks->get_peername, VAR_33, &VAR_42, &VAR_43);
        if (!FUNC_16(VAR_42))
            FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_14), VAR_42);
        if (!FUNC_16(VAR_43))
            FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_15), VAR_43);
    }
    {
        size_t VAR_44;
        for (VAR_44 = 0; VAR_44 != VAR_31->req->env.size; VAR_44 += 2) {
            h2o_iovec_t *VAR_45 = VAR_31->req->env.entries + VAR_44, *VAR_46 = VAR_45 + 1;
            FUNC_13(VAR_33, VAR_34, FUNC_5(VAR_33, VAR_45->base, VAR_45->len), FUNC_5(VAR_33, VAR_46->base, VAR_46->len));
        }
    }


    FUNC_4(VAR_32, &VAR_31->req->pool, &VAR_31->req->headers, VAR_28,
                                     FUNC_18(VAR_34));
    mrb_value VAR_47 = FUNC_6(VAR_32, VAR_24);
    int VAR_48 = !FUNC_16(FUNC_11(VAR_33, VAR_34, VAR_47, FUNC_17()));
    if (!VAR_48 && FUNC_2(VAR_31->req->conn)) {
        FUNC_13(VAR_33, VAR_34, VAR_47, FUNC_5(VAR_33, "1", 1));
        VAR_31->req->reprocess_if_too_early = 1;
    }



    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_13),
                 FUNC_5(VAR_33, VAR_31->req->scheme->name.base, VAR_31->req->scheme->name.len));

    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_11), FUNC_9());
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_10), FUNC_22());
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_12), FUNC_9());
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_8), FUNC_9());
    mrb_value VAR_49 = FUNC_3(
        VAR_32->mrb, FUNC_8(VAR_32->constants, VAR_0), VAR_31->error_stream, &VAR_27);
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_7), VAR_49);
    VAR_31->refs.error_stream = VAR_49;
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_6),
                 FUNC_19(FUNC_20(VAR_33, VAR_30, 1, &VAR_31->refs.generator)));


    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_22),
                 FUNC_8(VAR_32->constants, VAR_23));


    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_2),
                 FUNC_10(VAR_31->req->remaining_delegations));
    FUNC_13(VAR_33, VAR_34, FUNC_8(VAR_32->constants, VAR_3),
                 FUNC_10(VAR_31->req->remaining_reprocesses));

    return VAR_34;
}
