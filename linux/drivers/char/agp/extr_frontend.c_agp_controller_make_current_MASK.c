
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_file_private {int access_flags; } ;
struct agp_controller {struct agp_client* clients; } ;
struct agp_client {struct agp_client* next; int pid; } ;
struct TYPE_2__ {struct agp_controller* current_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct agp_file_private* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct agp_controller *VAR_3)
{
 struct agp_client *VAR_4;

 VAR_4 = VAR_3->clients;

 while (VAR_4 != ((void*)0)) {
  struct agp_file_private *VAR_5;

  VAR_5 = FUNC_0(VAR_4->pid);

  if (VAR_5 != ((void*)0)) {
   FUNC_1(VAR_1, &VAR_5->access_flags);
   FUNC_1(VAR_0, &VAR_5->access_flags);
  }
  VAR_4 = VAR_4->next;
 }

 VAR_2.current_controller = VAR_3;
}
