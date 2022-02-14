
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
struct _arg_GO {unsigned int chan; int addr; unsigned int ns; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(unsigned VAR_2, u8 VAR_3[],
  const struct _arg_GO *VAR_4)
{
 u8 VAR_5 = VAR_4->chan;
 u32 VAR_6 = VAR_4->addr;
 unsigned VAR_7 = VAR_4->ns;

 if (VAR_2)
  return VAR_1;

 VAR_3[0] = VAR_0;
 VAR_3[0] |= (VAR_7 << 1);
 VAR_3[1] = VAR_5 & 0x7;
 VAR_3[2] = VAR_6;
 VAR_3[3] = VAR_6 >> 8;
 VAR_3[4] = VAR_6 >> 16;
 VAR_3[5] = VAR_6 >> 24;

 return VAR_1;
}
