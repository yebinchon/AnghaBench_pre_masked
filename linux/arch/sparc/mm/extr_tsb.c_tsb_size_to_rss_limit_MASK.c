
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2 = (VAR_1 / sizeof(struct tsb));

 if (VAR_0 < 0)
  return VAR_2 - (VAR_2 >> -VAR_0);
 else
  return VAR_2 + (VAR_2 >> VAR_0);
}
