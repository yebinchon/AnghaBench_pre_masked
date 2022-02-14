
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int connected; int client_opened; int mutex; int lock; } ;
struct hid_device {struct steam_device* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct steam_device*) ;
 int FUNC_5 (struct steam_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_1)
{
 struct steam_device *VAR_2 = VAR_1->driver_data;

 unsigned long VAR_3;
 bool VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_4 = VAR_2->connected;
 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_0(&VAR_2->mutex);
 VAR_2->client_opened = 0;
 if (VAR_4)
  FUNC_5(VAR_2, VAR_0);
 FUNC_1(&VAR_2->mutex);

 if (VAR_4)
  FUNC_4(VAR_2);
}
