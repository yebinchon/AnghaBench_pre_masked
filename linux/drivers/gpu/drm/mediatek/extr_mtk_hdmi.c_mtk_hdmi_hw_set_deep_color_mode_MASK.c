
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {scalar_t__ sys_offset; int sys_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_hdmi *VAR_4)
{
 FUNC_0(VAR_4->sys_regmap, VAR_4->sys_offset + VAR_3,
      VAR_2 | VAR_1,
      VAR_0);
}
