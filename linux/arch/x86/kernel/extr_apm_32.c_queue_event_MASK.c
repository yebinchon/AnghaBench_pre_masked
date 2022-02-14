
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_user {scalar_t__ event_head; scalar_t__ event_tail; int* events; int standbys_pending; int suspends_pending; int writer; int suser; int reader; struct apm_user* next; } ;
typedef int apm_event_t ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct apm_user* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(apm_event_t VAR_6, struct apm_user *VAR_7)
{
 struct apm_user *VAR_8;

 FUNC_1(&VAR_5);
 if (VAR_4 == ((void*)0))
  goto out;
 for (VAR_8 = VAR_4; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  if ((VAR_8 == VAR_7) || (!VAR_8->reader))
   continue;
  if (++VAR_8->event_head >= VAR_0)
   VAR_8->event_head = 0;

  if (VAR_8->event_head == VAR_8->event_tail) {
   static int VAR_9;

   if (VAR_9++ == 0)
    FUNC_0("an event queue overflowed\n");
   if (++VAR_8->event_tail >= VAR_0)
    VAR_8->event_tail = 0;
  }
  VAR_8->events[VAR_8->event_head] = VAR_6;
  if (!VAR_8->suser || !VAR_8->writer)
   continue;
  switch (VAR_6) {
  case 130:
  case 128:
   VAR_8->suspends_pending++;
   VAR_3++;
   break;

  case 131:
  case 129:
   VAR_8->standbys_pending++;
   VAR_2++;
   break;
  }
 }
 FUNC_3(&VAR_1);
out:
 FUNC_2(&VAR_5);
}
