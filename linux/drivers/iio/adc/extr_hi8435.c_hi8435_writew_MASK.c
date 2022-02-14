
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hi8435_priv {int* reg_buffer; int spi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct hi8435_priv *VAR_1, u8 VAR_2, u16 VAR_3)
{
 VAR_1->reg_buffer[0] = VAR_2 | VAR_0;
 VAR_1->reg_buffer[1] = (VAR_3 >> 8) & 0xff;
 VAR_1->reg_buffer[2] = VAR_3 & 0xff;

 return FUNC_0(VAR_1->spi, VAR_1->reg_buffer, 3);
}
