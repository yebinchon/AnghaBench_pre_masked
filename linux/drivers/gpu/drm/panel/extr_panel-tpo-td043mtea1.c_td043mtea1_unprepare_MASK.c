
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td043mtea1_panel {int spi_suspended; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (struct td043mtea1_panel*) ;
 struct td043mtea1_panel* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct td043mtea1_panel *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->spi_suspended)
  FUNC_0(VAR_1);

 return 0;
}
