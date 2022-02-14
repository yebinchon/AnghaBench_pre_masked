
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {struct r5dev* dev; } ;
struct r5dev {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct stripe_head *VAR_2, int VAR_3)
{
 struct r5dev *VAR_4;

 if (VAR_3 < 0)
  return;

 VAR_4 = &VAR_2->dev[VAR_3];
 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_0(!FUNC_3(VAR_1, &VAR_4->flags));
 FUNC_1(VAR_1, &VAR_4->flags);
}
