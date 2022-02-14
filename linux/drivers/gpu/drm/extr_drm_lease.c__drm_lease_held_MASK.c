
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int master; } ;


 int FUNC_0 (int ,int) ;

bool FUNC_1(struct drm_file *VAR_0, int VAR_1)
{
 if (!VAR_0 || !VAR_0->master)
  return 1;

 return FUNC_0(VAR_0->master, VAR_1);
}
