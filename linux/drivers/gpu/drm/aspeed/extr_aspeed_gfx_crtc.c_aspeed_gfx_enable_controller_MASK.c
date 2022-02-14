
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_gfx {scalar_t__ base; int scu; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct aspeed_gfx *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4->base + VAR_0);
 u32 VAR_6 = FUNC_1(VAR_4->base + VAR_1);


 FUNC_2(VAR_4->scu, 0x2c, FUNC_0(16), FUNC_0(16));

 FUNC_3(VAR_5 | VAR_3, VAR_4->base + VAR_0);
 FUNC_3(VAR_6 | VAR_2, VAR_4->base + VAR_1);
}
