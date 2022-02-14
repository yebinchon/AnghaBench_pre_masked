
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct bcache_device* private_data; } ;
struct bcache_device {int cl; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct bcache_device *VAR_2 = VAR_0->private_data;

 FUNC_0(&VAR_2->cl);
}
