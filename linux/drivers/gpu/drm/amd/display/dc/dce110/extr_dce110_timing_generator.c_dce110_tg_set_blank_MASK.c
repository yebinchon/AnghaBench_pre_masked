
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int,int ,int ) ;

void FUNC_4(struct timing_generator *VAR_6,
  bool VAR_7)
{
 struct dce110_timing_generator *VAR_8 = FUNC_1(VAR_6);
 uint32_t VAR_9 = 0;

 FUNC_3(
  VAR_9,
  1,
  VAR_3,
  VAR_1);

 FUNC_2(VAR_6->ctx, FUNC_0(VAR_5), VAR_9);
 VAR_9 = 0;

 if (VAR_7) {
  FUNC_3(
   VAR_9,
   1,
   VAR_0,
   VAR_2);

  FUNC_2(VAR_6->ctx, FUNC_0(VAR_4), VAR_9);

 } else
  FUNC_2(VAR_6->ctx, FUNC_0(VAR_4), 0);
}
