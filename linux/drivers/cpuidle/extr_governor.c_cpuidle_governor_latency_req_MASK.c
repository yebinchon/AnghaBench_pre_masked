
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

int FUNC_3(unsigned int VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0);
 struct device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = FUNC_0(VAR_3);

 return VAR_4 < VAR_2 ? VAR_4 : VAR_2;
}
