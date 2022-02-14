
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_collect_req_status_cbdata_t {TYPE_2__* buffer; int logconf; } ;
typedef int h2o_req_t ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ bytes; } ;
struct TYPE_3__ {int * base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ FUNC_2 (TYPE_2__**,size_t) ;
 char* FUNC_3 (int ,int *,size_t*,char*) ;
 int FUNC_4 (scalar_t__,char*,size_t) ;

__attribute__((used)) static int FUNC_5(h2o_req_t *VAR_0, void *VAR_1)
{
    struct st_collect_req_status_cbdata_t *VAR_2 = VAR_1;


    char VAR_3[4096];
    size_t VAR_4 = sizeof(VAR_3);
    char *VAR_5 = FUNC_3(VAR_2->logconf, VAR_0, &VAR_4, VAR_3);
    FUNC_0(VAR_4 != 0);
    --VAR_4;


    if ((FUNC_2(&VAR_2->buffer, VAR_4 + 3)).base == ((void*)0)) {
        if (VAR_5 != VAR_3)
            FUNC_1(VAR_5);
        return -1;
    }
    FUNC_4(VAR_2->buffer->bytes + VAR_2->buffer->size, VAR_5, VAR_4);
    VAR_2->buffer->size += VAR_4;

    if (VAR_5 != VAR_3)
        FUNC_1(VAR_5);

    return 0;
}
