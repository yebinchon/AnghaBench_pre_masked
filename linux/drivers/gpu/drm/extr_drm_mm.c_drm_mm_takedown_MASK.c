
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct drm_mm*) ;
 int FUNC_2 (struct drm_mm*) ;

void FUNC_3(struct drm_mm *VAR_0)
{
 if (FUNC_0(!FUNC_1(VAR_0),
   "Memory manager not clean during takedown.\n"))
  FUNC_2(VAR_0);
}
