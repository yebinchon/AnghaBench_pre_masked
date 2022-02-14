
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int* cf_gf128 ;


 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int* const,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int*,int*,int*,int) ;
 int FUNC_4 (int*,int*,int) ;

void FUNC_5(const cf_gf128 VAR_0, const cf_gf128 VAR_1, cf_gf128 VAR_2)
{






  cf_gf128 VAR_3, VAR_4;
  FUNC_2(VAR_3, 0, sizeof VAR_3);
  FUNC_1(VAR_4, VAR_1, sizeof VAR_4);

  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 128; VAR_5++)
  {
    uint32_t VAR_6 = VAR_0[VAR_5 >> 5];
    uint8_t VAR_7 = (VAR_6 >> (31 - (VAR_5 & 31))) & 1;




    if (VAR_7)
      FUNC_4(VAR_3, VAR_4, 4);


    FUNC_0(VAR_4, VAR_4);
  }

  FUNC_1(VAR_2, VAR_3, sizeof VAR_3);
}
