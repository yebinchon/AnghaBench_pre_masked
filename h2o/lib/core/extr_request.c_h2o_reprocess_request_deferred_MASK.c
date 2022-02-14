
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_reprocess_request_deferred_t {int is_delegated; int * overrides; void* path; void* authority; int const* scheme; void* method; } ;
typedef int h2o_url_scheme_t ;
typedef int h2o_req_t ;
typedef int h2o_req_overrides_t ;
typedef void* h2o_iovec_t ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 int VAR_0 ;

void FUNC_1(h2o_req_t *VAR_1, h2o_iovec_t VAR_2, const h2o_url_scheme_t *VAR_3, h2o_iovec_t VAR_4,
                                    h2o_iovec_t VAR_5, h2o_req_overrides_t *VAR_6, int VAR_7)
{
    struct st_reprocess_request_deferred_t *VAR_8 =
        (struct st_reprocess_request_deferred_t *)FUNC_0(VAR_1, sizeof(*VAR_8), VAR_0);
    VAR_8->method = VAR_2;
    VAR_8->scheme = VAR_3;
    VAR_8->authority = VAR_4;
    VAR_8->path = VAR_5;
    VAR_8->overrides = VAR_6;
    VAR_8->is_delegated = VAR_7;
}
