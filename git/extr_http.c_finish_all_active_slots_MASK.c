
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct active_request_slot {struct active_request_slot* next; scalar_t__ in_use; } ;


 struct active_request_slot* VAR_0 ;
 int FUNC_0 (struct active_request_slot*) ;

void FUNC_1(void)
{
 struct active_request_slot *VAR_1 = VAR_0;

 while (VAR_1 != ((void*)0))
  if (VAR_1->in_use) {
   FUNC_0(VAR_1);
   VAR_1 = VAR_0;
  } else {
   VAR_1 = VAR_1->next;
  }
}
