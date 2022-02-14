
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct brd_device {int brd_disk; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct brd_device* FUNC_1 (int,int*) ;
 struct kobject* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct kobject *FUNC_5(dev_t VAR_2, int *VAR_3, void *VAR_4)
{
 struct brd_device *VAR_5;
 struct kobject *VAR_6;
 bool VAR_7;

 FUNC_3(&VAR_0);
 VAR_5 = FUNC_1(FUNC_0(VAR_2) / VAR_1, &VAR_7);
 VAR_6 = VAR_5 ? FUNC_2(VAR_5->brd_disk) : ((void*)0);
 FUNC_4(&VAR_0);

 if (VAR_7)
  *VAR_3 = 0;

 return VAR_6;
}
