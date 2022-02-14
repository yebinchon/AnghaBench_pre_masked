
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int irq; int stopped; int ts_idev; int ts_wait; int ac97; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ucb1400_ts*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ucb1400_ts*) ;
 int FUNC_7 (struct ucb1400_ts*) ;
 int FUNC_8 (struct ucb1400_ts*) ;
 unsigned int FUNC_9 (struct ucb1400_ts*) ;
 unsigned int FUNC_10 (struct ucb1400_ts*) ;
 unsigned int FUNC_11 (struct ucb1400_ts*) ;
 int FUNC_12 (int ,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_3, void *VAR_4)
{
 struct ucb1400_ts *VAR_5 = VAR_4;
 unsigned int VAR_6, VAR_7, VAR_8;
 bool VAR_9;

 if (FUNC_13(VAR_3 != VAR_5->irq))
  return VAR_1;

 FUNC_4(VAR_5);


 FUNC_1(VAR_2);

 while (!VAR_5->stopped && !(VAR_9 = FUNC_8(VAR_5))) {

  FUNC_3(VAR_5->ac97);
  VAR_6 = FUNC_10(VAR_5);
  VAR_7 = FUNC_11(VAR_5);
  VAR_8 = FUNC_9(VAR_5);
  FUNC_2(VAR_5->ac97);

  FUNC_12(VAR_5->ts_idev, VAR_8, VAR_6, VAR_7);

  FUNC_14(VAR_5->ts_wait, VAR_5->stopped,
       FUNC_0(VAR_2));
 }

 FUNC_5(VAR_5->ts_idev);

 if (!VAR_5->stopped) {

  FUNC_7(VAR_5);
  FUNC_6(VAR_5);
 }

 return VAR_0;
}
