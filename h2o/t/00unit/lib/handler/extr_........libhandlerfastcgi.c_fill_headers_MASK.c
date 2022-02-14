
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct phr_header {int* name; int name_len; char* value; int value_len; } ;
struct TYPE_16__ {scalar_t__ proxy_should_drop_for_res; } ;
struct TYPE_18__ {TYPE_1__ flags; } ;
typedef TYPE_3__ h2o_token_t ;
struct TYPE_17__ {int status; char* reason; int headers; int content_length; } ;
struct TYPE_19__ {TYPE_2__ res; int pool; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_20__ {char* base; int len; } ;
typedef TYPE_5__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 TYPE_3__ const* VAR_0 ;
 int VAR_1 ;
 TYPE_3__ const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,int *,TYPE_3__ const*,int *,char*,int) ;
 int FUNC_3 (int *,int *,char*,int,int ,int *,char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_5__ FUNC_5 (int*,int) ;
 TYPE_3__* FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (int*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int*,int) ;
 int FUNC_9 (TYPE_4__*,int ,char*,...) ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_5__ FUNC_11 (int *,int*,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static int FUNC_14(h2o_req_t *VAR_5, struct phr_header *VAR_6, size_t VAR_7)
{
    size_t VAR_8;


    VAR_5->res.status = 200;
    VAR_5->res.reason = "OK";
    VAR_5->res.content_length = VAR_4;

    for (VAR_8 = 0; VAR_8 != VAR_7; ++VAR_8) {
        const h2o_token_t *VAR_9;
        FUNC_12((char *)VAR_6[VAR_8].name, VAR_6[VAR_8].name_len);
        if ((VAR_9 = FUNC_6(VAR_6[VAR_8].name, VAR_6[VAR_8].name_len)) != ((void*)0)) {
            if (VAR_9->flags.proxy_should_drop_for_res) {

            } else if (VAR_9 == VAR_0) {
                if (VAR_5->res.content_length != VAR_4) {
                    FUNC_9(VAR_5, VAR_3, "received multiple content-length headers from fcgi");
                    return -1;
                }
                if ((VAR_5->res.content_length = FUNC_13(VAR_6[VAR_8].value, VAR_6[VAR_8].value_len)) == VAR_4) {
                    FUNC_9(VAR_5, VAR_3, "failed to parse content-length header sent from fcgi: %.*s",
                                      (int)VAR_6[VAR_8].value_len, VAR_6[VAR_8].value);
                    return -1;
                }
            } else {







                FUNC_2(&VAR_5->pool, &VAR_5->res.headers, VAR_9, ((void*)0),
                               FUNC_11(&VAR_5->pool, VAR_6[VAR_8].value, VAR_6[VAR_8].value_len).base, VAR_6[VAR_8].value_len);
                if (VAR_9 == VAR_2)
                    FUNC_8(VAR_5, VAR_6[VAR_8].value, VAR_6[VAR_8].value_len);
            }
        } else if (FUNC_7(VAR_6[VAR_8].name, VAR_6[VAR_8].name_len, FUNC_0("status"))) {
            h2o_iovec_t VAR_10 = FUNC_5(VAR_6[VAR_8].value, VAR_6[VAR_8].value_len);
            if (VAR_10.len < 3 || !(FUNC_1(VAR_10.base[0]) && FUNC_1(VAR_10.base[1]) && FUNC_1(VAR_10.base[2])) ||
                (VAR_10.len >= 4 && VAR_10.base[3] != ' ')) {
                FUNC_9(VAR_5, VAR_3, "failed to parse Status header, got: %.*s", (int)VAR_10.len, VAR_10.base);
                return -1;
            }
            VAR_5->res.status = (VAR_10.base[0] - '0') * 100 + (VAR_10.base[1] - '0') * 10 + (VAR_10.base[2] - '0');
            VAR_5->res.reason = VAR_10.len >= 5 ? FUNC_11(&VAR_5->pool, VAR_10.base + 4, VAR_10.len - 4).base : "OK";
        } else {
            h2o_iovec_t VAR_11 = FUNC_11(&VAR_5->pool, VAR_6[VAR_8].name, VAR_6[VAR_8].name_len),
                        VAR_12 = FUNC_11(&VAR_5->pool, VAR_6[VAR_8].value, VAR_6[VAR_8].value_len);
            FUNC_3(&VAR_5->pool, &VAR_5->res.headers, VAR_11.base, VAR_11.len, 0, ((void*)0), VAR_12.base,
                                  VAR_12.len);
        }
    }


    if (FUNC_4(&VAR_5->res.headers, VAR_1, -1) == -1)
        FUNC_10(VAR_5);

    return 0;
}
