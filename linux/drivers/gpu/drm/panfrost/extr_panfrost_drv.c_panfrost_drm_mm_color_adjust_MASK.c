
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_node {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct drm_mm_node *VAR_4,
      unsigned long VAR_5,
      u64 *VAR_6, u64 *VAR_7)
{

 if (!(VAR_5 & VAR_0)) {
  u64 VAR_8;

  if ((*VAR_6 & VAR_3) == 0)
   (*VAR_6)++;

  if ((*VAR_7 & VAR_3) == 0)
   (*VAR_7)--;

  VAR_8 = FUNC_0(*VAR_6, VAR_2);
  if (VAR_8 - *VAR_6 <= VAR_1)
   *VAR_6 = VAR_8 + 1;

  *VAR_7 = FUNC_1(*VAR_7, FUNC_0(*VAR_6, VAR_2) - 1);
 }
}
