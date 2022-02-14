
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmap {int cm_havecache; scalar_t__ cm_max; scalar_t__ cm_min; int cm_def; int * cm_root; } ;


 int VAR_0 ;
 struct cmap* FUNC_0 (int) ;

struct cmap *
FUNC_1(void)
{
 struct cmap *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->cm_root = ((void*)0);
 VAR_1->cm_def = VAR_0;
 VAR_1->cm_havecache = 0;
 VAR_1->cm_min = VAR_1->cm_max = 0;
 return (VAR_1);
}
