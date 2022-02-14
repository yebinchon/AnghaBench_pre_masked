
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_name; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct proc* VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_1 (int (*) (void*),void*,struct proc*,int *,int ,int ,char*,...) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct proc *VAR_8;
 struct thread *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = VAR_2;
 VAR_9 = VAR_3;

 FUNC_2(&VAR_6, "vmoomr", ((void*)0), VAR_0);
 FUNC_6();
 for (VAR_11 = -1, VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (FUNC_0(VAR_12)) {
   if (VAR_1)
    FUNC_4("domain %d empty; skipping pageout\n",
        VAR_12);
   continue;
  }
  if (VAR_11 == -1)
   VAR_11 = VAR_12;
  else {
   VAR_10 = FUNC_1(FUNC_7,
       (void *)(uintptr_t)VAR_12, VAR_8, ((void*)0), 0, 0, "dom%d", VAR_12);
   if (VAR_10 != 0)
    FUNC_3("starting pageout for domain %d: %d\n",
        VAR_12, VAR_10);
  }
  VAR_10 = FUNC_1(VAR_7,
      (void *)(uintptr_t)VAR_12, VAR_8, ((void*)0), 0, 0, "laundry: dom%d", VAR_12);
  if (VAR_10 != 0)
   FUNC_3("starting laundry for domain %d: %d", VAR_12, VAR_10);
 }
 VAR_10 = FUNC_1(VAR_4, ((void*)0), VAR_8, ((void*)0), 0, 0, "uma");
 if (VAR_10 != 0)
  FUNC_3("starting uma_reclaim helper, error %d\n", VAR_10);

 FUNC_5(VAR_9->td_name, sizeof(VAR_9->td_name), "dom%d", VAR_11);
 FUNC_7((void *)(uintptr_t)VAR_11);
}
