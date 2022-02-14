
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppTimer {scalar_t__ state; scalar_t__ rest; struct pppTimer* enext; struct pppTimer* next; int name; } ;
struct itimerval {int dummy; } ;


 struct pppTimer* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct itimerval) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pppTimer* VAR_5 ;
 scalar_t__ FUNC_1 (int ,struct itimerval*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct pppTimer *VAR_6)
{
  struct itimerval VAR_7;
  struct pppTimer *VAR_8, *VAR_9;







  if (VAR_6->state == VAR_4)
    return;

  VAR_9 = ((void*)0);
  for (VAR_8 = VAR_5; VAR_8 != VAR_6 && VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    VAR_9 = VAR_8;

  if (VAR_8) {
    if (VAR_9)
      VAR_9->next = VAR_8->next;
    else {
      VAR_5 = VAR_8->next;
      if (VAR_5 == ((void*)0))
 FUNC_4();
    }
    if (VAR_8->next) {
      if (!VAR_9 && FUNC_1(VAR_1, &VAR_7) == 0)
        VAR_8->next->rest += FUNC_0(VAR_7);
      else
        VAR_8->next->rest += VAR_8->rest;
      if (!VAR_9 && VAR_8->next->rest > 0)
        FUNC_3(1);
    }
  } else {

    VAR_9 = ((void*)0);
    for (VAR_8 = VAR_0; VAR_8 != VAR_6 && VAR_8 != ((void*)0); VAR_8 = VAR_8->enext)
      VAR_9 = VAR_8;

    if (VAR_8) {
      if (VAR_9)
        VAR_9->enext = VAR_8->enext;
      else
        VAR_0 = VAR_8->enext;
    } else if (VAR_6->state == VAR_3)
      FUNC_2(VAR_2, "Oops, %s timer not found!!\n", VAR_6->name);
  }

  VAR_6->next = VAR_6->enext = ((void*)0);
  VAR_6->state = VAR_4;
}
