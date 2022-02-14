
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*,int ,int*,int ,int*) ;

void FUNC_2(struct timing_generator *VAR_4,
  uint32_t *VAR_5,
  uint32_t *VAR_6,
  uint32_t *VAR_7)
{
 uint32_t VAR_8;
 struct optc *VAR_9 = FUNC_0(VAR_4);

 FUNC_1(VAR_0,
   VAR_1, &VAR_8,
   VAR_2, VAR_6,
   VAR_3, VAR_7);

 if (VAR_8 == 1)
  *VAR_5 = 2;
 else
  *VAR_5 = 1;
}
