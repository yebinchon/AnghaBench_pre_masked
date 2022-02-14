
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct drm_psb_private {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct drm_psb_private*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct drm_psb_private *VAR_4,
     unsigned VAR_5)
{
 uint32_t VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7 = VAR_3 + VAR_1;

 while (VAR_6 < VAR_5) {
  VAR_6 = FUNC_0(VAR_2);
  if (FUNC_2(VAR_3, VAR_7)) {
   FUNC_1(VAR_4);
   return -VAR_0;
  }
 }
 return 0;
}
