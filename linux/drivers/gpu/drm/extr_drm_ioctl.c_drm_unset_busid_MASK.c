
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {scalar_t__ unique_len; int * unique; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_0,
  struct drm_master *VAR_1)
{
 FUNC_0(VAR_1->unique);
 VAR_1->unique = ((void*)0);
 VAR_1->unique_len = 0;
}
