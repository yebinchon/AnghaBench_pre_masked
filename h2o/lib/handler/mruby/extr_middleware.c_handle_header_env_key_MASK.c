
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_token_t ;
struct TYPE_7__ {int headers; int pool; } ;
typedef TYPE_1__ h2o_req_t ;
typedef int h2o_mruby_shared_context_t ;
struct TYPE_8__ {int len; int * base; } ;
typedef TYPE_2__ h2o_iovec_t ;


 int const* VAR_0 ;
 TYPE_2__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int const*,int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int ,int ,int *,int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_2__ FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(h2o_mruby_shared_context_t *VAR_1, h2o_iovec_t *VAR_2, h2o_iovec_t VAR_3, void *VAR_4)
{
    h2o_req_t *VAR_5 = VAR_4;
    const h2o_token_t *VAR_6;


    h2o_iovec_t VAR_7 = FUNC_0(&VAR_5->pool, VAR_2->base, VAR_2->len);
    if (VAR_7.base == ((void*)0))
        return 0;

    if ((VAR_6 = FUNC_3(VAR_7.base, VAR_7.len)) != ((void*)0)) {
        if (VAR_6 == VAR_0) {

        } else {
            VAR_3 = FUNC_4(&VAR_5->pool, VAR_3.base, VAR_3.len);
            FUNC_1(&VAR_5->pool, &VAR_5->headers, VAR_6, ((void*)0), VAR_3.base, VAR_3.len);
        }
    } else {
        VAR_3 = FUNC_4(&VAR_5->pool, VAR_3.base, VAR_3.len);
        FUNC_2(&VAR_5->pool, &VAR_5->headers, VAR_7.base, VAR_7.len, 0, ((void*)0), VAR_3.base, VAR_3.len);
    }

    return 0;
}
