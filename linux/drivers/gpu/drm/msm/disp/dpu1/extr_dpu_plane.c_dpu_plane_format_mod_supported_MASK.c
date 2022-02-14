
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct drm_plane *VAR_3,
  uint32_t VAR_4, uint64_t VAR_5)
{
 if (VAR_5 == VAR_0)
  return 1;

 if (VAR_5 == VAR_1) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   if (VAR_4 == VAR_2[VAR_6])
    return 1;
  }
 }

 return 0;
}
