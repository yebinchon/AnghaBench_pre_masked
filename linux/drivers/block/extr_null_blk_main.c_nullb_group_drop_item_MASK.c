
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int power; int nullb; int flags; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_item*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct nullb_device* FUNC_5 (struct config_item*) ;

__attribute__((used)) static void
FUNC_6(struct config_group *VAR_2, struct config_item *VAR_3)
{
 struct nullb_device *VAR_4 = FUNC_5(VAR_3);

 if (FUNC_4(VAR_0, &VAR_4->flags)) {
  FUNC_1(&VAR_1);
  VAR_4->power = 0;
  FUNC_3(VAR_4->nullb);
  FUNC_2(&VAR_1);
 }

 FUNC_0(VAR_3);
}
