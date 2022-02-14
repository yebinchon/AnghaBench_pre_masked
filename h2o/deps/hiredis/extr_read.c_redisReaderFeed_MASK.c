
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ maxbuf; int * buf; scalar_t__ pos; scalar_t__ err; } ;
typedef TYPE_1__ redisReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*,size_t) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(redisReader *VAR_2, const char *VAR_3, size_t VAR_4) {
    sds VAR_5;


    if (VAR_2->err)
        return VAR_0;


    if (VAR_3 != ((void*)0) && VAR_4 >= 1) {

        if (VAR_2->len == 0 && VAR_2->maxbuf != 0 && FUNC_2(VAR_2->buf) > VAR_2->maxbuf) {
            FUNC_5(VAR_2->buf);
            VAR_2->buf = FUNC_4();
            VAR_2->pos = 0;


            FUNC_1(VAR_2->buf != ((void*)0));
        }

        VAR_5 = FUNC_3(VAR_2->buf,VAR_3,VAR_4);
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_2);
            return VAR_0;
        }

        VAR_2->buf = VAR_5;
        VAR_2->len = FUNC_6(VAR_2->buf);
    }

    return VAR_1;
}
