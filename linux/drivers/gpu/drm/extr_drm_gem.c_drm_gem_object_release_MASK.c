
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int _resv; scalar_t__ filp; int dma_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct drm_gem_object *VAR_0)
{
 FUNC_0(VAR_0->dma_buf);

 if (VAR_0->filp)
  FUNC_3(VAR_0->filp);

 FUNC_1(&VAR_0->_resv);
 FUNC_2(VAR_0);
}
