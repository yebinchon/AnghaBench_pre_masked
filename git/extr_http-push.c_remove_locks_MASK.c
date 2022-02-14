
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_lock {struct remote_lock* next; } ;
struct TYPE_2__ {struct remote_lock* locks; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct remote_lock*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct remote_lock *VAR_2 = VAR_0->locks;

 FUNC_0(VAR_1, "Removing remote locks...\n");
 while (VAR_2) {
  struct remote_lock *VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
