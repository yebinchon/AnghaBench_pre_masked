
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_lradc_ts {unsigned int over_sample_cnt; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct mxs_lradc_ts *VAR_3,
        unsigned int VAR_4)
{
 u32 VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_3->base + FUNC_0(VAR_4));
 if (VAR_5 & VAR_0)
  VAR_6 = VAR_3->over_sample_cnt;
 else
  VAR_6 = 1;

 VAR_7 = (VAR_5 & VAR_1) >> VAR_2;
 return VAR_7 / VAR_6;
}
