
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ,scalar_t__*,int ,scalar_t__*) ;

bool FUNC_3(struct timing_generator *VAR_8,
  uint32_t *VAR_9,
  uint32_t *VAR_10)
{
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 struct optc *VAR_16 = FUNC_0(VAR_8);


 FUNC_1(VAR_0,
   VAR_4, &VAR_11);

 if (VAR_11 == 0)
  return 0;

 FUNC_2(VAR_7,
   VAR_6, &VAR_12,
   VAR_5, &VAR_13);

 FUNC_2(VAR_3,
   VAR_2, &VAR_14,
   VAR_1, &VAR_15);

 *VAR_9 = VAR_12 - VAR_13;
 *VAR_10 = VAR_14 - VAR_15;
 return 1;
}
