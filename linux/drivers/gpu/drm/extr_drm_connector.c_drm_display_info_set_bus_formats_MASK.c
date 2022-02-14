
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_info {unsigned int num_bus_formats; int * bus_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int,int ) ;

int FUNC_2(struct drm_display_info *VAR_3,
         const u32 *VAR_4,
         unsigned int VAR_5)
{
 u32 *VAR_6 = ((void*)0);

 if (!VAR_4 && VAR_5)
  return -VAR_0;

 if (VAR_4 && VAR_5) {
  VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_4) * VAR_5,
          VAR_2);
  if (!VAR_6)
   return -VAR_1;
 }

 FUNC_0(VAR_3->bus_formats);
 VAR_3->bus_formats = VAR_6;
 VAR_3->num_bus_formats = VAR_5;

 return 0;
}
