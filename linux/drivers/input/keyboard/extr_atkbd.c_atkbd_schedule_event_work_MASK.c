
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int event_work; int event_mask; scalar_t__ event_jiffies; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct atkbd *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_1(50);

 if (FUNC_4(VAR_0, VAR_1->event_jiffies + VAR_3))
  VAR_3 = 0;

 VAR_1->event_jiffies = VAR_0;
 FUNC_3(VAR_2, &VAR_1->event_mask);
 FUNC_0();
 FUNC_2(&VAR_1->event_work, VAR_3);
}
