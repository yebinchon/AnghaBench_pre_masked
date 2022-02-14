
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, &VAR_0);

 if (VAR_2)
  FUNC_0("failed to create device file for core_id\n");

 return VAR_2;
}
