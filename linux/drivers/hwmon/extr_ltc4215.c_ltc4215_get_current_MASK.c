
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4215_data {int* regs; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 struct ltc4215_data* FUNC_0 (struct device*) ;

__attribute__((used)) static unsigned int FUNC_1(struct device *VAR_1)
{
 struct ltc4215_data *VAR_2 = FUNC_0(VAR_1);
 const unsigned int VAR_3 = VAR_2->regs[VAR_0] * 151;


 const unsigned int VAR_4 = VAR_3 / 4;

 return VAR_4;
}
