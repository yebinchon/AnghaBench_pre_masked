
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int size; TYPE_5__* entries; } ;
struct TYPE_14__ {int size; TYPE_2__* entries; } ;
struct TYPE_18__ {int complete; TYPE_6__ url_only; TYPE_3__ url_and_etag; } ;
struct TYPE_19__ {TYPE_7__ fresh; } ;
typedef TYPE_8__ h2o_cache_digests_t ;
struct TYPE_15__ {int size; int* entries; } ;
struct TYPE_16__ {int capacity_bits; TYPE_4__ keys; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_13__ {int capacity_bits; TYPE_1__ keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__**,int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    h2o_cache_digests_t *VAR_3 = ((void*)0);

    FUNC_2(&VAR_3, FUNC_0("AeLA"));
    FUNC_4(VAR_3 != ((void*)0));
    if (VAR_3 == ((void*)0))
        return;
    FUNC_4(VAR_3->fresh.url_only.size == 1);
    FUNC_4(VAR_3->fresh.url_and_etag.size == 0);
    FUNC_4(VAR_3->fresh.url_only.entries[0].capacity_bits == 7);
    FUNC_4(VAR_3->fresh.url_only.entries[0].keys.size == 1);
    FUNC_4(VAR_3->fresh.url_only.entries[0].keys.entries[0] == 0x0b);
    FUNC_4(!VAR_3->fresh.complete);

    FUNC_4(FUNC_3(VAR_3, FUNC_0("https://127.0.0.1.xip.io:8081/cache-digests.cgi/hello.js")) ==
       VAR_0);
    FUNC_4(FUNC_3(VAR_3, FUNC_0("https://127.0.0.1.xip.io:8081/notfound.js")) ==
       VAR_2);

    FUNC_2(&VAR_3, FUNC_0("FOO; stale, AcA; validators; complete"));
    FUNC_4(VAR_3->fresh.url_only.size == 1);
    FUNC_4(VAR_3->fresh.url_and_etag.size == 1);
    FUNC_4(VAR_3->fresh.url_and_etag.entries[0].capacity_bits == 7);
    FUNC_4(VAR_3->fresh.url_and_etag.entries[0].keys.size == 0);
    FUNC_4(VAR_3->fresh.complete);

    FUNC_4(FUNC_3(VAR_3, FUNC_0("https://127.0.0.1.xip.io:8081/notfound.js")) ==
       VAR_1);
    FUNC_4(FUNC_3(VAR_3, FUNC_0("https://127.0.0.1.xip.io:8081/cache-digests.cgi/hello.js")) ==
       VAR_0);

    FUNC_2(&VAR_3, FUNC_0("AcA; reset"));
    FUNC_4(VAR_3->fresh.url_only.size == 1);
    FUNC_4(VAR_3->fresh.url_and_etag.size == 0);
    FUNC_4(VAR_3->fresh.url_only.entries[0].capacity_bits == 7);
    FUNC_4(VAR_3->fresh.url_only.entries[0].keys.size == 0);
    FUNC_4(!VAR_3->fresh.complete);

    FUNC_1(VAR_3);
}
