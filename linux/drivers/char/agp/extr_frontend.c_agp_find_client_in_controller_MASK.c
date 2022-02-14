
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_controller {struct agp_client* clients; } ;
struct agp_client {scalar_t__ pid; struct agp_client* next; } ;
typedef scalar_t__ pid_t ;



__attribute__((used)) static struct agp_client
*FUNC_0(struct agp_controller *VAR_0, pid_t VAR_1)
{
 struct agp_client *VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_2 = VAR_0->clients;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->pid == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
