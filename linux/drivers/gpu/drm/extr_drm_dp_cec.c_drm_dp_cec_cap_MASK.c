
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct drm_dp_aux *VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = 0;

 if (FUNC_0(VAR_2, VAR_0, &VAR_4) != 1 ||
     !(VAR_4 & VAR_1))
  return 0;
 if (VAR_3)
  *VAR_3 = VAR_4;
 return 1;
}
