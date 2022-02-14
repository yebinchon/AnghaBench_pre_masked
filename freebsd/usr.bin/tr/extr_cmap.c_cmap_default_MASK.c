
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
struct cmap {int cm_havecache; int cm_def; } ;



wint_t
FUNC_0(struct cmap *VAR_0, wint_t VAR_1)
{
 wint_t VAR_2;

 VAR_2 = VAR_0->cm_def;
 VAR_0->cm_def = VAR_1;
 VAR_0->cm_havecache = 0;
 return (VAR_2);
}
