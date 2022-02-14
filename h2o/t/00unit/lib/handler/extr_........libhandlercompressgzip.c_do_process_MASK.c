
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ do_transform; } ;
struct TYPE_8__ {TYPE_4__* entries; } ;
struct st_gzip_context_t {scalar_t__ zs_is_open; int zs; TYPE_3__ super; TYPE_2__ bufs; } ;
typedef int processor ;
struct TYPE_10__ {scalar_t__ len; int raw; int member_0; TYPE_1__* callbacks; } ;
typedef TYPE_4__ h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_compress_context_t ;
struct TYPE_7__ {scalar_t__ flatten; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct st_gzip_context_t*,int ,scalar_t__,int ,size_t,int ) ;

__attribute__((used)) static h2o_send_state_t FUNC_5(h2o_compress_context_t *VAR_5, h2o_sendvec_t *VAR_6, size_t VAR_7, h2o_send_state_t VAR_8,
                                   h2o_sendvec_t **VAR_9, size_t *VAR_10, processor VAR_11)
{
    struct st_gzip_context_t *VAR_12 = (void *)VAR_5;
    size_t VAR_13;
    h2o_sendvec_t *VAR_14;

    VAR_13 = 0;
    VAR_12->bufs.entries[0].len = 0;

    if (VAR_7 != 0) {
        size_t VAR_15;
        for (VAR_15 = 0; VAR_15 != VAR_7 - 1; ++VAR_15) {
            FUNC_0(VAR_6[VAR_15].callbacks->flatten == VAR_4);
            VAR_13 = FUNC_4(VAR_12, VAR_6[VAR_15].raw, VAR_6[VAR_15].len, VAR_1, VAR_13, VAR_11);
        }
        FUNC_0(VAR_6[VAR_15].callbacks->flatten == VAR_4);
        VAR_14 = VAR_6 + VAR_15;
    } else {
        static const h2o_sendvec_t VAR_16 = {0};
        VAR_14 = (h2o_sendvec_t *)&VAR_16;
    }
    VAR_13 = FUNC_4(VAR_12, VAR_14->raw, VAR_14->len, FUNC_2(VAR_8) ? VAR_2 : VAR_0,
                                VAR_13, VAR_11);

    *VAR_9 = VAR_12->bufs.entries;
    *VAR_10 = VAR_13 + 1;

    if (!FUNC_2(VAR_8)) {
        if (VAR_12->super.do_transform == VAR_3) {
            FUNC_1(&VAR_12->zs);
        } else {
            FUNC_3(&VAR_12->zs);
        }
        VAR_12->zs_is_open = 0;
    }

    return VAR_8;
}
