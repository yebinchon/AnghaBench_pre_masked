
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int parsed ;
struct TYPE_9__ {int len; int * base; } ;
struct TYPE_8__ {int len; int * base; } ;
struct TYPE_7__ {int len; int * base; } ;
struct TYPE_10__ {int _port; TYPE_3__ path; TYPE_2__ host; TYPE_1__ authority; int * scheme; } ;
typedef TYPE_4__ h2o_url_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    h2o_url_t VAR_3;
    int VAR_4;

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == ((void*)0));
    FUNC_4(VAR_3.authority.base == ((void*)0));
    FUNC_4(VAR_3.host.base == ((void*)0));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("abc")));

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("/abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == ((void*)0));
    FUNC_4(VAR_3.authority.base == ((void*)0));
    FUNC_4(VAR_3.host.base == ((void*)0));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/abc")));

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("http:abc", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_0);
    FUNC_4(VAR_3.authority.base == ((void*)0));
    FUNC_4(VAR_3.host.base == ((void*)0));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("abc")));

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("//host", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == ((void*)0));
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("host")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("host")));
    FUNC_4(VAR_3._port == 65535);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/")));

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("//host:12345/path", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == ((void*)0));
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("host:12345")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("host")));
    FUNC_4(VAR_3._port == 12345);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/path")));

    FUNC_3(&VAR_3, 0x55, sizeof(VAR_3));
    VAR_4 = FUNC_2("https://host:12345/path", VAR_2, &VAR_3);
    FUNC_4(VAR_4 == 0);
    FUNC_4(VAR_3.scheme == &VAR_1);
    FUNC_4(FUNC_1(VAR_3.authority.base, VAR_3.authority.len, FUNC_0("host:12345")));
    FUNC_4(FUNC_1(VAR_3.host.base, VAR_3.host.len, FUNC_0("host")));
    FUNC_4(VAR_3._port == 12345);
    FUNC_4(FUNC_1(VAR_3.path.base, VAR_3.path.len, FUNC_0("/path")));
}
