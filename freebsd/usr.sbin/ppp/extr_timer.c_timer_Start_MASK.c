
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct pppTimer {scalar_t__ state; scalar_t__ load; scalar_t__ rest; struct pppTimer* next; int name; } ;
struct itimerval {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct itimerval) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pppTimer*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct pppTimer* VAR_7 ;
 scalar_t__ FUNC_2 (int ,struct itimerval*) ;
 int FUNC_3 (int ,char*,int ,struct pppTimer*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct pppTimer *VAR_8)
{
  struct itimerval VAR_9;
  struct pppTimer *VAR_10, *VAR_11;
  u_long VAR_12 = 0;
  sigset_t VAR_13, VAR_14;

  FUNC_5(&VAR_13);
  FUNC_4(&VAR_13, VAR_2);
  FUNC_6(VAR_3, &VAR_13, &VAR_14);

  if (VAR_8->state != VAR_6)
    FUNC_1(VAR_8);

  if (VAR_8->load == 0) {
    FUNC_3(VAR_1, "%s timer[%p] has 0 load!\n", VAR_8->name, VAR_8);
    FUNC_6(VAR_4, &VAR_14, ((void*)0));
    return;
  }





  if (VAR_7 && FUNC_2(VAR_0, &VAR_9) == 0)
    VAR_12 = FUNC_0(VAR_9) - VAR_7->rest;

  VAR_11 = ((void*)0);
  for (VAR_10 = VAR_7; VAR_10; VAR_10 = VAR_10->next) {
    if (VAR_12 + VAR_10->rest >= VAR_8->load)
      break;
    VAR_12 += VAR_10->rest;
    VAR_11 = VAR_10;
  }

  VAR_8->state = VAR_5;
  VAR_8->rest = VAR_8->load - VAR_12;

  if (VAR_10)
    FUNC_3(VAR_1, "timer_Start: Inserting %s timer[%p] before %s "
              "timer[%p], delta = %ld\n", VAR_8->name, VAR_8, VAR_10->name, VAR_10, VAR_8->rest);
  else
    FUNC_3(VAR_1, "timer_Start: Inserting %s timer[%p]\n", VAR_8->name, VAR_8);


  VAR_8->next = VAR_10;
  if (VAR_11) {
    VAR_11->next = VAR_8;
  } else {
    VAR_7 = VAR_8;
    FUNC_7(VAR_10 != ((void*)0));
  }
  if (VAR_10)
    VAR_10->rest -= VAR_8->rest;

  FUNC_6(VAR_4, &VAR_14, ((void*)0));
}
