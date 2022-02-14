
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct drbd_device* private_data; } ;
struct drbd_device {int open_cnt; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct drbd_device *VAR_3 = VAR_1->private_data;
 FUNC_0(&VAR_0);
 VAR_3->open_cnt--;
 FUNC_1(&VAR_0);
}
