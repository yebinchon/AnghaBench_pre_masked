
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_bo {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_bo*,int) ;
 int FUNC_1 (struct nouveau_bo*,int,int) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, struct nouveau_bo *VAR_1,
          struct nouveau_bo *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0);
 uint32_t VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   VAR_4 = FUNC_0(VAR_1, VAR_5*64 + VAR_6);

   FUNC_1(VAR_2, VAR_5*VAR_3 + VAR_6, (VAR_4 & 0x80000000) >> 16
         | (VAR_4 & 0xf80000) >> 9
         | (VAR_4 & 0xf800) >> 6
         | (VAR_4 & 0xf8) >> 3);
  }
 }
}
