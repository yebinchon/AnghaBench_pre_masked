
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
    const char *VAR_0;
    size_t VAR_1;
    const char *VAR_2;
    size_t VAR_3;
    int VAR_4;
    struct phr_header VAR_5[4];
    size_t VAR_6;
    do { FUNC_0("simple"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n\r\n", sizeof("GET / HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET / HTTP/1.0\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 0);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/"));
    FUNC_2(VAR_4 == 0);

    do { FUNC_0("partial"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n\r", sizeof("GET / HTTP/1.0\r\n\r") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / HTTP/1.0\r\n\r") : -2)); } while (0);

    do { FUNC_0("parse headers"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /hoge HTTP/1.1\r\nHost: example.com\r\nCookie: \r\n\r\n", sizeof("GET /hoge HTTP/1.1\r\nHost: example.com\r\nCookie: \r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET /hoge HTTP/1.1\r\nHost: example.com\r\nCookie: \r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 2);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/hoge"));
    FUNC_2(VAR_4 == 1);
    FUNC_2(FUNC_1(VAR_5[0].name, VAR_5[0].name_len, "Host"));
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, "example.com"));
    FUNC_2(FUNC_1(VAR_5[1].name, VAR_5[1].name_len, "Cookie"));
    FUNC_2(FUNC_1(VAR_5[1].value, VAR_5[1].value_len, ""));

    do { FUNC_0("multibyte included"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /hoge HTTP/1.1\r\nHost: example.com\r\nUser-Agent: \343\201\262\343/1.0\r\n\r\n", sizeof("GET /hoge HTTP/1.1\r\nHost: example.com\r\nUser-Agent: \343\201\262\343/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET /hoge HTTP/1.1\r\nHost: example.com\r\nUser-Agent: \343\201\262\343/1.0\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 2);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/hoge"));
    FUNC_2(VAR_4 == 1);
    FUNC_2(FUNC_1(VAR_5[0].name, VAR_5[0].name_len, "Host"));
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, "example.com"));
    FUNC_2(FUNC_1(VAR_5[1].name, VAR_5[1].name_len, "User-Agent"));
    FUNC_2(FUNC_1(VAR_5[1].value, VAR_5[1].value_len, "\343\201\262\343/1.0"));

    do { FUNC_0("parse multiline"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n", sizeof("GET / HTTP/1.0\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET / HTTP/1.0\r\nfoo: \r\nfoo: b\r\n  \tc\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 3);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/"));
    FUNC_2(VAR_4 == 0);
    FUNC_2(FUNC_1(VAR_5[0].name, VAR_5[0].name_len, "foo"));
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, ""));
    FUNC_2(FUNC_1(VAR_5[1].name, VAR_5[1].name_len, "foo"));
    FUNC_2(FUNC_1(VAR_5[1].value, VAR_5[1].value_len, "b"));
    FUNC_2(VAR_5[2].name == ((void*)0));
    FUNC_2(FUNC_1(VAR_5[2].value, VAR_5[2].value_len, "  \tc"));

    do { FUNC_0("parse header name with trailing space"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\nfoo : ab\r\n\r\n", sizeof("GET / HTTP/1.0\r\nfoo : ab\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\nfoo : ab\r\n\r\n") : -1)); } while (0);

    do { FUNC_0("incomplete 1"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET", sizeof("GET") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET") : -2)); } while (0);
    FUNC_2(VAR_0 == ((void*)0));
    do { FUNC_0("incomplete 2"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET ", sizeof("GET ") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET ") : -2)); } while (0);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    do { FUNC_0("incomplete 3"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /", sizeof("GET /") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET /") : -2)); } while (0);
    FUNC_2(VAR_2 == ((void*)0));
    do { FUNC_0("incomplete 4"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / ", sizeof("GET / ") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / ") : -2)); } while (0);
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/"));
    do { FUNC_0("incomplete 5"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / H", sizeof("GET / H") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / H") : -2)); } while (0);
    do { FUNC_0("incomplete 6"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.", sizeof("GET / HTTP/1.") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / HTTP/1.") : -2)); } while (0);
    do { FUNC_0("incomplete 7"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0", sizeof("GET / HTTP/1.0") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / HTTP/1.0") : -2)); } while (0);
    FUNC_2(VAR_4 == -1);
    do { FUNC_0("incomplete 8"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r", sizeof("GET / HTTP/1.0\r") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-2 == 0 ? FUNC_3("GET / HTTP/1.0\r") : -2)); } while (0);
    FUNC_2(VAR_4 == 0);

    do { FUNC_0("slowloris (incomplete)"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /hoge HTTP/1.0\r\n\r", sizeof("GET /hoge HTTP/1.0\r\n\r") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, FUNC_3("GET /hoge HTTP/1.0\r\n\r") - 1) == (-2 == 0 ? FUNC_3("GET /hoge HTTP/1.0\r\n\r") : -2)); } while (0);
    do { FUNC_0("slowloris (complete)"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /hoge HTTP/1.0\r\n\r\n", sizeof("GET /hoge HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, FUNC_3("GET /hoge HTTP/1.0\r\n\r\n") - 1) == (0 == 0 ? FUNC_3("GET /hoge HTTP/1.0\r\n\r\n") : 0)); } while (0);

    do { FUNC_0("empty method"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0(" / HTTP/1.0\r\n\r\n", sizeof(" / HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3(" / HTTP/1.0\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("empty request-target"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET  HTTP/1.0\r\n\r\n", sizeof("GET  HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET  HTTP/1.0\r\n\r\n") : -1)); } while (0);

    do { FUNC_0("empty header name"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n:a\r\n\r\n", sizeof("GET / HTTP/1.0\r\n:a\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\n:a\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("header name (space only)"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n :a\r\n\r\n", sizeof("GET / HTTP/1.0\r\n :a\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\n :a\r\n\r\n") : -1)); } while (0);

    do { FUNC_0("NUL in method"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("G\0T / HTTP/1.0\r\n\r\n", sizeof("G\0T / HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("G\0T / HTTP/1.0\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("tab in method"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("G\tT / HTTP/1.0\r\n\r\n", sizeof("G\tT / HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("G\tT / HTTP/1.0\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("DEL in uri-path"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /\x7fhello HTTP/1.0\r\n\r\n", sizeof("GET /\x7fhello HTTP/1.0\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET /\x7fhello HTTP/1.0\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("NUL in header name"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\na\0b: c\r\n\r\n", sizeof("GET / HTTP/1.0\r\na\0b: c\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\na\0b: c\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("NUL in header value"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\nab: c\0d\r\n\r\n", sizeof("GET / HTTP/1.0\r\nab: c\0d\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\nab: c\0d\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("CTL in header name"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\na\033b: c\r\n\r\n", sizeof("GET / HTTP/1.0\r\na\033b: c\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\na\033b: c\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("CTL in header value"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\nab: c\033\r\n\r\n", sizeof("GET / HTTP/1.0\r\nab: c\033\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\nab: c\033\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("invalid char in header value"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n/: 1\r\n\r\n", sizeof("GET / HTTP/1.0\r\n/: 1\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\n/: 1\r\n\r\n") : -1)); } while (0);
    do { FUNC_0("accept MSB chars"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET /\xa0 HTTP/1.0\r\nh: c\xa2y\r\n\r\n", sizeof("GET /\xa0 HTTP/1.0\r\nh: c\xa2y\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET /\xa0 HTTP/1.0\r\nh: c\xa2y\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 1);
    FUNC_2(FUNC_1(VAR_0, VAR_1, "GET"));
    FUNC_2(FUNC_1(VAR_2, VAR_3, "/\xa0"));
    FUNC_2(VAR_4 == 0);
    FUNC_2(FUNC_1(VAR_5[0].name, VAR_5[0].name_len, "h"));
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, "c\xa2y"));

    do { FUNC_0("accept |~ (though forbidden by SSE)"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n\x7c\x7e: 1\r\n\r\n", sizeof("GET / HTTP/1.0\r\n\x7c\x7e: 1\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET / HTTP/1.0\r\n\x7c\x7e: 1\r\n\r\n") : 0)); } while (0);
    FUNC_2(VAR_6 == 1);
    FUNC_2(FUNC_1(VAR_5[0].name, VAR_5[0].name_len, "\x7c\x7e"));
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, "1"));

    do { FUNC_0("disallow {"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\n\x7b: 1\r\n\r\n", sizeof("GET / HTTP/1.0\r\n\x7b: 1\r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (-1 == 0 ? FUNC_3("GET / HTTP/1.0\r\n\x7b: 1\r\n\r\n") : -1)); } while (0);

    do { FUNC_0("exclude leading and trailing spaces in header value"); VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]); FUNC_2(FUNC_0("GET / HTTP/1.0\r\nfoo: a \t \r\n\r\n", sizeof("GET / HTTP/1.0\r\nfoo: a \t \r\n\r\n") - 1, &VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, VAR_5, &VAR_6, 0) == (0 == 0 ? FUNC_3("GET / HTTP/1.0\r\nfoo: a \t \r\n\r\n") : 0)); } while (0);
    FUNC_2(FUNC_1(VAR_5[0].value, VAR_5[0].value_len, "a"));


}
