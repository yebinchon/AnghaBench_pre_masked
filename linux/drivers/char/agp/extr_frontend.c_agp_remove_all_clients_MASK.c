
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_file_private {int access_flags; } ;
struct agp_controller {struct agp_client* clients; } ;
struct agp_client {struct agp_client* next; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_file_private* FUNC_0 (int ) ;
 int FUNC_1 (struct agp_client*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct agp_client*) ;

__attribute__((used)) static void FUNC_4(struct agp_controller *VAR_2)
{
 struct agp_client *VAR_3;
 struct agp_client *VAR_4;

 VAR_3 = VAR_2->clients;

 while (VAR_3) {
  struct agp_file_private *VAR_5;

  VAR_4 = VAR_3;
  FUNC_1(VAR_4);
  VAR_5 = FUNC_0(VAR_4->pid);

  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_1, &VAR_5->access_flags);
   FUNC_2(VAR_0, &VAR_5->access_flags);
  }
  VAR_3 = VAR_3->next;
  FUNC_3(VAR_4);
 }
}
