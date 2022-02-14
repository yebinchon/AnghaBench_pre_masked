
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct remote_lock {int start_time; int timeout; char* url; struct remote_lock* next; int refreshing; } ;
struct TYPE_2__ {struct remote_lock* locks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct remote_lock*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct remote_lock *VAR_4 = VAR_2->locks;
 time_t VAR_5 = FUNC_2(((void*)0));
 int VAR_6;

 while (VAR_4) {
  VAR_6 = VAR_4->start_time + VAR_4->timeout -
   VAR_5;
  if (!VAR_4->refreshing && VAR_6 < VAR_0) {
   if (!FUNC_1(VAR_4)) {
    FUNC_0(VAR_3,
     "Unable to refresh lock for %s\n",
     VAR_4->url);
    VAR_1 = 1;
    return;
   }
  }
  VAR_4 = VAR_4->next;
 }
}
