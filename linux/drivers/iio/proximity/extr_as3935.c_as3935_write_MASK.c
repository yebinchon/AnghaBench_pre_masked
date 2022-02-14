
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct as3935_state {int* buf; int spi; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct as3935_state *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 u8 *VAR_3 = VAR_0->buf;

 VAR_3[0] = FUNC_0(VAR_1) >> 8;
 VAR_3[1] = VAR_2;

 return FUNC_1(VAR_0->spi, VAR_3, 2);
}
