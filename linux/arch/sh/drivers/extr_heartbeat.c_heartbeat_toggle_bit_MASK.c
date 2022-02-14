
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heartbeat_data {int* bit_pos; unsigned int mask; int regsize; int base; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_6(struct heartbeat_data *VAR_0,
     unsigned VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (1 << VAR_0->bit_pos[VAR_1]);
 if (VAR_2)
  VAR_3 = ~VAR_3;

 VAR_3 &= VAR_0->mask;

 switch (VAR_0->regsize) {
 case 32:
  VAR_3 |= FUNC_1(VAR_0->base) & ~VAR_0->mask;
  FUNC_4(VAR_3, VAR_0->base);
  break;
 case 16:
  VAR_3 |= FUNC_0(VAR_0->base) & ~VAR_0->mask;
  FUNC_3(VAR_3, VAR_0->base);
  break;
 default:
  VAR_3 |= FUNC_2(VAR_0->base) & ~VAR_0->mask;
  FUNC_5(VAR_3, VAR_0->base);
  break;
 }
}
