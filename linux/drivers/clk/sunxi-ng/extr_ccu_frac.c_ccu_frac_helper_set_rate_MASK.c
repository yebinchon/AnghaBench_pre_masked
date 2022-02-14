
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_frac_internal {unsigned long* rates; int select; } ;
struct ccu_common {int features; int lock; scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccu_common*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct ccu_common *VAR_2,
        struct ccu_frac_internal *VAR_3,
        unsigned long VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 if (!(VAR_2->features & VAR_0))
  return -VAR_1;

 if (VAR_3->rates[0] == VAR_4)
  VAR_8 = 0;
 else if (VAR_3->rates[1] == VAR_4)
  VAR_8 = VAR_3->select;
 else
  return -VAR_1;

 FUNC_2(VAR_2->lock, VAR_6);
 VAR_7 = FUNC_1(VAR_2->base + VAR_2->reg);
 VAR_7 &= ~VAR_3->select;
 FUNC_4(VAR_7 | VAR_8, VAR_2->base + VAR_2->reg);
 FUNC_3(VAR_2->lock, VAR_6);

 FUNC_0(VAR_2, VAR_5);

 return 0;
}
