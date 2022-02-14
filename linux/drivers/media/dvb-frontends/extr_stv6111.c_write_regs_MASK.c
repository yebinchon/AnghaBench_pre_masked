
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {int adr; int i2c; int * reg; } ;


 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_0, int VAR_1, int VAR_2)
{
 u8 VAR_3[12];

 FUNC_1(&VAR_3[1], &VAR_0->reg[VAR_1], VAR_2);
 VAR_3[0] = VAR_1;
 return FUNC_0(VAR_0->i2c, VAR_0->adr, VAR_3, VAR_2 + 1);
}
