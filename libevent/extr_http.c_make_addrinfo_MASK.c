
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int ai_flags; int ai_socktype; int ai_family; } ;
typedef int strport ;
typedef int hints ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,struct evutil_addrinfo*,struct evutil_addrinfo**) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (struct evutil_addrinfo*,int ,int) ;

__attribute__((used)) static struct evutil_addrinfo *
FUNC_6(const char *VAR_6, ev_uint16_t VAR_7)
{
 struct evutil_addrinfo *VAR_8 = ((void*)0);

 struct evutil_addrinfo VAR_9;
 char VAR_10[VAR_4];
 int VAR_11;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ai_family = VAR_0;
 VAR_9.ai_socktype = VAR_5;


 VAR_9.ai_flags = VAR_2|VAR_1;
 FUNC_4(VAR_10, sizeof(VAR_10), "%d", VAR_7);
 if ((VAR_11 = FUNC_3(VAR_6, VAR_10, &VAR_9, &VAR_8))
     != 0) {
  if (VAR_11 == VAR_3)
   FUNC_0("getaddrinfo");
  else
   FUNC_1("getaddrinfo: %s",
       FUNC_2(VAR_11));
  return (((void*)0));
 }

 return (VAR_8);
}
