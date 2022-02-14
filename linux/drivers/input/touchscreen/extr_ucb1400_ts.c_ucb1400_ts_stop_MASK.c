
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int stopped; int ac97; int irq; int ts_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ucb1400_ts*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ucb1400_ts *VAR_1)
{

 VAR_1->stopped = 1;
 FUNC_1();
 FUNC_4(&VAR_1->ts_wait);
 FUNC_0(VAR_1->irq);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->ac97, VAR_0, 0);
}
