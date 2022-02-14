
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubbub {int dummy; } ;
struct dcn20_hubbub {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*,int ,int*) ;
 struct dcn20_hubbub* FUNC_2 (struct hubbub*) ;

void FUNC_3(struct hubbub *VAR_3,
  unsigned int VAR_4,
  unsigned int *VAR_5)
{
 struct dcn20_hubbub *VAR_6 = FUNC_2(VAR_3);
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 FUNC_1(VAR_0, VAR_2, &VAR_7,
   VAR_1, &VAR_8);

 if (VAR_8) {
  if (VAR_7 == 2)
   *VAR_5 = VAR_4 / 2;
  else
   *VAR_5 = VAR_4;



  if (*VAR_5 < 40000 || *VAR_5 > 60000)
   FUNC_0(0);

  return;
 } else {
  *VAR_5 = VAR_4;


  FUNC_0(0);
  return;
 }
}
