
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_dsi {int dummy; } ;
struct mipi_dsi_msg {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_1 (struct mtk_dsi*,int ) ;
 int FUNC_2 (struct mtk_dsi*) ;
 int FUNC_3 (struct mtk_dsi*) ;
 int FUNC_4 (struct mtk_dsi*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct mtk_dsi *VAR_1,
         const struct mipi_dsi_msg *VAR_2, u8 VAR_3)
{
 FUNC_3(VAR_1);
 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 if (!FUNC_4(VAR_1, VAR_3, 2000))
  return -VAR_0;
 else
  return 0;
}
