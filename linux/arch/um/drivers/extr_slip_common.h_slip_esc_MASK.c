
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned char *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 unsigned char *VAR_5 = VAR_3;
 unsigned char VAR_6;







 *VAR_5++ = 129;






 while (VAR_4-- > 0) {
  switch(VAR_6 = *VAR_2++) {
  case 129:
   *VAR_5++ = 128;
   *VAR_5++ = VAR_0;
   break;
  case 128:
   *VAR_5++ = 128;
   *VAR_5++ = VAR_1;
   break;
  default:
   *VAR_5++ = VAR_6;
   break;
  }
 }
 *VAR_5++ = 129;
 return (VAR_5 - VAR_3);
}
