
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct evutil_addrinfo {char* ai_canonname; scalar_t__ ai_family; scalar_t__ ai_addr; struct evutil_addrinfo* ai_next; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct evutil_addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,char*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, struct evutil_addrinfo *VAR_4, void *VAR_5)
{
 const char *VAR_6 = VAR_5;
 int VAR_7;
 struct evutil_addrinfo *VAR_8 = VAR_4;

 if (VAR_3) {
  FUNC_3("%s: %s\n", VAR_6, FUNC_1(VAR_3));
 }
 if (VAR_4 && VAR_4->ai_canonname)
  FUNC_3("    %s ==> %s\n", VAR_6, VAR_4->ai_canonname);
 for (VAR_7=0; VAR_4; VAR_4 = VAR_4->ai_next, ++VAR_7) {
  char VAR_9[128];
  if (VAR_4->ai_family == VAR_2) {
   struct sockaddr_in *VAR_10 =
       (struct sockaddr_in*)VAR_4->ai_addr;
   FUNC_2(VAR_0, &VAR_10->sin_addr, VAR_9,
       sizeof(VAR_9));
   FUNC_3("[%d] %s: %s\n",VAR_7,VAR_6,VAR_9);
  } else {
   struct sockaddr_in6 *VAR_11 =
       (struct sockaddr_in6*)VAR_4->ai_addr;
   FUNC_2(VAR_1, &VAR_11->sin6_addr, VAR_9,
       sizeof(VAR_9));
   FUNC_3("[%d] %s: %s\n",VAR_7,VAR_6,VAR_9);
  }
 }

 if (VAR_8)
  FUNC_0(VAR_8);
}
