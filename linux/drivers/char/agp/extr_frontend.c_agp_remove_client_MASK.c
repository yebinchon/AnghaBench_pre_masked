
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_controller {int num_clients; struct agp_client* clients; } ;
struct agp_client {struct agp_client* prev; struct agp_client* next; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct agp_client* FUNC_0 (struct agp_controller*,int ) ;
 struct agp_controller* FUNC_1 (int ) ;
 int FUNC_2 (struct agp_client*) ;
 int FUNC_3 (struct agp_client*) ;

int FUNC_4(pid_t VAR_1)
{
 struct agp_client *VAR_2;
 struct agp_client *VAR_3;
 struct agp_client *VAR_4;
 struct agp_controller *VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_5, VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_3 = VAR_2->prev;
 VAR_4 = VAR_2->next;

 if (VAR_3 != ((void*)0)) {
  VAR_3->next = VAR_4;
  if (VAR_4 != ((void*)0))
   VAR_4->prev = VAR_3;

 } else {
  if (VAR_4 != ((void*)0))
   VAR_4->prev = ((void*)0);
  VAR_5->clients = VAR_4;
 }

 VAR_5->num_clients--;
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 return 0;
}
