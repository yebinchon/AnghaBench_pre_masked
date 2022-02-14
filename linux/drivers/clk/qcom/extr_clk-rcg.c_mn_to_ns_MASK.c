
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mn {int n_val_shift; int width; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct mn *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0->width) - 1;
 VAR_4 <<= VAR_0->n_val_shift;
 VAR_3 &= ~VAR_4;

 if (VAR_2) {
  VAR_2 = VAR_2 - VAR_1;
  VAR_2 = ~VAR_2;
  VAR_2 &= FUNC_0(VAR_0->width) - 1;
  VAR_2 <<= VAR_0->n_val_shift;
  VAR_3 |= VAR_2;
 }

 return VAR_3;
}
