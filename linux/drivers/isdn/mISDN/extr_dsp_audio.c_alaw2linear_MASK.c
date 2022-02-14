
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;

__attribute__((used)) static inline short int FUNC_0(unsigned char VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_1 ^= VAR_0;
 VAR_2 = ((VAR_1 & 0x0F) << 4) + 8 ;
 VAR_3 = (((int) VAR_1 & 0x70) >> 4);
 if (VAR_3)
  VAR_2 = (VAR_2 + 0x100) << (VAR_3 - 1);
 return (short int) ((VAR_1 & 0x80) ? VAR_2 : -VAR_2);
}
