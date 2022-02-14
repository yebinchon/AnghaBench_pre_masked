
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int compat; } ;
typedef enum vpu_compatible { ____Placeholder_vpu_compatible } vpu_compatible ;



__attribute__((used)) static inline int FUNC_0(struct meson_drm *VAR_0,
       enum vpu_compatible VAR_1)
{
 return VAR_0->compat == VAR_1;
}
