
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int kref; } ;


 int FUNC_0 (struct drbd_connection*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct drbd_connection *VAR_2 = (struct drbd_connection *)VAR_1;

 FUNC_0(VAR_2);

 FUNC_1(&VAR_2->kref, VAR_0);
 return 0;
}
