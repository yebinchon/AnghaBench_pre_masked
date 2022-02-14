
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tda_state {int* m_Regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int*,int*) ;
 int FUNC_1 (struct tda_state*,size_t,size_t) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct tda_state *VAR_6, u32 VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 u64 VAR_10;
 u32 VAR_11;

 if (!FUNC_0(VAR_5, VAR_7, &VAR_8, &VAR_9))
  return -VAR_4;

 VAR_10 = (u64)VAR_7 * (u64)VAR_9;

 VAR_10 *= (u64)16384;
 FUNC_2(VAR_10, (u64)16000000);
 VAR_11 = VAR_10;

 VAR_6->m_Regs[VAR_3] = VAR_8;
 VAR_6->m_Regs[VAR_0] = ((VAR_11 >> 16) & 0xFF);
 VAR_6->m_Regs[VAR_1] = ((VAR_11 >> 8) & 0xFF);
 VAR_6->m_Regs[VAR_2] = (VAR_11 & 0xFF);

 return FUNC_1(VAR_6, VAR_3, VAR_2);
}
