
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {scalar_t__ ai_addrlen; int ai_addr; int ai_family; } ;
typedef int on ;
typedef int evutil_socket_t ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ,void*,int) ;

__attribute__((used)) static evutil_socket_t
FUNC_8(struct evutil_addrinfo *VAR_6, int VAR_7)
{
 evutil_socket_t VAR_8;

 int VAR_9 = 1, VAR_10;
 int VAR_11;


 VAR_8 = FUNC_6(VAR_6 ? VAR_6->ai_family : VAR_0,
     VAR_3|VAR_2|VAR_1, 0);
 if (VAR_8 == -1) {
   FUNC_3(-1, "socket");
   return (-1);
 }

 if (FUNC_7(VAR_8, VAR_4, VAR_5, (void *)&VAR_9, sizeof(VAR_9))<0)
  goto out;
 if (VAR_7) {
  if (FUNC_5(VAR_8) < 0)
   goto out;
 }

 if (VAR_6 != ((void*)0)) {
  VAR_10 = FUNC_2(VAR_8, VAR_6->ai_addr, (ev_socklen_t)VAR_6->ai_addrlen);
  if (VAR_10 == -1)
   goto out;
 }

 return (VAR_8);

 out:
 VAR_11 = FUNC_1();
 FUNC_4(VAR_8);
 FUNC_0(VAR_11);
 return (-1);
}
