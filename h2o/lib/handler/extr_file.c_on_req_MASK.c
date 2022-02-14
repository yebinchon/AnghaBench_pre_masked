
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct st_h2o_sendfile_generator_t {int dummy; } ;
struct TYPE_27__ {scalar_t__ base; scalar_t__ len; } ;
struct TYPE_30__ {size_t len; int * base; } ;
struct TYPE_28__ {int len; int base; } ;
struct TYPE_29__ {scalar_t__ query_at; TYPE_3__ path; int pool; TYPE_6__ path_normalized; TYPE_4__ method; } ;
typedef TYPE_5__ h2o_req_t ;
typedef TYPE_6__ h2o_iovec_t ;
typedef int h2o_handler_t ;
struct TYPE_26__ {size_t len; int * base; } ;
struct TYPE_25__ {size_t len; int * base; } ;
struct TYPE_31__ {size_t max_index_file_len; int flags; int mimemap; TYPE_6__* index_files; TYPE_2__ real_path; TYPE_1__ conf_path; } ;
typedef TYPE_7__ h2o_file_handler_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (size_t) ;
 struct st_h2o_sendfile_generator_t* FUNC_2 (TYPE_5__*,char*,size_t,int*,int) ;
 scalar_t__ VAR_6 ;
 TYPE_6__ FUNC_3 (int *,TYPE_6__,TYPE_6__,...) ;
 int FUNC_4 (char*,size_t) ;
 TYPE_6__ FUNC_5 (scalar_t__,...) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,char*,char*,int ) ;
 int FUNC_11 (TYPE_5__*,char*,char*,int ) ;
 int FUNC_12 (TYPE_5__*,int,char*,int *,size_t) ;
 TYPE_6__ FUNC_13 (int *,int *,size_t,char*) ;
 int FUNC_14 (char*,int *,size_t) ;
 scalar_t__ FUNC_15 (TYPE_5__*,char*,size_t,int) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (struct st_h2o_sendfile_generator_t*,TYPE_5__*,TYPE_6__,char*,size_t,int ) ;
 scalar_t__ FUNC_18 (TYPE_7__*,TYPE_5__*,char*,size_t) ;

__attribute__((used)) static int FUNC_19(h2o_handler_t *VAR_7, h2o_req_t *VAR_8)
{
    h2o_file_handler_t *VAR_9 = (void *)VAR_7;
    char *VAR_10;
    size_t VAR_11, VAR_12;
    struct st_h2o_sendfile_generator_t *VAR_13 = ((void*)0);
    int VAR_14;

    if (VAR_8->path_normalized.len < VAR_9->conf_path.len) {
        h2o_iovec_t VAR_15 = FUNC_13(&VAR_8->pool, VAR_9->conf_path.base, VAR_9->conf_path.len, "/");
        if (VAR_8->query_at != VAR_5)
            VAR_15 = FUNC_3(&VAR_8->pool, VAR_15, FUNC_5(VAR_8->path.base + VAR_8->query_at, VAR_8->path.len - VAR_8->query_at));
        FUNC_12(VAR_8, 301, "Moved Permanently", VAR_15.base, VAR_15.len);
        return 0;
    }


    VAR_12 = VAR_9->conf_path.len;
    VAR_10 = FUNC_1(VAR_9->real_path.len + (VAR_8->path_normalized.len - VAR_12) + VAR_9->max_index_file_len + 1);
    VAR_11 = 0;
    FUNC_14(VAR_10 + VAR_11, VAR_9->real_path.base, VAR_9->real_path.len);
    VAR_11 += VAR_9->real_path.len;
    FUNC_14(VAR_10 + VAR_11, VAR_8->path_normalized.base + VAR_12, VAR_8->path_normalized.len - VAR_12);
    VAR_11 += VAR_8->path_normalized.len - VAR_12;

    FUNC_9(VAR_8);

    h2o_iovec_t VAR_16 = VAR_8->path_normalized;


    if (VAR_10[VAR_11 - 1] == '/') {
        h2o_iovec_t *VAR_17;
        for (VAR_17 = VAR_9->index_files; VAR_17->base != ((void*)0); ++VAR_17) {
            FUNC_14(VAR_10 + VAR_11, VAR_17->base, VAR_17->len);
            VAR_10[VAR_11 + VAR_17->len] = '\0';
            if ((VAR_13 = FUNC_2(VAR_8, VAR_10, VAR_11 + VAR_17->len, &VAR_14, VAR_9->flags)) != ((void*)0)) {
                VAR_11 += VAR_17->len;
                VAR_16 = FUNC_3(&VAR_8->pool, VAR_8->path_normalized, *VAR_17);
                goto Opened;
            }
            if (VAR_14) {

                h2o_iovec_t VAR_18 = FUNC_3(&VAR_8->pool, VAR_8->path_normalized, *VAR_17, FUNC_5(FUNC_0("/")));
                VAR_18 = FUNC_13(&VAR_8->pool, VAR_18.base, VAR_18.len, "/");
                if (VAR_8->query_at != VAR_5)
                    VAR_18 =
                        FUNC_3(&VAR_8->pool, VAR_18, FUNC_5(VAR_8->path.base + VAR_8->query_at, VAR_8->path.len - VAR_8->query_at));
                FUNC_12(VAR_8, 301, "Moved Permantently", VAR_18.base, VAR_18.len);
                return 0;
            }
            if (VAR_6 != VAR_2)
                break;
        }
        if (VAR_17->base == ((void*)0) && (VAR_9->flags & VAR_4) != 0) {
            VAR_10[VAR_11] = '\0';
            int VAR_19 = 0;
            if (FUNC_6(VAR_8->method.base, VAR_8->method.len, FUNC_0("GET"))) {
                VAR_19 = 1;
            } else if (FUNC_6(VAR_8->method.base, VAR_8->method.len, FUNC_0("HEAD"))) {

            } else {
                FUNC_16(VAR_8);
                return 0;
            }
            if (FUNC_15(VAR_8, VAR_10, VAR_11, VAR_19) == 0)
                return 0;
        }
    } else {
        VAR_10[VAR_11] = '\0';
        if ((VAR_13 = FUNC_2(VAR_8, VAR_10, VAR_11, &VAR_14, VAR_9->flags)) != ((void*)0))
            goto Opened;
        if (VAR_14) {
            h2o_iovec_t VAR_20 = FUNC_3(&VAR_8->pool, VAR_8->path_normalized, FUNC_5(FUNC_0("/")));
            VAR_20 = FUNC_13(&VAR_8->pool, VAR_20.base, VAR_20.len, "/");
            if (VAR_8->query_at != VAR_5)
                VAR_20 = FUNC_3(&VAR_8->pool, VAR_20, FUNC_5(VAR_8->path.base + VAR_8->query_at, VAR_8->path.len - VAR_8->query_at));
            FUNC_12(VAR_8, 301, "Moved Permanently", VAR_20.base, VAR_20.len);
            return 0;
        }
    }


    if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
        FUNC_11(VAR_8, "Service Unavailable", "please try again later", 0);
    } else {
        if (FUNC_8(VAR_9->mimemap) && FUNC_18(VAR_9, VAR_8, VAR_10, VAR_11) == 0)
            return 0;
        if (VAR_6 == VAR_2 || VAR_6 == VAR_3) {
            return -1;
        } else {
            FUNC_10(VAR_8, "Access Forbidden", "access forbidden", 0);
        }
    }
    return 0;

Opened:
    return FUNC_17(VAR_13, VAR_8, VAR_16, VAR_10, VAR_11,
                                FUNC_7(VAR_9->mimemap, FUNC_4(VAR_10, VAR_11)));
}
