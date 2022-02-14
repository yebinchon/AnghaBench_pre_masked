
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_disk; } ;
struct kobject {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 struct kobject* FUNC_1 (int ) ;
 int FUNC_2 (struct loop_device**,int) ;
 int VAR_0 ;
 int FUNC_3 (struct loop_device**,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct kobject *FUNC_6(dev_t VAR_2, int *VAR_3, void *VAR_4)
{
 struct loop_device *VAR_5;
 struct kobject *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_0);
 VAR_7 = FUNC_3(&VAR_5, FUNC_0(VAR_2) >> VAR_1);
 if (VAR_7 < 0)
  VAR_7 = FUNC_2(&VAR_5, FUNC_0(VAR_2) >> VAR_1);
 if (VAR_7 < 0)
  VAR_6 = ((void*)0);
 else
  VAR_6 = FUNC_1(VAR_5->lo_disk);
 FUNC_5(&VAR_0);

 *VAR_3 = 0;
 return VAR_6;
}
