
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int value_len; int value; int name_len; int name; } ;


 int FUNC_0 (char*,int,int,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{


    struct phr_header VAR_0[4];
    size_t VAR_1;
    do { FUNC_0("simple"); VAR_1 = sizeof(VAR_0) / sizeof(VAR_0[0]); FUNC_2(FUNC_0("Host: example.com\r\nCookie: \r\n\r\n", strlen("Host: example.com\r\nCookie: \r\n\r\n"), VAR_0, &VAR_1, 0) == (0 == 0 ? FUNC_0("Host: example.com\r\nCookie: \r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_1 == 2);
    FUNC_2(FUNC_1(VAR_0[0].name, VAR_0[0].name_len, "Host"));
    FUNC_2(FUNC_1(VAR_0[0].value, VAR_0[0].value_len, "example.com"));
    FUNC_2(FUNC_1(VAR_0[1].name, VAR_0[1].name_len, "Cookie"));
    FUNC_2(FUNC_1(VAR_0[1].value, VAR_0[1].value_len, ""));

    do { FUNC_0("slowloris"); VAR_1 = sizeof(VAR_0) / sizeof(VAR_0[0]); FUNC_2(FUNC_0("Host: example.com\r\nCookie: \r\n\r\n", FUNC_0("Host: example.com\r\nCookie: \r\n\r\n"), VAR_0, &VAR_1, 1) == (0 == 0 ? FUNC_0("Host: example.com\r\nCookie: \r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_1 == 2);
    FUNC_2(FUNC_1(VAR_0[0].name, VAR_0[0].name_len, "Host"));
    FUNC_2(FUNC_1(VAR_0[0].value, VAR_0[0].value_len, "example.com"));
    FUNC_2(FUNC_1(VAR_0[1].name, VAR_0[1].name_len, "Cookie"));
    FUNC_2(FUNC_1(VAR_0[1].value, VAR_0[1].value_len, ""));

    do { FUNC_0("partial"); VAR_1 = sizeof(VAR_0) / sizeof(VAR_0[0]); FUNC_2(FUNC_0("Host: example.com\r\nCookie: \r\n\r", FUNC_0("Host: example.com\r\nCookie: \r\n\r"), VAR_0, &VAR_1, 0) == (-2 == 0 ? FUNC_0("Host: example.com\r\nCookie: \r\n\r") : -2)); } while (0);

    do { FUNC_0("error"); VAR_1 = sizeof(VAR_0) / sizeof(VAR_0[0]); FUNC_2(FUNC_0("Host: e\7fample.com\r\nCookie: \r\n\r", FUNC_0("Host: e\7fample.com\r\nCookie: \r\n\r"), VAR_0, &VAR_1, 0) == (-1 == 0 ? FUNC_0("Host: e\7fample.com\r\nCookie: \r\n\r") : -1)); } while (0);


}
