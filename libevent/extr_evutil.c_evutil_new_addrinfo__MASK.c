
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef struct sockaddr {scalar_t__ ai_socktype; scalar_t__ ai_protocol; int ai_addrlen; int ai_flags; int sa_family; int ai_family; struct sockaddr const* ai_addr; struct sockaddr const* ai_next; } const sockaddr ;
typedef struct evutil_addrinfo {scalar_t__ ai_socktype; scalar_t__ ai_protocol; int ai_addrlen; int ai_flags; int sa_family; int ai_family; struct evutil_addrinfo const* ai_addr; struct evutil_addrinfo const* ai_next; } const evutil_addrinfo ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sockaddr const*) ;
 int FUNC_2 (struct sockaddr const*,struct sockaddr const*,int) ;
 struct sockaddr const* FUNC_3 (int,int) ;

struct evutil_addrinfo *
FUNC_4(struct sockaddr *VAR_5, ev_socklen_t VAR_6,
    const struct evutil_addrinfo *VAR_7)
{
 struct evutil_addrinfo *VAR_8;
 FUNC_0(VAR_7);

 if (VAR_7->ai_socktype == 0 && VAR_7->ai_protocol == 0) {

  struct evutil_addrinfo *VAR_9, *VAR_10;
  struct evutil_addrinfo VAR_11;
  FUNC_2(&VAR_11, VAR_7, sizeof(VAR_11));
  VAR_11.ai_socktype = VAR_4; VAR_11.ai_protocol = VAR_1;
  VAR_9 = FUNC_4(VAR_5, VAR_6, &VAR_11);
  if (!VAR_9)
   return ((void*)0);
  VAR_11.ai_socktype = VAR_3; VAR_11.ai_protocol = VAR_2;
  VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_11);
  if (!VAR_10) {
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  VAR_9->ai_next = VAR_10;
  return VAR_9;
 }


 VAR_8 = FUNC_3(1,sizeof(struct evutil_addrinfo)+VAR_6);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->ai_addr = (struct sockaddr*)
     (((char*)VAR_8) + sizeof(struct evutil_addrinfo));
 FUNC_2(VAR_8->ai_addr, VAR_5, VAR_6);
 VAR_8->ai_addrlen = VAR_6;
 VAR_8->ai_family = VAR_5->sa_family;
 VAR_8->ai_flags = VAR_0;
 VAR_8->ai_socktype = VAR_7->ai_socktype;
 VAR_8->ai_protocol = VAR_7->ai_protocol;

 return VAR_8;
}
