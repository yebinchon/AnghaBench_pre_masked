
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int _flags; } ;


 int VAR_0 ;

bool FUNC_0(struct clockdomain *VAR_1)
{
 bool VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = (VAR_1->_flags & VAR_0) ? 1 : 0;

 return VAR_2;
}
