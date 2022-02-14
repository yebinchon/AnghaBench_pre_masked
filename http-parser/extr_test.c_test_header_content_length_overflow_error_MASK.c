
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;
typedef int b ;
typedef int a ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;

void
FUNC_2 (void)
{




  const char VAR_0[] = "HTTP/1.1 200 OK\r\n" "Content-Length: " "1844674407370955160" "\r\n" "\r\n";
  const char VAR_1[] = "HTTP/1.1 200 OK\r\n" "Content-Length: " "18446744073709551615" "\r\n" "\r\n";
  const char VAR_2[] = "HTTP/1.1 200 OK\r\n" "Content-Length: " "18446744073709551616" "\r\n" "\r\n";

  FUNC_1(VAR_0, sizeof(VAR_0) - 1, 1);
  FUNC_1(VAR_1, sizeof(VAR_1) - 1, 0);
  FUNC_1(VAR_2, sizeof(VAR_2) - 1, 0);
}
