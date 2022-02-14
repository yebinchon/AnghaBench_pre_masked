
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_device {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fw_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fw_device* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

struct fw_device *FUNC_5(dev_t VAR_2)
{
 struct fw_device *VAR_3;

 FUNC_1(&VAR_1);
 VAR_3 = FUNC_3(&VAR_0, FUNC_0(VAR_2));
 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_4(&VAR_1);

 return VAR_3;
}
