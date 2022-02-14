
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_dsi {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtk_dsi*,int ) ;
 int FUNC_2 (struct mtk_dsi*) ;
 int FUNC_3 (struct mtk_dsi*,int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct mtk_dsi *VAR_1, u8 VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 if (!FUNC_3(VAR_1, VAR_2, VAR_3)) {
  FUNC_0("failed to switch cmd mode\n");
  return -VAR_0;
 } else {
  return 0;
 }
}
