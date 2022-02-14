
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stv {TYPE_1__* base; } ;
struct TYPE_2__ {int adr; int i2c; } ;


 int FUNC_0 (int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_0, u16 VAR_1, u8 *VAR_2)
{
 return FUNC_0(VAR_0->base->i2c, VAR_0->base->adr,
          VAR_1, VAR_2, 1);
}
