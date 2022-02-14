
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int probes_opcode_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_1, u32 VAR_2)
{
 probes_opcode_t VAR_3 = FUNC_0(*VAR_1);
 probes_opcode_t VAR_4;
 probes_opcode_t VAR_5;
 int VAR_6;
 u32 VAR_7 = 0xffff;
 u32 VAR_8;

 for (VAR_8 = VAR_2; VAR_8; VAR_8 >>= 4, VAR_3 >>= 4) {
  if ((VAR_8 & 0xf) == VAR_0)
   continue;

  VAR_7 &= ~(1 << (VAR_3 & 0xf));
 }


 if (VAR_7 & (1 << 15))
  return 15;

 if (!VAR_7)
  return -1;





 VAR_6 = VAR_7 = FUNC_2(VAR_7) - 1;

 VAR_4 = FUNC_0(*VAR_1);
 VAR_3 = VAR_4;
 VAR_8 = VAR_2;
 VAR_5 = 0xf;

 for (; VAR_8; VAR_8 >>= 4, VAR_5 <<= 4, VAR_7 <<= 4, VAR_4 >>= 4) {
  if ((VAR_8 & 0xf) == VAR_0)
   continue;

  if ((VAR_4 & 0xf) != 15)
   continue;

  VAR_3 &= ~VAR_5;
  VAR_3 |= VAR_7 & VAR_5;
 }

 *VAR_1 = FUNC_1(VAR_3);
 return VAR_6;
}
