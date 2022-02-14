
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int const) ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_1(drm_via_private_t *VAR_3, uint32_t const **VAR_4,
    const uint32_t *VAR_5)
{
 register uint32_t VAR_6;
 const uint32_t *VAR_7 = *VAR_4;

 while (VAR_7 < VAR_5) {
  VAR_6 = *VAR_7;
  if ((VAR_6 & VAR_1) != VAR_0)
   break;
  FUNC_0(VAR_3, (VAR_6 & ~VAR_1) << 2, *++VAR_7);
  VAR_7++;
 }
 *VAR_4 = VAR_7;
 return VAR_2;
}
