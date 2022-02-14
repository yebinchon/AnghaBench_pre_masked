
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int dev; int (* tsc200x_cmd ) (int ,int ) ;int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tsc200x *VAR_7)
{
 FUNC_0(VAR_7->regmap, VAR_4, VAR_0);
 FUNC_0(VAR_7->regmap, VAR_5, VAR_1);
 FUNC_0(VAR_7->regmap, VAR_6, VAR_2);
 VAR_7->tsc200x_cmd(VAR_7->dev, VAR_3);
}
