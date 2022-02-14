
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm*,unsigned int const,unsigned int const) ;
 int FUNC_1 (struct drm_mm*) ;
 int FUNC_2 (struct drm_mm*,unsigned int const,unsigned int const,unsigned int const) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct drm_mm VAR_1;
 const unsigned int VAR_2 = 1024;
 const unsigned int VAR_3 = 2048;
 const unsigned int VAR_4 = VAR_3 - VAR_2;

 FUNC_0(&VAR_1, VAR_2, VAR_4);

 if (!FUNC_2(&VAR_1, 1, 0, VAR_2))
  return -VAR_0;

 if (!FUNC_2(&VAR_1, VAR_4,
      VAR_2 - VAR_4/2, VAR_2 + (VAR_4+1)/2))
  return -VAR_0;

 if (!FUNC_2(&VAR_1, VAR_4,
      VAR_3 - (VAR_4+1)/2, VAR_3 + VAR_4/2))
  return -VAR_0;

 if (!FUNC_2(&VAR_1, 1, VAR_3, VAR_3 + VAR_4))
  return -VAR_0;

 FUNC_1(&VAR_1);
 return 0;
}
