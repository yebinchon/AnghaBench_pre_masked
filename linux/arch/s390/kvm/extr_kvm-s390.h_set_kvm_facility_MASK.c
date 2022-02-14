
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline int FUNC_0(u64 *VAR_2, unsigned long VAR_3)
{
 unsigned char *VAR_4;

 if (VAR_3 >= VAR_1)
  return -VAR_0;
 VAR_4 = (unsigned char *) VAR_2 + (VAR_3 >> 3);
 *VAR_4 |= (0x80UL >> (VAR_3 & 7));
 return 0;
}
