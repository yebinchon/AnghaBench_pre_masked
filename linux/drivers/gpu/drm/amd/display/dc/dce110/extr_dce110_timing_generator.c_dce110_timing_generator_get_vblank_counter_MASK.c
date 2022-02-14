
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

uint32_t FUNC_4(struct timing_generator *VAR_3)
{
 struct dce110_timing_generator *VAR_4 = FUNC_1(VAR_3);
 uint32_t VAR_5 = FUNC_0(VAR_2);
 uint32_t VAR_6 = FUNC_2(VAR_3->ctx, VAR_5);
 uint32_t VAR_7 = FUNC_3(
   VAR_6, VAR_1, VAR_0);

 return VAR_7;
}
