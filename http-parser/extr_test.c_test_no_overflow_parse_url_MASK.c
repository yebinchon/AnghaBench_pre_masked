
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_parser_url {int port; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int,int ,struct http_parser_url*) ;
 int FUNC_3 (struct http_parser_url*) ;
 int VAR_0 ;

void
FUNC_4 (void)
{
  int VAR_1;
  struct http_parser_url VAR_2;

  FUNC_3(&VAR_2);
  VAR_1 = FUNC_2("http://example.com:8001", 22, 0, &VAR_2);

  if (VAR_1 != 0) {
    FUNC_1(VAR_0,
            "\n*** test_no_overflow_parse_url invalid return value=%d\n",
            VAR_1);
    FUNC_0();
  }

  if (VAR_2.port != 800) {
    FUNC_1(VAR_0,
            "\n*** test_no_overflow_parse_url invalid port number=%d\n",
            VAR_2.port);
    FUNC_0();
  }
}
