
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int inst; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct timing_generator *VAR_3,
  uint32_t VAR_4)
{
 struct optc *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == 0)
  FUNC_1(VAR_0,
    VAR_1, VAR_3->inst);
 else if (VAR_4 == 1)
  FUNC_1(VAR_0,
    VAR_2, VAR_3->inst);
}
