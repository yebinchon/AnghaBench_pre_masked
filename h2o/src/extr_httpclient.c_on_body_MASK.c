
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctx; TYPE_3__** buf; } ;
typedef TYPE_1__ h2o_httpclient_t ;
struct TYPE_5__ {int size; int bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (TYPE_3__**,int ) ;
 char const* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(h2o_httpclient_t *VAR_4, const char *VAR_5)
{
    if (VAR_5 != ((void*)0) && VAR_5 != VAR_1) {
        FUNC_6(VAR_4->ctx, VAR_5);
        return -1;
    }

    FUNC_3((*VAR_4->buf)->bytes, 1, (*VAR_4->buf)->size, VAR_3);
    FUNC_0(VAR_3);
    FUNC_4(&(*VAR_4->buf), (*VAR_4->buf)->size);

    if (VAR_5 == VAR_1) {
        if (--VAR_0 != 0) {

            FUNC_5(&VAR_2);
            FUNC_2(FUNC_1(VAR_3), 0);
            FUNC_7(VAR_4->ctx);
        }
    }

    return 0;
}
