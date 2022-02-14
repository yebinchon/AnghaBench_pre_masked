
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (struct drm_printer*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(const u32 *VAR_0, u32 *VAR_1, size_t VAR_2,
  struct drm_printer *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (!VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 2) {
  u32 VAR_6 = FUNC_0(VAR_0, VAR_4);
  u32 VAR_7 = VAR_0[VAR_4];
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_5++, VAR_7++, VAR_8++) {
   if (VAR_1[VAR_5] == 0xdeafbead)
    continue;

   FUNC_1(VAR_3, "  - { offset: 0x%06x, value: 0x%08x }\n",
    VAR_7 << 2, VAR_1[VAR_5]);
  }
 }
}
