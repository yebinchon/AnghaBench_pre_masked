
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct in_addr {int dummy; } ;
struct server {struct server* next; int port; struct in_addr addr; } ;
struct libalias {int dummy; } ;
struct alias_link {struct server* server; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 struct server* FUNC_2 (int) ;

int
FUNC_3(struct libalias *VAR_0, struct alias_link *VAR_1, struct in_addr VAR_2, u_short VAR_3)
{
 struct server *VAR_4;
 int VAR_5;

 FUNC_0(VAR_0);
 (void)VAR_0;

 VAR_4 = FUNC_2(sizeof(struct server));

 if (VAR_4 != ((void*)0)) {
  struct server *VAR_6;

  VAR_4->addr = VAR_2;
  VAR_4->port = VAR_3;

  VAR_6 = VAR_1->server;
  if (VAR_6 == ((void*)0))
   VAR_4->next = VAR_4;
  else {
   struct server *VAR_7;

   for (VAR_7 = VAR_6; VAR_7->next != VAR_6; VAR_7 = VAR_7->next);
   VAR_7->next = VAR_4;
   VAR_4->next = VAR_6;
  }
  VAR_1->server = VAR_4;
  VAR_5 = 0;
 } else
  VAR_5 = -1;

 FUNC_1(VAR_0);
 return (VAR_5);
}
