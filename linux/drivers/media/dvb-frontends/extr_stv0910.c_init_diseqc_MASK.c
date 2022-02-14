
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stv {TYPE_1__* base; scalar_t__ nr; } ;
struct TYPE_2__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_3)
{
 u16 VAR_4 = VAR_3->nr ? 0x40 : 0;
 u8 VAR_5 = ((VAR_3->base->mclk + 11000 * 32) / (22000 * 32));


 FUNC_0(VAR_3, VAR_0 + VAR_4, 0x00);
 FUNC_0(VAR_3, VAR_1 + VAR_4, 0xBA);
 FUNC_0(VAR_3, VAR_1 + VAR_4, 0x3A);
 FUNC_0(VAR_3, VAR_2 + VAR_4, VAR_5);
 return 0;
}
