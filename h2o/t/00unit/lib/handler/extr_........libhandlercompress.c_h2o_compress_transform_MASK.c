
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int len; TYPE_1__* callbacks; } ;
typedef TYPE_2__ h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_req_t ;
struct TYPE_15__ {int (* do_transform ) (TYPE_3__*,TYPE_2__*,size_t,int ,TYPE_2__**,size_t*) ;int * push_buf; } ;
typedef TYPE_3__ h2o_compress_context_t ;
struct TYPE_13__ {int (* flatten ) (TYPE_2__*,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,size_t,int ,TYPE_2__**,size_t*) ;

h2o_send_state_t FUNC_8(h2o_compress_context_t *VAR_2, h2o_req_t *VAR_3, h2o_sendvec_t *VAR_4, size_t VAR_5,
                                        h2o_send_state_t VAR_6, h2o_sendvec_t **VAR_7, size_t *VAR_8)
{
    h2o_sendvec_t VAR_9;

    if (VAR_5 != 0 && VAR_4->callbacks->flatten != &FUNC_4) {
        FUNC_0(VAR_5 == 1);
        FUNC_0(VAR_4->len <= VAR_0);
        if (VAR_2->push_buf == ((void*)0))
            VAR_2->push_buf = FUNC_2(FUNC_3(VAR_6) ? VAR_0 : VAR_4->len);
        if (!(*VAR_4->callbacks->flatten)(VAR_4, VAR_3, FUNC_1(VAR_2->push_buf, VAR_4->len), 0)) {
            *VAR_7 = ((void*)0);
            *VAR_8 = 0;
            return VAR_1;
        }
        FUNC_5(&VAR_9, VAR_2->push_buf, VAR_4->len);
        VAR_4 = &VAR_9;
    }

    return VAR_2->do_transform(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
