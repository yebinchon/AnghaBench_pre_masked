
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_mruby_subreq_t {TYPE_5__* buf; int super; } ;
struct TYPE_8__ {int len; TYPE_1__* callbacks; } ;
typedef TYPE_2__ h2o_sendvec_t ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {char* base; } ;
struct TYPE_7__ {int (* flatten ) (TYPE_2__*,int *,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_4__ FUNC_1 (TYPE_5__**,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct st_mruby_subreq_t *VAR_0, h2o_sendvec_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 != VAR_2; ++VAR_3) {
        char *VAR_4 = FUNC_1(&VAR_0->buf, VAR_1[VAR_3].len).base;
        FUNC_0(VAR_4 != ((void*)0) && "no memory or disk space; FIXME bail out gracefully");
        if (!(*VAR_1[VAR_3].callbacks->flatten)(VAR_1 + VAR_3, &VAR_0->super, FUNC_3(VAR_4, VAR_1[VAR_3].len), 0))
            FUNC_2("FIXME handle error from pull handler");
        VAR_0->buf->size += VAR_1[VAR_3].len;
    }
}
