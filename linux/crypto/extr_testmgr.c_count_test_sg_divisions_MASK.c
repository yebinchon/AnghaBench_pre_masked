
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_sg_division {scalar_t__ proportion_of_total; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct test_sg_division *VAR_1)
{
 unsigned int VAR_2 = VAR_0;
 unsigned int VAR_3 = 0;

 do {
  VAR_2 -= VAR_1[VAR_3++].proportion_of_total;
 } while (VAR_2);

 return VAR_3;
}
