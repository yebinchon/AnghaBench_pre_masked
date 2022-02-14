
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct evutil_addrinfo {int ai_flags; int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; } ;
typedef int strport ;
typedef int hints ;
typedef int ev_uint16_t ;
typedef scalar_t__ ev_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct evutil_addrinfo*) ;
 int FUNC_1 (char const*,char*,struct evutil_addrinfo*,struct evutil_addrinfo**) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 int FUNC_4 (struct evutil_addrinfo*,int ,int) ;

__attribute__((used)) static ev_socklen_t
FUNC_5(struct sockaddr_storage *VAR_5, const char *VAR_6, ev_uint16_t VAR_7)
{
 struct evutil_addrinfo *VAR_8 = ((void*)0);
 struct evutil_addrinfo VAR_9;
 char VAR_10[VAR_3];
 int VAR_11;
 ev_socklen_t VAR_12 = 0;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ai_family = VAR_0;
 VAR_9.ai_socktype = VAR_4;
 VAR_9.ai_flags = VAR_2|VAR_1;
 FUNC_2(VAR_10, sizeof(VAR_10), "%d", VAR_7);
 if ((VAR_11 = FUNC_1(VAR_6, VAR_10, &VAR_9, &VAR_8)) != 0) {
  return 0;
 }
 if (!VAR_8)
  return 0;
 if (VAR_8->ai_addrlen > sizeof(*VAR_5)) {
  FUNC_0(VAR_8);
  return 0;
 }

 FUNC_3(VAR_5, VAR_8->ai_addr, VAR_8->ai_addrlen);

 VAR_12 = (ev_socklen_t)VAR_8->ai_addrlen;
 FUNC_0(VAR_8);
 return VAR_12;
}
