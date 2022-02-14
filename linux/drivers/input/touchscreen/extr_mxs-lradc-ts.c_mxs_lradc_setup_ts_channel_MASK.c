
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {scalar_t__ base; scalar_t__ settling_delay; scalar_t__ over_sample_delay; scalar_t__ over_sample_cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mxs_lradc_ts *VAR_5, unsigned int VAR_6)
{
 FUNC_9(VAR_0 |
        FUNC_2(VAR_5->over_sample_cnt - 1),
        VAR_5->base + FUNC_1(VAR_6));





 FUNC_9(VAR_1,
        VAR_5->base + FUNC_1(VAR_6) + VAR_4);
 FUNC_9(FUNC_7(1 << VAR_6) | FUNC_8(0) |
        FUNC_6(VAR_5->over_sample_cnt - 1) |
        FUNC_5(VAR_5->over_sample_delay - 1),
        VAR_5->base + FUNC_4(3));

 FUNC_9(FUNC_3(VAR_6),
        VAR_5->base + VAR_2 + VAR_4);







 FUNC_9(FUNC_7(0) | FUNC_8(FUNC_0(3)) |
        VAR_3 | FUNC_5(VAR_5->settling_delay),
        VAR_5->base + FUNC_4(2));
}
