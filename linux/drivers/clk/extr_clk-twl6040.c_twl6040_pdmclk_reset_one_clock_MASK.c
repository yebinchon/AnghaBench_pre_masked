
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040_pdmclk {int twl6040; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int const) ;
 int FUNC_1 (int ,unsigned int,int const) ;

__attribute__((used)) static int FUNC_2(struct twl6040_pdmclk *VAR_1,
       unsigned int VAR_2)
{
 const u8 VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->twl6040, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1->twl6040, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
