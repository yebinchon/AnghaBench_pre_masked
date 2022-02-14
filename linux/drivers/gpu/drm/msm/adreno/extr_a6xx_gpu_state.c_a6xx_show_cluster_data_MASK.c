
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_printer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (struct drm_printer*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(const u32 *VAR_1, int VAR_2, u32 *VAR_3,
  struct drm_printer *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_7;

  FUNC_1(VAR_4, "    - context: %d\n", VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += 2) {
   u32 VAR_8 = FUNC_0(VAR_1, VAR_7);
   u32 VAR_9 = VAR_1[VAR_7];
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_6++, VAR_9++, VAR_10++) {
    if (VAR_3[VAR_6] == 0xdeafbead)
     continue;

    FUNC_1(VAR_4, "      - { offset: 0x%06x, value: 0x%08x }\n",
     VAR_9 << 2, VAR_3[VAR_6]);
   }
  }
 }
}
