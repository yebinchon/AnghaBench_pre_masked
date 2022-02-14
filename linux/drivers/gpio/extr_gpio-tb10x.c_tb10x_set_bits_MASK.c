
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bgpio_lock; } ;
struct tb10x_gpio {TYPE_1__ gc; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tb10x_gpio*,unsigned int) ;
 int FUNC_3 (struct tb10x_gpio*,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_4(struct tb10x_gpio *VAR_0, unsigned int VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_0->gc.bgpio_lock, VAR_5);

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 VAR_4 = (VAR_4 & ~VAR_2) | (VAR_3 & VAR_2);

 FUNC_3(VAR_0, VAR_1, VAR_4);

 FUNC_1(&VAR_0->gc.bgpio_lock, VAR_5);
}
