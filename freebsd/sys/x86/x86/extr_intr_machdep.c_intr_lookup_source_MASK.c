
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsrc {int dummy; } ;


 struct intsrc** VAR_0 ;
 int VAR_1 ;

struct intsrc *
FUNC_0(int VAR_2)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_1)
  return (((void*)0));
 return (VAR_0[VAR_2]);
}
