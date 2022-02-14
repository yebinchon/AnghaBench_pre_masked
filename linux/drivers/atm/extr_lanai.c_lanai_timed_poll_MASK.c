
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lanai_dev {int conf1; int timer; int backlog_vccs; int servicelock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lanai_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lanai_dev*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lanai_dev* VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct lanai_dev*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct lanai_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_7)
{
 struct lanai_dev *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_5);

 unsigned long VAR_9;




 FUNC_3(VAR_9);

 if (FUNC_8(&VAR_8->servicelock)) {
  FUNC_7(VAR_8);
  FUNC_9(&VAR_8->servicelock);
 }


 FUNC_5(&VAR_6);
 FUNC_10(VAR_8, VAR_8->backlog_vccs, VAR_2);
 FUNC_6(&VAR_6);
 FUNC_2(VAR_9);

 FUNC_1(VAR_8);

 FUNC_4(&VAR_8->timer, VAR_3 + VAR_1);
}
