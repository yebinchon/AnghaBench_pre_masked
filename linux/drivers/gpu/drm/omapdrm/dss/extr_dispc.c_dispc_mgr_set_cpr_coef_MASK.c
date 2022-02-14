
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dss_cpr_coefs {int bb; int bg; int br; int gb; int gg; int gr; int rb; int rg; int rr; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct dispc_device*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dispc_device *VAR_0,
       enum omap_channel VAR_1,
       const struct omap_dss_cpr_coefs *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;

 if (!FUNC_5(VAR_1))
  return;

 VAR_3 = FUNC_3(VAR_2->rr, 31, 22) | FUNC_3(VAR_2->rg, 20, 11) |
  FUNC_3(VAR_2->rb, 9, 0);
 VAR_4 = FUNC_3(VAR_2->gr, 31, 22) | FUNC_3(VAR_2->gg, 20, 11) |
  FUNC_3(VAR_2->gb, 9, 0);
 VAR_5 = FUNC_3(VAR_2->br, 31, 22) | FUNC_3(VAR_2->bg, 20, 11) |
  FUNC_3(VAR_2->bb, 9, 0);

 FUNC_4(VAR_0, FUNC_2(VAR_1), VAR_3);
 FUNC_4(VAR_0, FUNC_1(VAR_1), VAR_4);
 FUNC_4(VAR_0, FUNC_0(VAR_1), VAR_5);
}
