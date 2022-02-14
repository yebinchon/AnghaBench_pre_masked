
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmr_cb ;
struct timers {int head; } ;
struct timer_entry {int timeout; int id; void* arg; int func; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct timer_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct timer_entry*,struct timer_entry*,int ) ;
 int FUNC_3 (int *,struct timer_entry*,int ) ;
 struct timer_entry* FUNC_4 (struct timer_entry*,int ) ;
 struct timer_entry* FUNC_5 (int) ;
 int FUNC_6 (struct timer_entry*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct timers *VAR_1, int VAR_2, int VAR_3, tmr_cb VAR_4, void *VAR_5)
{
 struct timer_entry *VAR_6, *VAR_7, *VAR_8;

 VAR_6 = FUNC_5(sizeof(struct timer_entry));
 FUNC_6(VAR_6, 0, sizeof(struct timer_entry));

 VAR_6->timeout = VAR_3;
 VAR_6->func = VAR_4;
 VAR_6->arg = VAR_5;
 VAR_6->id = VAR_2;

 VAR_7 = FUNC_1(&VAR_1->head);

 if (FUNC_0(&VAR_1->head)) {
  FUNC_3(&VAR_1->head, VAR_6, VAR_0);
 } else if (VAR_6->timeout < VAR_7->timeout) {
  VAR_7->timeout -= VAR_6->timeout;
  FUNC_3(&VAR_1->head, VAR_6, VAR_0);
 } else {
  while (VAR_6->timeout >= VAR_7->timeout) {
   VAR_6->timeout -= VAR_7->timeout;
   VAR_8 = FUNC_4(VAR_7, VAR_0);
   if (VAR_8 == ((void*)0) || VAR_8->timeout > VAR_6->timeout)
    break;
   VAR_7 = VAR_8;
  }
  FUNC_2(&VAR_1->head, VAR_7, VAR_6, VAR_0);
 }
}
