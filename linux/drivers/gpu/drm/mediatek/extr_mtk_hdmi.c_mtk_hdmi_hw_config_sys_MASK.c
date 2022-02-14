
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {scalar_t__ sys_offset; int sys_regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_3)
{
 FUNC_0(VAR_3->sys_regmap, VAR_3->sys_offset + VAR_1,
      VAR_0 | VAR_2, 0);
 FUNC_1(2000, 4000);
 FUNC_0(VAR_3->sys_regmap, VAR_3->sys_offset + VAR_1,
      VAR_0 | VAR_2, VAR_0);
}
