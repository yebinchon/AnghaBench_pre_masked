
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {scalar_t__ base; int cur_plate; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct mxs_lradc_ts*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mxs_lradc_ts *VAR_6)
{
 FUNC_5(VAR_6);
 VAR_6->cur_plate = VAR_2;




 FUNC_6(0, VAR_6->base + FUNC_0(VAR_4));
 FUNC_6(FUNC_1(VAR_4) |
        FUNC_1(VAR_5),
        VAR_6->base + VAR_0 + VAR_3);
 FUNC_6(FUNC_4(1 << VAR_4) |
        VAR_1 | FUNC_3(10),
        VAR_6->base + FUNC_2(2));
}
