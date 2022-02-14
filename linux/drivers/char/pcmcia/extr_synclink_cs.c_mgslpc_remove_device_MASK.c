
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next_device; int port; int line; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(MGSLPC_INFO *VAR_3)
{
 MGSLPC_INFO *VAR_4 = VAR_1;
 MGSLPC_INFO *VAR_5 = ((void*)0);

 while(VAR_4) {
  if (VAR_4 == VAR_3) {
   if (VAR_5)
    VAR_5->next_device = VAR_4->next_device;
   else
    VAR_1 = VAR_4->next_device;
   FUNC_4(VAR_2, VAR_4->line);



   FUNC_2(VAR_4);
   FUNC_3(&VAR_4->port);
   FUNC_1(VAR_4);
   VAR_0--;
   return;
  }
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next_device;
 }
}
