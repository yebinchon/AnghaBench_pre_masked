
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {scalar_t__ sys_offset; int sys_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mtk_hdmi*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_5)
{
 FUNC_1(VAR_5->sys_regmap, VAR_5->sys_offset + VAR_4,
      VAR_3, VAR_3);
 FUNC_1(VAR_5->sys_regmap, VAR_5->sys_offset + VAR_4,
      VAR_3, 0);
 FUNC_0(VAR_5, VAR_2, VAR_1);
 FUNC_1(VAR_5->sys_regmap, VAR_5->sys_offset + VAR_4,
      VAR_0, VAR_0);
}
