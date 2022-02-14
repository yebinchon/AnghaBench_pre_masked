
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {scalar_t__ be_encoding; scalar_t__ be_numeric; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct ber_element *VAR_1, int *VAR_2)
{
 if (VAR_1->be_encoding != VAR_0)
  return -1;

 *VAR_2 = !(VAR_1->be_numeric == 0);
 return 0;
}
