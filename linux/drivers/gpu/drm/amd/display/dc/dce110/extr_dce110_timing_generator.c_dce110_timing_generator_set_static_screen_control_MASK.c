
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int,int,int ,int ) ;

void FUNC_5(
 struct timing_generator *VAR_4,
 uint32_t VAR_5)
{
 struct dce110_timing_generator *VAR_6 = FUNC_1(VAR_4);
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_3);
 VAR_7 = FUNC_2(VAR_4->ctx, VAR_8);

 FUNC_4(VAR_7,
    VAR_5,
    VAR_0,
    VAR_1);

 FUNC_4(VAR_7,
    2,
    VAR_0,
    VAR_2);

 FUNC_3(VAR_4->ctx, VAR_8, VAR_7);
}
