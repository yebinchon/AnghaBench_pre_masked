
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
 int FUNC_1 (int ,int ,int*) ;

bool FUNC_2(struct timing_generator *VAR_2)
{
 bool VAR_3 = 0;
 uint32_t VAR_4 = 0;
 struct optc *VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_1,
  VAR_0, &VAR_4);
 if (VAR_4 == 1)
  VAR_3 = 1;
 else
  VAR_3 = 0;

 return VAR_3;
}
