
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int mutex; int client_opened; } ;
struct input_dev {int dummy; } ;


 struct steam_device* FUNC_0 (struct input_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct steam_device*,int) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_1)
{
 struct steam_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->mutex);
 if (!VAR_2->client_opened && VAR_0)
  FUNC_3(VAR_2, 1);
 FUNC_2(&VAR_2->mutex);
}
