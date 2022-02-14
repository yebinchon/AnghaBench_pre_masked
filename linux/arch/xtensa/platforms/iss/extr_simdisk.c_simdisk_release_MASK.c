
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simdisk {int lock; int users; } ;
struct gendisk {struct simdisk* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct simdisk *VAR_2 = VAR_0->private_data;
 FUNC_0(&VAR_2->lock);
 --VAR_2->users;
 FUNC_1(&VAR_2->lock);
}
