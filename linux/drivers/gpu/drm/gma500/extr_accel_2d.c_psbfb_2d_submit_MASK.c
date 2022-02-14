
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_psb_private {int lock_2d; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_psb_private*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct drm_psb_private *VAR_1, uint32_t *VAR_2,
        unsigned VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 unsigned VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_1->lock_2d, VAR_7);
 while (VAR_3 > 0) {
  VAR_6 = (VAR_3 < 0x60) ? VAR_3 : 0x60;
  VAR_3 -= VAR_6;
  VAR_4 = FUNC_2(VAR_1, VAR_6);
  if (VAR_4)
   break;

  VAR_6 <<= 2;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += 4)
   FUNC_1(*VAR_2++, VAR_0 + VAR_5);

  (void)FUNC_0(VAR_0 + VAR_5 - 4);
 }
 FUNC_4(&VAR_1->lock_2d, VAR_7);
 return VAR_4;
}
