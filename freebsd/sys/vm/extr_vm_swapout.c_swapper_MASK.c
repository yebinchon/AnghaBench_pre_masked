
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ p_state; int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct proc*) ;
 int VAR_8 ;
 struct proc* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,int ) ;

void
FUNC_8(void)
{
 struct proc *VAR_9;

 for (;;) {
  FUNC_5(&VAR_7);
  VAR_9 = FUNC_3(FUNC_4());
  FUNC_6(&VAR_7);

  if (VAR_9 == ((void*)0)) {
   FUNC_7(&VAR_8, VAR_2, "swapin", VAR_6);
  } else {
   FUNC_0(VAR_9, VAR_0);
   if (VAR_9->p_state == VAR_1 && (VAR_9->p_flag & (VAR_3 |
       VAR_5 | VAR_4)) == 0) {
    FUNC_2(VAR_9);
   }
   FUNC_1(VAR_9);
  }
 }
}
