
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int base; } ;
struct TYPE_9__ {int len; int base; } ;
struct TYPE_8__ {int len; int base; } ;
struct TYPE_10__ {int _port; TYPE_1__ path; TYPE_3__ host; TYPE_2__ authority; int * scheme; } ;
typedef TYPE_4__ h2o_url_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*,int ,TYPE_4__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    h2o_url_t VAR_3;
    int VAR_4;

    VAR_4 = FUNC_3("http://example.com/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("example.com")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("example.com")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_2(&VAR_3) == 80);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));

    VAR_4 = FUNC_3("http://example.com", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("example.com")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("example.com")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_2(&VAR_3) == 80);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/")));

    VAR_4 = FUNC_3("http://example.com:81/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("example.com:81")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("example.com")));
    FUNC_4(VAR_3._port == 81);
    FUNC_4(FUNC_2(&VAR_3) == 81);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));

    VAR_4 = FUNC_3("http://example.com:81", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("example.com:81")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("example.com")));
    FUNC_4(VAR_3._port == 81);
    FUNC_4(FUNC_2(&VAR_3) == 81);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/")));

    VAR_4 = FUNC_3("https://example.com/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_1);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("example.com")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("example.com")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_2(&VAR_3) == 443);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));

    VAR_4 = FUNC_3("http:/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 != 0);

    VAR_4 = FUNC_3("ftp://example.com/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 != 0);

    VAR_4 = FUNC_3("http://abc:111111/def", VAR_2, &VAR_3);
    FUNC_4(VAR_4 != 0);

    VAR_4 = FUNC_3("http://[::ffff:192.0.2.128]", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("[::ffff:192.0.2.128]")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("::ffff:192.0.2.128")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_2(&VAR_3) == 80);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/")));

    VAR_4 = FUNC_3("https://[::ffff:192.0.2.128]/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_1);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("[::ffff:192.0.2.128]")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("::ffff:192.0.2.128")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_2(&VAR_3) == 443);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));

    VAR_4 = FUNC_3("https://[::ffff:192.0.2.128]:111/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_1);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("[::ffff:192.0.2.128]:111")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("::ffff:192.0.2.128")));
    FUNC_4(VAR_3._port == 111);
    FUNC_4(FUNC_2(&VAR_3) == 111);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));
}
