
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h2o_iovec_t ;
struct TYPE_7__ {size_t size; TYPE_3__* entries; } ;
typedef TYPE_2__ h2o_headers_t ;
struct TYPE_6__ {int len; int base; } ;
struct TYPE_8__ {TYPE_1__ value; int * name; } ;
typedef TYPE_3__ h2o_header_t ;
struct TYPE_9__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,size_t,int ) ;
 char* FUNC_4 (int *,char,size_t*,int *) ;

int FUNC_5(const h2o_headers_t *VAR_3)
{
    size_t VAR_4;
    int VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 != VAR_3->size; ++VAR_4) {
        const h2o_header_t *VAR_6 = VAR_3->entries + VAR_4;
        if (FUNC_1(VAR_6->name == &VAR_2->buf)) {
            h2o_iovec_t VAR_7 = FUNC_2(VAR_6->value.base, VAR_6->value.len);
            const char *VAR_8 = ((void*)0);
            size_t VAR_9 = 0;
            while ((VAR_8 = FUNC_4(&VAR_7, ',', &VAR_9, ((void*)0))) != ((void*)0)) {
                if (FUNC_3(VAR_8, VAR_9, FUNC_0("gzip")))
                    VAR_5 |= VAR_1;
                else if (FUNC_3(VAR_8, VAR_9, FUNC_0("br")))
                    VAR_5 |= VAR_0;
            }
        }
    }

    return VAR_5;
}
