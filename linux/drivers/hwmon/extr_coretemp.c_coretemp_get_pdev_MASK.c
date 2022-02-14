
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct platform_device** VAR_1 ;

__attribute__((used)) static struct platform_device *FUNC_1(unsigned int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 >= 0 && VAR_3 < VAR_0)
  return VAR_1[VAR_3];
 return ((void*)0);
}
