
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgroup {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 struct xgroup* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static struct xgroup *
FUNC_0(gid_t VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_0[VAR_3].gr_gid == VAR_2)
   return (&VAR_0[VAR_3]);
 return (((void*)0));
}
