
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda_state {int* m_Regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct tda_state*,size_t) ;
 int FUNC_1 (struct tda_state*,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct tda_state *VAR_5)
{
 int VAR_6 = 0;
 do {
  VAR_5->m_Regs[VAR_3] = (VAR_5->m_Regs[VAR_3] & ~0x1F) | 0x12;
  VAR_5->m_Regs[VAR_4] = (VAR_5->m_Regs[VAR_4] & ~0x1F);
  VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
  if (VAR_6 < 0)
   break;
  VAR_5->m_Regs[VAR_0] = (VAR_5->m_Regs[VAR_0] & ~0x03);
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  if (VAR_6 < 0)
   break;
  VAR_5->m_Regs[VAR_1] = (VAR_5->m_Regs[VAR_1] & ~0x03);
  VAR_5->m_Regs[VAR_2] = (VAR_5->m_Regs[VAR_2] | 0x06);
  VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2);
  if (VAR_6 < 0)
   break;
 } while (0);
 return VAR_6;
}
