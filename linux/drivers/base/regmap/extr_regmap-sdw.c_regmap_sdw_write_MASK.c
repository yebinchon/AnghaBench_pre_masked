
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave {int dummy; } ;
struct device {int dummy; } ;


 struct sdw_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sdw_slave*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct device *VAR_3 = VAR_0;
 struct sdw_slave *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_4, VAR_1, VAR_2);
}
