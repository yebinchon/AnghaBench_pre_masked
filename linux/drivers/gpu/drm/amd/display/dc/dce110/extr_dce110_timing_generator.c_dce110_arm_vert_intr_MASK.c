
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct timing_generator {int ctx; TYPE_1__* funcs; } ;
struct dce110_timing_generator {int dummy; } ;
struct TYPE_2__ {int (* get_scanoutpos ) (struct timing_generator*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (struct timing_generator*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

bool FUNC_5(struct timing_generator *VAR_4, uint8_t VAR_5)
{
 struct dce110_timing_generator *VAR_6 = FUNC_1(VAR_4);
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10, VAR_11;

 VAR_4->funcs->get_scanoutpos(
   VAR_4,
   &VAR_7,
   &VAR_8,
   &VAR_10,
   &VAR_11);

 if (VAR_7 == 0 || VAR_8 == 0)
  return 0;

 FUNC_3(
  VAR_9,
  VAR_7,
  VAR_2,
  VAR_1);


 FUNC_3(
  VAR_9,
  VAR_7 + VAR_5,
  VAR_2,
  VAR_0);

 FUNC_2(VAR_4->ctx, FUNC_0(VAR_3), VAR_9);

 return 1;
}
