
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hqvdp {int clk; } ;
struct drm_display_mode {int htotal; int clock; } ;


 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(struct sti_hqvdp *VAR_0,
           struct drm_display_mode *VAR_1,
           int VAR_2, int VAR_3,
           int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7;

 VAR_6 = VAR_1->htotal * (FUNC_1(VAR_0->clk) / 1000000);
 VAR_6 /= FUNC_2(VAR_2, VAR_4) * VAR_1->clock / 1000;

 VAR_7 = FUNC_0(VAR_3, VAR_5);

 return (VAR_7 <= VAR_6) ? 1 : 0;
}
