
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_ts_priv {int tsc_clk; int regmap; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct iproc_ts_priv* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_5)
{
 u32 VAR_6;
 struct iproc_ts_priv *VAR_7 = FUNC_1(VAR_5);






 VAR_6 = VAR_4 | VAR_3;
 FUNC_2(VAR_7->regmap, VAR_0, VAR_6, 0);


 VAR_6 = VAR_2;
 FUNC_2(VAR_7->regmap, VAR_1, VAR_6, VAR_6);

 FUNC_0(VAR_7->tsc_clk);
}
