
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int http_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 size_t FUNC_4 (int *,int *,char const*,size_t) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_6 (char const*) ;

void
FUNC_7 (int VAR_5)
{
  http_parser VAR_6;
  FUNC_5(&VAR_6, VAR_5 ? VAR_1 : VAR_2);
  size_t VAR_7;
  const char *VAR_8;
  VAR_8 = VAR_5 ?
    "GET / HTTP/1.1\r\n" :
    "HTTP/1.1 200 OK\r\n";
  VAR_7 = FUNC_4(&VAR_6, &VAR_3, VAR_8, FUNC_6(VAR_8));
  FUNC_2(VAR_7 == FUNC_6(VAR_8));

  VAR_8 = "Transfer-Encoding: chunked\r\nContent-Length: 1\r\n\r\n";
  size_t VAR_9 = FUNC_6(VAR_8);

  VAR_7 = FUNC_4(&VAR_6, &VAR_3, VAR_8, VAR_9);
  if (VAR_7 != VAR_9) {
    FUNC_2(FUNC_0(&VAR_6) == VAR_0);
    return;
  }

  FUNC_3(VAR_4,
          "\n*** Error expected but none in chunked content-length test ***\n");
  FUNC_1();
}
