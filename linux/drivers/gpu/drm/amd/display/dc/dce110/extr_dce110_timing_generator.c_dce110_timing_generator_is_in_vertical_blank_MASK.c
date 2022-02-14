
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
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_4(
  struct timing_generator *VAR_3)
{
 uint32_t VAR_4 = 0;
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;
 struct dce110_timing_generator *VAR_7 = FUNC_1(VAR_3);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_3->ctx, VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_0, VAR_1);
 return VAR_6 == 1;
}
