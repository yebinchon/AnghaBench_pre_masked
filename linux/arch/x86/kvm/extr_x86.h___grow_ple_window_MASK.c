
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_0,
  unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 u64 VAR_4 = VAR_0;

 if (VAR_2 < 1)
  return VAR_1;

 if (VAR_2 < VAR_1)
  VAR_4 *= VAR_2;
 else
  VAR_4 += VAR_2;

 return FUNC_0(VAR_4, (u64)VAR_3);
}
