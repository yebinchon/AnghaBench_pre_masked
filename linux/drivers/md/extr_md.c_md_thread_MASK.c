
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_thread {int (* run ) (struct md_thread*) ;int flags; int timeout; int wqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct md_thread*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_3)
{
 struct md_thread *VAR_4 = VAR_3;
 FUNC_0(VAR_0);
 while (!FUNC_5()) {






  if (FUNC_6(VAR_2))
   FUNC_2(VAR_2);

  FUNC_9
   (VAR_4->wqueue,
    FUNC_8(VAR_1, &VAR_4->flags)
    || FUNC_5() || FUNC_4(),
    VAR_4->timeout);

  FUNC_1(VAR_1, &VAR_4->flags);
  if (FUNC_4())
   FUNC_3();
  if (!FUNC_5())
   VAR_4->run(VAR_4);
 }

 return 0;
}
