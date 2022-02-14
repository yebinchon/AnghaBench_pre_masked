
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct host_list {TYPE_1__ addr; struct host_list* next; } ;


 struct host_list* VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct in_addr VAR_1)
{
 struct host_list *VAR_2;

 if (VAR_0 == ((void*)0))
  return (0);

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  if (VAR_2->addr.s_addr == VAR_1.s_addr)
   return (1);
 }
 return (0);
}
