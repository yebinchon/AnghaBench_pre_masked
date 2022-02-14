
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cset {int cs_havecache; int cs_invert; int * cs_classes; int * cs_root; } ;


 struct cset* FUNC_0 (int) ;

struct cset *
FUNC_1(void)
{
 struct cset *VAR_0;

 if ((VAR_0 = FUNC_0(sizeof(*VAR_0))) == ((void*)0))
  return (((void*)0));
 VAR_0->cs_root = ((void*)0);
 VAR_0->cs_classes = ((void*)0);
 VAR_0->cs_havecache = 0;
 VAR_0->cs_invert = 0;
 return (VAR_0);
}
