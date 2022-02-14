
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_9__ {int size; TYPE_2__* entries; int * member_0; } ;
typedef TYPE_3__ h2o_headers_t ;
struct TYPE_10__ {int buf; } ;
struct TYPE_7__ {char* base; int len; } ;
struct TYPE_8__ {TYPE_1__ value; int * name; } ;


 int FUNC_0 (char*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_mem_pool_t VAR_1;
    h2o_headers_t VAR_2 = {((void*)0)};

    FUNC_2(&VAR_1);

    FUNC_4(&VAR_1, &VAR_2, VAR_0, FUNC_0("cookie"));
    FUNC_5(VAR_2.size == 1);
    FUNC_5(VAR_2.entries[0].name == &VAR_0->buf);
    FUNC_5(FUNC_3(VAR_2.entries[0].value.base, VAR_2.entries[0].value.len, FUNC_0("cookie")));
    FUNC_4(&VAR_1, &VAR_2, VAR_0, FUNC_0("accept-encoding"));
    FUNC_5(VAR_2.size == 1);
    FUNC_5(VAR_2.entries[0].name == &VAR_0->buf);
    FUNC_5(FUNC_3(VAR_2.entries[0].value.base, VAR_2.entries[0].value.len, FUNC_0("cookie, accept-encoding")));

    VAR_2.entries[0].value.base[0] = 'C';
    FUNC_4(&VAR_1, &VAR_2, VAR_0, FUNC_0("cookie"));
    FUNC_5(VAR_2.size == 1);
    FUNC_5(VAR_2.entries[0].name == &VAR_0->buf);
    FUNC_5(FUNC_3(VAR_2.entries[0].value.base, VAR_2.entries[0].value.len, FUNC_0("Cookie, accept-encoding")));

    FUNC_1(&VAR_1);
}
