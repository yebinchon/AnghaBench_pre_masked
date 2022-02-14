
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_2,
        unsigned int VAR_3, unsigned int *VAR_4,
        u32 *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = (int)(VAR_0 - VAR_2 - VAR_3);
 unsigned int VAR_8;

 *VAR_5 = 0;
 for (VAR_8 = 0; (VAR_8 < VAR_6) && (VAR_7 > 0); VAR_8++) {
  if (VAR_7 - (int)(VAR_4[VAR_8] +
   (VAR_6 - VAR_8 - 1) * VAR_1) >= 0) {
   VAR_7 -= VAR_4[VAR_8];
   *VAR_5 |= (1 << VAR_8);
  } else {
   VAR_7 -= VAR_1;
  }
 }

 return (VAR_7 >= 0) ? 0 : -1;
}
