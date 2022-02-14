
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_4(
 struct timing_generator *VAR_6)
{
 struct dce110_timing_generator *VAR_7 = FUNC_1(VAR_6);
 uint32_t VAR_8 = FUNC_2(VAR_6->ctx,
   FUNC_0(VAR_4));
 uint32_t VAR_9 = FUNC_2(VAR_6->ctx,
   FUNC_0(VAR_5));
 bool VAR_10 = FUNC_3(VAR_8,
      VAR_0,
      VAR_1) != 0;
 bool VAR_11 = FUNC_3(VAR_9,
          VAR_3,
          VAR_2) != 0;

 return (VAR_10 || VAR_11);
}
