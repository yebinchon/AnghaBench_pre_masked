
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {char const* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,int ) ;
 char* FUNC_3 (char const*,int,TYPE_1__*,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_iovec_t VAR_0, VAR_1;
    uint16_t VAR_2;
    const char *VAR_3;

    VAR_0 = FUNC_1(FUNC_0("127.0.0.1"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(VAR_3 == VAR_0.base + VAR_0.len);
    FUNC_4(FUNC_2(VAR_1.base, VAR_1.len, FUNC_0("127.0.0.1")));
    FUNC_4(VAR_2 == 65535);

    VAR_0 = FUNC_1(FUNC_0("127.0.0.1/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(FUNC_5(VAR_3, "/") == 0);
    FUNC_4(FUNC_2(VAR_1.base, VAR_1.len, FUNC_0("127.0.0.1")));
    FUNC_4(VAR_2 == 65535);

    VAR_0 = FUNC_1(FUNC_0("127.0.0.1:8081/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(FUNC_5(VAR_3, "/") == 0);
    FUNC_4(FUNC_2(VAR_1.base, VAR_1.len, FUNC_0("127.0.0.1")));
    FUNC_4(VAR_2 == 8081);

    VAR_0 = FUNC_1(FUNC_0("[::ffff:192.0.2.1]:8081/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(FUNC_5(VAR_3, "/") == 0);
    FUNC_4(FUNC_2(VAR_1.base, VAR_1.len, FUNC_0("::ffff:192.0.2.1")));
    FUNC_4(VAR_2 == 8081);

    VAR_0 = FUNC_1(FUNC_0("[::ffff:192.0.2.1:8081/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(VAR_3 == ((void*)0));

    VAR_0 = FUNC_1(FUNC_0(":8081/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(VAR_3 == ((void*)0));

    VAR_0 = FUNC_1(FUNC_0("[]:8081/"));
    VAR_3 = FUNC_3(VAR_0.base, VAR_0.len, &VAR_1, &VAR_2);
    FUNC_4(VAR_3 == ((void*)0));
}
