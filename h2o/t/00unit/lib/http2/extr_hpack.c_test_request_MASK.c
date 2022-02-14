
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef int uint8_t ;
typedef int req ;
typedef int header_table ;
struct TYPE_21__ {int size; TYPE_3__* entries; } ;
struct TYPE_20__ {int len; int base; } ;
struct TYPE_18__ {int len; int base; } ;
struct TYPE_19__ {int len; int base; } ;
struct TYPE_25__ {int * scheme; TYPE_15__ path; TYPE_13__ method; TYPE_14__ authority; } ;
struct TYPE_26__ {int hpack_capacity; int pool; TYPE_16__ headers; TYPE_4__ input; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_27__ {int len; scalar_t__ base; } ;
typedef TYPE_6__ h2o_iovec_t ;
typedef TYPE_5__ h2o_hpack_header_table_t ;
struct TYPE_23__ {int len; int base; } ;
struct TYPE_24__ {TYPE_2__ value; TYPE_1__* name; } ;
struct TYPE_22__ {int len; int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int ,TYPE_5__*,TYPE_13__*,int **,TYPE_14__*,TYPE_15__*,TYPE_16__*,int*,size_t*,int *,int const*,int ,char const**) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(h2o_iovec_t VAR_3, h2o_iovec_t VAR_4, h2o_iovec_t VAR_5)
{
    h2o_hpack_header_table_t VAR_6;
    h2o_req_t VAR_7;
    h2o_iovec_t VAR_8;
    int VAR_9, VAR_10;
    size_t VAR_11;
    const char *VAR_12 = ((void*)0);

    FUNC_8(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.hpack_capacity = 4096;

    FUNC_8(&VAR_7, 0, sizeof(VAR_7));
    FUNC_5(&VAR_7.pool);
    VAR_8 = VAR_3;
    VAR_9 = FUNC_2(&VAR_7.pool, VAR_2, &VAR_6, &VAR_7.input.method, &VAR_7.input.scheme,
                                &VAR_7.input.authority, &VAR_7.input.path, &VAR_7.headers, &VAR_10, &VAR_11, ((void*)0),
                                (const uint8_t *)VAR_8.base, VAR_8.len, &VAR_12);
    FUNC_9(VAR_9 == 0);
    FUNC_9(VAR_7.input.authority.len == 15);
    FUNC_9(FUNC_7(VAR_7.input.authority.base, FUNC_0("www.example.com")) == 0);
    FUNC_9(VAR_7.input.method.len == 3);
    FUNC_9(FUNC_7(VAR_7.input.method.base, FUNC_0("GET")) == 0);
    FUNC_9(VAR_7.input.path.len == 1);
    FUNC_9(FUNC_7(VAR_7.input.path.base, FUNC_0("/")) == 0);
    FUNC_9(VAR_7.input.scheme == &VAR_0);
    FUNC_9(VAR_7.headers.size == 0);

    FUNC_4(&VAR_7.pool);

    FUNC_8(&VAR_7, 0, sizeof(VAR_7));
    FUNC_5(&VAR_7.pool);
    VAR_8 = VAR_4;
    VAR_9 = FUNC_2(&VAR_7.pool, VAR_2, &VAR_6, &VAR_7.input.method, &VAR_7.input.scheme,
                                &VAR_7.input.authority, &VAR_7.input.path, &VAR_7.headers, &VAR_10, &VAR_11, ((void*)0),
                                (const uint8_t *)VAR_8.base, VAR_8.len, &VAR_12);
    FUNC_9(VAR_9 == 0);
    FUNC_9(VAR_7.input.authority.len == 15);
    FUNC_9(FUNC_7(VAR_7.input.authority.base, FUNC_0("www.example.com")) == 0);
    FUNC_9(VAR_7.input.method.len == 3);
    FUNC_9(FUNC_7(VAR_7.input.method.base, FUNC_0("GET")) == 0);
    FUNC_9(VAR_7.input.path.len == 1);
    FUNC_9(FUNC_7(VAR_7.input.path.base, FUNC_0("/")) == 0);
    FUNC_9(VAR_7.input.scheme == &VAR_0);
    FUNC_9(VAR_7.headers.size == 1);
    FUNC_9(FUNC_6(VAR_7.headers.entries[0].name->base, VAR_7.headers.entries[0].name->len, FUNC_0("cache-control")));
    FUNC_9(FUNC_3(VAR_7.headers.entries[0].value.base, VAR_7.headers.entries[0].value.len, FUNC_0("no-cache")));

    FUNC_4(&VAR_7.pool);

    FUNC_8(&VAR_7, 0, sizeof(VAR_7));
    FUNC_5(&VAR_7.pool);
    VAR_8 = VAR_5;
    VAR_9 = FUNC_2(&VAR_7.pool, VAR_2, &VAR_6, &VAR_7.input.method, &VAR_7.input.scheme,
                                &VAR_7.input.authority, &VAR_7.input.path, &VAR_7.headers, &VAR_10, &VAR_11, ((void*)0),
                                (const uint8_t *)VAR_8.base, VAR_8.len, &VAR_12);
    FUNC_9(VAR_9 == 0);
    FUNC_9(VAR_7.input.authority.len == 15);
    FUNC_9(FUNC_7(VAR_7.input.authority.base, FUNC_0("www.example.com")) == 0);
    FUNC_9(VAR_7.input.method.len == 3);
    FUNC_9(FUNC_7(VAR_7.input.method.base, FUNC_0("GET")) == 0);
    FUNC_9(VAR_7.input.path.len == 11);
    FUNC_9(FUNC_7(VAR_7.input.path.base, FUNC_0("/index.html")) == 0);
    FUNC_9(VAR_7.input.scheme == &VAR_1);
    FUNC_9(VAR_7.headers.size == 1);
    FUNC_9(FUNC_6(VAR_7.headers.entries[0].name->base, VAR_7.headers.entries[0].name->len, FUNC_0("custom-key")));
    FUNC_9(FUNC_3(VAR_7.headers.entries[0].value.base, VAR_7.headers.entries[0].value.len, FUNC_0("custom-value")));

    FUNC_1(&VAR_6);
    FUNC_4(&VAR_7.pool);
}
