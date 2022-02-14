
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {int lut_safe; int cg; } ;
struct dfll_rate_req {int lut_index; int mult_bits; int scale_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct tegra_dfll*) ;
 int FUNC_2 (struct tegra_dfll*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct tegra_dfll *VAR_9,
           struct dfll_rate_req *VAR_10)
{
 u32 VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 128; ;

 VAR_12 = (VAR_10->lut_index - VAR_9->lut_safe) * VAR_13 / VAR_9->cg;
 VAR_12 = FUNC_0(VAR_12, VAR_8, VAR_7);

 VAR_11 |= VAR_10->mult_bits << VAR_5;
 VAR_11 |= VAR_10->scale_bits << VAR_6;
 VAR_11 |= ((u32)VAR_12 << VAR_3) &
  VAR_2;
 VAR_11 |= VAR_4 | VAR_1;

 FUNC_2(VAR_9, VAR_11, VAR_0);
 FUNC_1(VAR_9);
}
