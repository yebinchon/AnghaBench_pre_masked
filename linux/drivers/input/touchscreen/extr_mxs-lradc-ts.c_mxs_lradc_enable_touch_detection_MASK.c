
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {scalar_t__ base; int cur_plate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mxs_lradc_ts*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mxs_lradc_ts *VAR_6)
{
 FUNC_0(VAR_6);

 VAR_6->cur_plate = VAR_3;
 FUNC_1(VAR_1 | VAR_2,
        VAR_6->base + VAR_0 + VAR_4);
 FUNC_1(VAR_2,
        VAR_6->base + VAR_0 + VAR_5);
}
