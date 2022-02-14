
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv {int symbol_rate; } ;
typedef enum fe_stv0910_mod_cod { ____Placeholder_fe_stv0910_mod_cod } fe_stv0910_mod_cod ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct stv *VAR_3,
     enum fe_stv0910_mod_cod VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4 >= VAR_0)
  VAR_6 = ((int)VAR_0 - (int)VAR_1) * 10;
 else if (VAR_4 >= VAR_1)
  VAR_6 = ((int)VAR_4 - (int)VAR_1) * 10;

 if (VAR_3->symbol_rate <= 3000000)
  VAR_6 += 0;
 else if (VAR_3->symbol_rate <= 7000000)
  VAR_6 += 2;
 else if (VAR_3->symbol_rate <= 15000000)
  VAR_6 += 4;
 else if (VAR_3->symbol_rate <= 25000000)
  VAR_6 += 6;
 else
  VAR_6 += 8;

 if (!VAR_5)
  VAR_6 += 1;

 return VAR_2[VAR_6];
}
