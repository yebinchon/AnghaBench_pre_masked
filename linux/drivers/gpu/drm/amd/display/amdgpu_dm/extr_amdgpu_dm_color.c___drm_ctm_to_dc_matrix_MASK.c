
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {unsigned long long value; } ;
struct drm_color_ctm {unsigned long long* matrix; } ;
typedef unsigned long long int64_t ;


 struct fixed31_32 VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct drm_color_ctm *VAR_1,
       struct fixed31_32 *VAR_2)
{
 int64_t VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 12; VAR_4++) {

  if (VAR_4 % 4 == 3) {
   VAR_2[VAR_4] = VAR_0;
   continue;
  }


  VAR_3 = VAR_1->matrix[VAR_4 - (VAR_4 / 4)];

  if (VAR_3 & (1ULL << 63))
   VAR_3 = -(VAR_3 & ~(1ULL << 63));

  VAR_2[VAR_4].value = VAR_3;
 }
}
