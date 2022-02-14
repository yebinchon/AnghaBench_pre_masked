
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;
typedef int b ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;

void
FUNC_2 (void)
{






  const char VAR_2[] = "HTTP/1.1 200 OK\r\n" "Transfer-Encoding: chunked\r\n" "\r\n" "FFFFFFFFFFFFFFE" "\r\n" "...";
  const char VAR_3[] = "HTTP/1.1 200 OK\r\n" "Transfer-Encoding: chunked\r\n" "\r\n" "FFFFFFFFFFFFFFFF" "\r\n" "...";
  const char VAR_4[] = "HTTP/1.1 200 OK\r\n" "Transfer-Encoding: chunked\r\n" "\r\n" "10000000000000000" "\r\n" "...";

  FUNC_1(VAR_2, sizeof(VAR_2) - 1, 1);
  FUNC_1(VAR_3, sizeof(VAR_3) - 1, 0);
  FUNC_1(VAR_4, sizeof(VAR_4) - 1, 0);
}
