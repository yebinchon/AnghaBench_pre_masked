
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int client_opened; int mutex; } ;
struct hid_device {struct steam_device* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct steam_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0)
{
 struct steam_device *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->mutex);
 VAR_1->client_opened = 1;
 FUNC_1(&VAR_1->mutex);

 FUNC_2(VAR_1);

 return 0;
}
