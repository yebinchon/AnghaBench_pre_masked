
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000m_state {scalar_t__ reg_offs; } ;


 int FUNC_0 (struct dib7000m_state*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct dib7000m_state *VAR_0, u16 *VAR_1)
{
 u16 VAR_2 = 0, VAR_3, *VAR_4;
 VAR_4 = VAR_1;
 VAR_2 = *VAR_4++;
 while (VAR_2) {
  VAR_3 = *VAR_4++;

  if (VAR_0->reg_offs && (VAR_3 >= 112 && VAR_3 <= 331))
   VAR_3++;

  do {
   FUNC_0(VAR_0, VAR_3, *VAR_4++);
   VAR_3++;
  } while (--VAR_2);
  VAR_2 = *VAR_4++;
 }
}
