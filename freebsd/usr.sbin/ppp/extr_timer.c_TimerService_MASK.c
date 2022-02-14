
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct pppTimer {scalar_t__ rest; int arg; int (* func ) (int ) ;struct pppTimer* enext; struct pppTimer* next; int state; } ;


 struct pppTimer* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pppTimer* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
  struct pppTimer *VAR_4, *VAR_5, *VAR_6;

  if (FUNC_0(VAR_1)) {
    static time_t VAR_7;
    time_t VAR_8 = FUNC_2(((void*)0));

    if (VAR_8 > VAR_7)
      FUNC_4(VAR_1, ((void*)0));
    VAR_7 = VAR_8;
  }

  VAR_4 = VAR_3;
  if (VAR_4) {
    VAR_4->rest = 0;


    VAR_5 = ((void*)0);
    do {
      VAR_4->state = VAR_2;
      VAR_6 = VAR_4->next;
      VAR_4->enext = VAR_5;
      VAR_5 = VAR_4;
      VAR_4 = VAR_6;
    } while (VAR_4 && VAR_4->rest == 0);

    VAR_3 = VAR_4;
    if (VAR_3 != ((void*)0))
      FUNC_3(1);
    else
      FUNC_5();


    while (VAR_5) {
      VAR_0 = VAR_5->enext;
      VAR_5->enext = ((void*)0);
      if (VAR_5->func)
        (*VAR_5->func)(VAR_5->arg);
      VAR_5 = VAR_0;
    }
  }
}
