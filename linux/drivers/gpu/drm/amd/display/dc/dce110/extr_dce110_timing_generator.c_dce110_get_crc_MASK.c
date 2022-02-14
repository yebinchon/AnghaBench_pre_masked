
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

bool FUNC_4(struct timing_generator *VAR_10,
      uint32_t *VAR_11, uint32_t *VAR_12, uint32_t *VAR_13)
{
 uint32_t VAR_14 = 0;
 uint32_t VAR_15 = 0;
 uint32_t VAR_16 = 0;
 struct dce110_timing_generator *VAR_17 = FUNC_1(VAR_10);

 VAR_14 = FUNC_0(VAR_9);
 VAR_15 = FUNC_2(VAR_10->ctx, VAR_14);
 VAR_16 = FUNC_3(VAR_15, VAR_5, VAR_6);


 if (!VAR_16)
  return 0;

 VAR_14 = FUNC_0(VAR_8);
 VAR_15 = FUNC_2(VAR_10->ctx, VAR_14);
 *VAR_11 = FUNC_3(VAR_15, VAR_4, VAR_2);
 *VAR_12 = FUNC_3(VAR_15, VAR_4, VAR_1);

 VAR_14 = FUNC_0(VAR_7);
 VAR_15 = FUNC_2(VAR_10->ctx, VAR_14);
 *VAR_13 = FUNC_3(VAR_15, VAR_3, VAR_0);

 return 1;
}
