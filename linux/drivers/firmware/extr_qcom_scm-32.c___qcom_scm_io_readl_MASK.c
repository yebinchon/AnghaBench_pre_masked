
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct device *VAR_2, phys_addr_t VAR_3,
   unsigned int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_3);
 if (VAR_5 >= 0)
  *VAR_4 = VAR_5;

 return VAR_5 < 0 ? VAR_5 : 0;
}
