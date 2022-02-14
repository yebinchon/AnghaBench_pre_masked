
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socks {int sk_addrlen; int sk_addr; int sk_sock; } ;
typedef int ssize_t ;


 int FUNC_0 (char**,char*,int,char const*,char const*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, struct socks *VAR_5, ssize_t VAR_6, const char *VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (VAR_6 == 0) {
  FUNC_5(VAR_1, "%s", VAR_7);
  return;
 }
 if ((VAR_9 = FUNC_0(&VAR_8, "<%d>%s %s %s: %s", VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_7)) == -1)
  FUNC_1(1, "asprintf");

 VAR_11 = -1;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11 = FUNC_3(VAR_5[VAR_10].sk_sock, VAR_8, VAR_9, 0,
          FUNC_4(&VAR_5[VAR_10].sk_addr), VAR_5[VAR_10].sk_addrlen);
  if (VAR_11 == VAR_9 && !VAR_0)
   break;
 }
 if (VAR_11 != VAR_9) {
  if (VAR_11 == -1)
   FUNC_6("sendto");
  else
   FUNC_7("sendto: short send - %d bytes", VAR_11);
 }

 FUNC_2(VAR_8);
}
