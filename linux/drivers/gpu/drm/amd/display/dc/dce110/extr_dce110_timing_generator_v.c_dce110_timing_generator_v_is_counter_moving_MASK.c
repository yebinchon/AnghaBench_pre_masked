
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(struct timing_generator *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;

 VAR_5 = FUNC_0(VAR_4->ctx, VAR_3);

 VAR_6 = FUNC_1(
   VAR_5,
   VAR_0,
   VAR_1);

 VAR_8 = FUNC_1(
   VAR_5,
   VAR_0,
   VAR_2);

 VAR_5 = FUNC_0(VAR_4->ctx, VAR_3);

 VAR_7 = FUNC_1(
   VAR_5,
   VAR_0,
   VAR_1);

 VAR_9 = FUNC_1(
   VAR_5,
   VAR_0,
   VAR_2);

 if (VAR_6 == VAR_7 && VAR_8 == VAR_9)
  return 0;
 else
  return 1;
}
