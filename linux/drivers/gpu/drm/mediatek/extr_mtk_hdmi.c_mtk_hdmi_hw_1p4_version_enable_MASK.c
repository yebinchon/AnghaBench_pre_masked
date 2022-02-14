
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {scalar_t__ sys_offset; int sys_regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_hdmi *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->sys_regmap, VAR_2->sys_offset + VAR_1,
      VAR_0, VAR_3 ? 0 : VAR_0);
}
