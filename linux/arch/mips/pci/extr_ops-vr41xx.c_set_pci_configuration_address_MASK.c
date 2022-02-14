
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline int FUNC_3(unsigned char VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 if (VAR_2 == 0) {



  if (FUNC_1(VAR_3) < 11 || VAR_4 > 0xff)
   return -VAR_0;

  FUNC_2((1U << FUNC_1(VAR_3)) | (FUNC_0(VAR_3) << 8) |
         (VAR_4 & 0xfc), VAR_1);
 } else {



  if (VAR_4 > 0xff)
   return -VAR_0;

  FUNC_2(((uint32_t)VAR_2 << 16) | ((VAR_3 & 0xff) << 8) |
         (VAR_4 & 0xfc) | 1U, VAR_1);
 }

 return 0;
}
