
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static unsigned short FUNC_2 (void)
{
 unsigned char VAR_3, VAR_4;
 unsigned int VAR_5;




 VAR_3 = FUNC_0 (0x903c);
 VAR_4 = FUNC_0 (0x903d);


 if (VAR_3 == 0x04 && VAR_4 < VAR_2) {
  VAR_5 = VAR_0;
 } else {



  VAR_5 = FUNC_1 (0x901e);
  VAR_5 >>= 8;
  VAR_5 &= 0x03;
  if (VAR_5 == VAR_1)
   VAR_5 = VAR_0;
 }
 return VAR_5;
}
