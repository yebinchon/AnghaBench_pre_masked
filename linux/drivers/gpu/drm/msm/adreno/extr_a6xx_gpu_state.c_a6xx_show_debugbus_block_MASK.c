
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_printer {int dummy; } ;
struct a6xx_debugbus_block {int count; int name; } ;


 int FUNC_0 (struct drm_printer*,char*,int) ;
 int FUNC_1 (struct drm_printer*,int,int *) ;
 int FUNC_2 (struct drm_printer*,char*,int ) ;

__attribute__((used)) static void FUNC_3(const struct a6xx_debugbus_block *VAR_0,
  u32 *VAR_1, struct drm_printer *VAR_2)
{
 if (VAR_0) {
  FUNC_2(VAR_2, "  - debugbus-block: ", VAR_0->name);





  FUNC_0(VAR_2, "    count: %d\n", VAR_0->count << 1);

  FUNC_1(VAR_2, VAR_0->count << 3, VAR_1);
 }
}
