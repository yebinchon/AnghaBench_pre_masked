
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_kona_gpio {int lock; scalar_t__ reg_base; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct bcm_kona_gpio *VAR_0,
     unsigned VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;
 int VAR_4 = FUNC_1(VAR_1);

 FUNC_4(&VAR_0->lock, VAR_3);

 VAR_2 = FUNC_6(VAR_0->reg_base + FUNC_2(VAR_4));
 VAR_2 |= FUNC_0(VAR_1);
 FUNC_3(VAR_0->reg_base, VAR_4, VAR_2);

 FUNC_5(&VAR_0->lock, VAR_3);
}
