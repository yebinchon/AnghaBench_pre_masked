
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct drbd_connection {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_connection*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drbd_connection *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->data.mutex);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->data.mutex);

 return VAR_2;
}
