
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imap_socket {scalar_t__ ssl; } ;




 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, struct imap_socket *VAR_2, int VAR_3)
{

 if (VAR_2->ssl) {
  int VAR_4 = FUNC_0(VAR_2->ssl, VAR_3);
  switch (VAR_4) {
  case 129:
   break;
  case 128:
   FUNC_2("SSL_connect");
   break;
  default:
   FUNC_3("SSL_connect");
   break;
  }
 } else

 {
  if (VAR_3 < 0)
   FUNC_2(VAR_1);
  else
   FUNC_1(VAR_0, "%s: unexpected EOF\n", VAR_1);
 }
}
