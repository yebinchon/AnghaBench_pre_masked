
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mn {int m_val_shift; int width; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct mn *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_0->width) - 1;
 VAR_4 = (VAR_5 << VAR_0->m_val_shift) | VAR_5;
 VAR_3 &= ~VAR_4;

 if (VAR_2) {
  VAR_1 <<= VAR_0->m_val_shift;
  VAR_3 |= VAR_1;
  VAR_3 |= ~VAR_2 & VAR_5;
 }

 return VAR_3;
}
