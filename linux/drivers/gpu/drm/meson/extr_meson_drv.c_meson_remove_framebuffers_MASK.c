
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apertures_struct {TYPE_1__* ranges; } ;
struct TYPE_2__ {int size; scalar_t__ base; } ;


 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*,char*,int) ;
 int FUNC_2 (struct apertures_struct*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct apertures_struct *VAR_0;

 VAR_0 = FUNC_0(1);
 if (!VAR_0)
  return;


 VAR_0->ranges[0].base = 0;
 VAR_0->ranges[0].size = ~0;

 FUNC_1(VAR_0, "meson-drm-fb",
            0);
 FUNC_2(VAR_0);
}
