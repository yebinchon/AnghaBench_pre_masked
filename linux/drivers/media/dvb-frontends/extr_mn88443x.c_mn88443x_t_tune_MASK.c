
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct mn88443x_priv {struct regmap* regmap_t; } ;
struct dtv_frontend_properties {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mn88443x_priv *VAR_8,
       struct dtv_frontend_properties *VAR_9)
{
 struct regmap *VAR_10 = VAR_8->regmap_t;
 u32 VAR_11, VAR_12;

 VAR_11 = VAR_7 | VAR_2 | VAR_5;
 VAR_12 = VAR_6 | VAR_3 | VAR_4;
 FUNC_0(VAR_10, VAR_1, VAR_11, VAR_12);

 FUNC_1(VAR_10, VAR_0, 0);
}
