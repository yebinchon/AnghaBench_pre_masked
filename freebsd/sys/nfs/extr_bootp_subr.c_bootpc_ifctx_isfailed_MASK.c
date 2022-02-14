
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootpc_ifcontext {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline int
FUNC_0(struct bootpc_ifcontext *VAR_2)
{

 if (VAR_2->state == VAR_0 ||
     VAR_2->state == VAR_1)
  return 1;
 return 0;
}
