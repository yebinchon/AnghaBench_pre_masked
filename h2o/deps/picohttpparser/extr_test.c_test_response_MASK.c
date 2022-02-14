
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {char const* name; size_t name_len; char const* value; size_t value_len; } ;


 int FUNC_0 (char*,scalar_t__,int,char*) ;
 int FUNC_1 (char const*,size_t,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_0;
    int VAR_1;
    const char *VAR_2;
    size_t VAR_3;
    struct phr_header VAR_4[4];
    size_t VAR_5;
    do { FUNC_0("simple"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 200 OK\r\n\r\n", FUNC_3("HTTP/1.0 200 OK\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (0 == 0 ? FUNC_3("HTTP/1.0 200 OK\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_5 == 0);
    FUNC_2(VAR_1 == 200);
    FUNC_2(VAR_0 == 0);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "OK"));

    do { FUNC_0("partial"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 200 OK\r\n\r", FUNC_3("HTTP/1.0 200 OK\r\n\r"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.0 200 OK\r\n\r") : -2)); } while (0);

    do { FUNC_0("parse headers"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r\nHost: example.com\r\nCookie: \r\n\r\n", FUNC_3("HTTP/1.1 200 OK\r\nHost: example.com\r\nCookie: \r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (0 == 0 ? FUNC_3("HTTP/1.1 200 OK\r\nHost: example.com\r\nCookie: \r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_5 == 2);
    FUNC_2(VAR_0 == 1);
    FUNC_2(VAR_1 == 200);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "OK"));
    FUNC_2(FUNC_1(VAR_4[0].name, VAR_4[0].name_len, "Host"));
    FUNC_2(FUNC_1(VAR_4[0].value, VAR_4[0].value_len, "example.com"));
    FUNC_2(FUNC_1(VAR_4[1].name, VAR_4[1].name_len, "Cookie"));
    FUNC_2(FUNC_1(VAR_4[1].value, VAR_4[1].value_len, ""));

    do { FUNC_0("parse multiline"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 200 OK\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n", FUNC_3("HTTP/1.0 200 OK\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (0 == 0 ? FUNC_3("HTTP/1.0 200 OK\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_5 == 3);
    FUNC_2(VAR_0 == 0);
    FUNC_2(VAR_1 == 200);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "OK"));
    FUNC_2(FUNC_1(VAR_4[0].name, VAR_4[0].name_len, "foo"));
    FUNC_2(FUNC_1(VAR_4[0].value, VAR_4[0].value_len, ""));
    FUNC_2(FUNC_1(VAR_4[1].name, VAR_4[1].name_len, "foo"));
    FUNC_2(FUNC_1(VAR_4[1].value, VAR_4[1].value_len, "b"));
    FUNC_2(VAR_4[2].name == ((void*)0));
    FUNC_2(FUNC_1(VAR_4[2].value, VAR_4[2].value_len, "  \tc"));

    do { FUNC_0("internal server error"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 500 Internal Server Error\r\n\r\n", FUNC_3("HTTP/1.0 500 Internal Server Error\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (0 == 0 ? FUNC_3("HTTP/1.0 500 Internal Server Error\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_5 == 0);
    FUNC_2(VAR_0 == 0);
    FUNC_2(VAR_1 == 500);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "Internal Server Error"));
    FUNC_2(VAR_3 == sizeof("Internal Server Error") - 1);

    do { FUNC_0("incomplete 1"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("H", FUNC_3("H"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("H") : -2)); } while (0);
    do { FUNC_0("incomplete 2"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.", FUNC_3("HTTP/1."), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.") : -2)); } while (0);
    do { FUNC_0("incomplete 3"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1", FUNC_3("HTTP/1.1"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1") : -2)); } while (0);
    FUNC_2(VAR_0 == -1);
    do { FUNC_0("incomplete 4"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 ", FUNC_3("HTTP/1.1 "), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 ") : -2)); } while (0);
    FUNC_2(VAR_0 == 1);
    do { FUNC_0("incomplete 5"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 2", FUNC_3("HTTP/1.1 2"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 2") : -2)); } while (0);
    do { FUNC_0("incomplete 6"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200", FUNC_3("HTTP/1.1 200"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200") : -2)); } while (0);
    FUNC_2(VAR_1 == 0);
    do { FUNC_0("incomplete 7"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 ", FUNC_3("HTTP/1.1 200 "), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 ") : -2)); } while (0);
    FUNC_2(VAR_1 == 200);
    do { FUNC_0("incomplete 8"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 O", FUNC_3("HTTP/1.1 200 O"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 O") : -2)); } while (0);
    do { FUNC_0("incomplete 9"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r", FUNC_3("HTTP/1.1 200 OK\r"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 OK\r") : -2)); } while (0);
    FUNC_2(VAR_2 == ((void*)0));
    do { FUNC_0("incomplete 10"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r\n", FUNC_3("HTTP/1.1 200 OK\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 OK\r\n") : -2)); } while (0);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "OK"));
    do { FUNC_0("incomplete 11"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\n", FUNC_3("HTTP/1.1 200 OK\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 OK\n") : -2)); } while (0);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "OK"));

    do { FUNC_0("incomplete 11"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r\nA: 1\r", FUNC_3("HTTP/1.1 200 OK\r\nA: 1\r"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 OK\r\nA: 1\r") : -2)); } while (0);
    FUNC_2(VAR_5 == 0);
    do { FUNC_0("incomplete 12"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r\nA: 1\r\n", FUNC_3("HTTP/1.1 200 OK\r\nA: 1\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-2 == 0 ? FUNC_3("HTTP/1.1 200 OK\r\nA: 1\r\n") : -2)); } while (0);
    FUNC_2(VAR_5 == 1);
    FUNC_2(FUNC_1(VAR_4[0].name, VAR_4[0].name_len, "A"));
    FUNC_2(FUNC_1(VAR_4[0].value, VAR_4[0].value_len, "1"));

    do { FUNC_0("slowloris (incomplete)"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 200 OK\r\n\r", FUNC_3("HTTP/1.0 200 OK\r\n\r"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, FUNC_3("HTTP/1.0 200 OK\r\n\r") - 1) == (-2 == 0 ? FUNC_3("HTTP/1.0 200 OK\r\n\r") : -2)); } while (0);
    do { FUNC_0("slowloris (complete)"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.0 200 OK\r\n\r\n", FUNC_3("HTTP/1.0 200 OK\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, FUNC_3("HTTP/1.0 200 OK\r\n\r\n") - 1) == (0 == 0 ? FUNC_3("HTTP/1.0 200 OK\r\n\r\n") : 0)); } while (0);

    do { FUNC_0("invalid http version"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1. 200 OK\r\n\r\n", FUNC_3("HTTP/1. 200 OK\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-1 == 0 ? FUNC_3("HTTP/1. 200 OK\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("invalid http version 2"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.2z 200 OK\r\n\r\n", FUNC_3("HTTP/1.2z 200 OK\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-1 == 0 ? FUNC_3("HTTP/1.2z 200 OK\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("no status code"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1  OK\r\n\r\n", FUNC_3("HTTP/1.1  OK\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (-1 == 0 ? FUNC_3("HTTP/1.1  OK\r\n\r\n") : -1)); } while (0);

    do { FUNC_0("exclude leading and trailing spaces in header value"); VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]); FUNC_2(FUNC_0("HTTP/1.1 200 OK\r\nbar: \t b\t \t\r\n\r\n", FUNC_3("HTTP/1.1 200 OK\r\nbar: \t b\t \t\r\n\r\n"), &VAR_0, &VAR_1, &VAR_2, &VAR_3, VAR_4, &VAR_5, 0) == (0 == 0 ? FUNC_3("HTTP/1.1 200 OK\r\nbar: \t b\t \t\r\n\r\n") : 0)); } while (0);
    FUNC_2(FUNC_1(VAR_4[0].value, VAR_4[0].value_len, "b"));


}
