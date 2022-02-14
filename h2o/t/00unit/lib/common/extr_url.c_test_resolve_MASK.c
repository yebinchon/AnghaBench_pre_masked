
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int len; int base; } ;
struct TYPE_16__ {int len; int base; } ;
struct TYPE_15__ {int len; int base; } ;
struct TYPE_18__ {int _port; TYPE_3__ path; TYPE_2__ host; TYPE_1__ authority; int * scheme; } ;
typedef TYPE_4__ h2o_url_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_19__ {int len; int base; } ;
typedef TYPE_5__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,int ,TYPE_4__*) ;
 int FUNC_6 (char*,int ,TYPE_4__*) ;
 TYPE_5__ FUNC_7 (int *,TYPE_4__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_5__ FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void)
{
    h2o_mem_pool_t VAR_3;
    h2o_url_t VAR_4, VAR_5, VAR_6;
    h2o_iovec_t VAR_7;
    int VAR_8;

    FUNC_2(&VAR_3);

    VAR_8 = FUNC_5("http://example.com/dir/index.html", VAR_2, &VAR_4);
    FUNC_9(VAR_8 == 0);

    VAR_8 = FUNC_6("../assets/jquery.js", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/assets/jquery.js")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/assets/jquery.js")));

    VAR_8 = FUNC_6("foo.html", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/dir/foo.html")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/dir/foo.html")));

    VAR_8 = FUNC_6("./bar.txt", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/dir/bar.txt")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/dir/bar.txt")));

    VAR_8 = FUNC_6("../../../traverse", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/traverse")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/traverse")));

    VAR_8 = FUNC_6("http:foo.html", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/dir/foo.html")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/dir/foo.html")));

    VAR_8 = FUNC_6("http:/icon.ico", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/icon.ico")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 80);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/icon.ico")));

    VAR_8 = FUNC_6("https:/icon.ico", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("https://example.com/icon.ico")));
    FUNC_9(VAR_6.scheme == &VAR_1);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.com")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.com")));
    FUNC_9(VAR_6._port == 65535);
    FUNC_9(FUNC_4(&VAR_6) == 443);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/icon.ico")));

    VAR_8 = FUNC_6("//example.jp:81/icon.ico", VAR_2, &VAR_5);
    FUNC_9(VAR_8 == 0);
    VAR_7 = FUNC_7(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.jp:81/icon.ico")));
    FUNC_9(VAR_6.scheme == &VAR_0);
    FUNC_9(FUNC_3(VAR_6.authority.base, VAR_6.authority.len, FUNC_0("example.jp:81")));
    FUNC_9(FUNC_3(VAR_6.host.base, VAR_6.host.len, FUNC_0("example.jp")));
    FUNC_9(VAR_6._port == 81);
    FUNC_9(FUNC_4(&VAR_6) == 81);
    FUNC_9(FUNC_3(VAR_6.path.base, VAR_6.path.len, FUNC_0("/icon.ico")));

    VAR_7 = FUNC_8(&VAR_3, &VAR_4);
    FUNC_9(FUNC_3(VAR_7.base, VAR_7.len, FUNC_0("http://example.com/dir/index.html")));

    FUNC_1(&VAR_3);
}
