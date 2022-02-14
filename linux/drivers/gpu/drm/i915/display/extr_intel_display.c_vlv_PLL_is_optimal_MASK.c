
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct dpll {scalar_t__ p; scalar_t__ dot; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long long FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (unsigned long long,int) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_5(struct drm_device *VAR_0, int VAR_1,
          const struct dpll *VAR_2,
          const struct dpll *VAR_3,
          unsigned int VAR_4,
          unsigned int *VAR_5)
{




 if (FUNC_0(FUNC_4(VAR_0))) {
  *VAR_5 = 0;

  return VAR_2->p > VAR_3->p;
 }

 if (FUNC_1(!VAR_1))
  return 0;

 *VAR_5 = FUNC_3(1000000ULL *
    FUNC_2(VAR_1 - VAR_2->dot),
        VAR_1);





 if (*VAR_5 < 100 && VAR_2->p > VAR_3->p) {
  *VAR_5 = 0;

  return 1;
 }

 return *VAR_5 + 10 < VAR_4;
}
