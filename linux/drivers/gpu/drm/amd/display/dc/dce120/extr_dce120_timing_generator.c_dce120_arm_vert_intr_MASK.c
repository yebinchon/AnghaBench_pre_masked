
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct timing_generator {TYPE_1__* funcs; } ;
struct dce110_timing_generator {int dummy; } ;
struct TYPE_2__ {int (* get_scanoutpos ) (struct timing_generator*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct timing_generator*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_3(
  struct timing_generator *VAR_3,
  uint8_t VAR_4)
{
 struct dce110_timing_generator *VAR_5 = FUNC_1(VAR_3);
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_3->funcs->get_scanoutpos(
    VAR_3,
    &VAR_6,
    &VAR_7,
    &VAR_8,
    &VAR_9);

 if (VAR_6 == 0 || VAR_7 == 0)
  return 0;

 FUNC_0(
   VAR_0,
   VAR_2, VAR_6,
   VAR_1, VAR_6 + VAR_4);

 return 1;
}
