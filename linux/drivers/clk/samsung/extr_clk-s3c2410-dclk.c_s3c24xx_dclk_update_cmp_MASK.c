
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c24xx_dclk {int dclk_lock; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct s3c24xx_dclk *VAR_1,
        int VAR_2, int VAR_3)
{
 unsigned long VAR_4 = 0;
 u32 VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_1->dclk_lock, VAR_4);

 VAR_5 = FUNC_0(VAR_1->base);

 VAR_6 = ((VAR_5 >> VAR_2) & VAR_0) + 1;
 VAR_7 = ((VAR_6 + 1) / 2) - 1;

 VAR_5 &= ~(VAR_0 << VAR_3);
 VAR_5 |= (VAR_7 << VAR_3);

 FUNC_3(VAR_5, VAR_1->base);

 FUNC_2(&VAR_1->dclk_lock, VAR_4);
}
