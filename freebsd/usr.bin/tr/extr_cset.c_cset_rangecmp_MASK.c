
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct csnode {scalar_t__ csn_min; scalar_t__ csn_max; } ;



__attribute__((used)) static __inline int
FUNC_0(struct csnode *VAR_0, wchar_t VAR_1)
{

 if (VAR_1 < VAR_0->csn_min)
  return (-1);
 if (VAR_1 > VAR_0->csn_max)
  return (1);
 return (0);
}
