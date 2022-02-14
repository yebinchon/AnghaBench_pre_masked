
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_dpi {TYPE_1__* conf; } ;
struct TYPE_2__ {int reg_h_fre_con; scalar_t__ edge_sel_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_dpi*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_dpi *VAR_1)
{
 if (VAR_1->conf->edge_sel_en)
  FUNC_0(VAR_1, VAR_1->conf->reg_h_fre_con, 0, VAR_0);
}
