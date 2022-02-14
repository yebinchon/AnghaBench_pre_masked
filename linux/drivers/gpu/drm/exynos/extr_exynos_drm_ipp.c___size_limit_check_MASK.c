
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_exynos_ipp_limit_val {unsigned int min; unsigned int max; int align; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static inline bool FUNC_2(unsigned int VAR_0,
     struct drm_exynos_ipp_limit_val *VAR_1)
{
 if ((VAR_1->min && VAR_0 < VAR_1->min) || (VAR_1->max && VAR_0 > VAR_1->max)) {
  FUNC_0("Value %d exceeds HW limits (min %d, max %d)\n",
     VAR_0, VAR_1->min, VAR_1->max);
  return 0;
 }
 return FUNC_1(VAR_0, VAR_1->align);
}
