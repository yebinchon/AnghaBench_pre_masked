
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mtrr_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3, unsigned long VAR_4,
     unsigned long VAR_5, mtrr_type VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_0 + (VAR_3 << 1) + VAR_3;


 if (VAR_3 >= 7)
  VAR_5 >>= 6;

 VAR_5 &= 0x7fff;
 for (VAR_9 = 0; VAR_5; VAR_9++, VAR_5 >>= 1)
  ;

 if (VAR_3 < 7) {
  switch (VAR_6) {
  case 130:
   VAR_8 = 1;
   break;
  case 129:
   VAR_8 = 9;
   break;
  case 128:
   VAR_8 = 24;
   break;
  default:
   VAR_8 = 8;
   break;
  }
 } else {
  switch (VAR_6) {
  case 130:
   VAR_8 = 0;
   break;
  case 129:
   VAR_8 = 8;
   break;
  case 128:
   VAR_8 = 25;
   break;
  default:
   VAR_8 = 9;
   break;
  }
 }

 FUNC_1();

 VAR_4 <<= VAR_2;
 FUNC_2(VAR_7 + 0, ((unsigned char *)&VAR_4)[3]);
 FUNC_2(VAR_7 + 1, ((unsigned char *)&VAR_4)[2]);
 FUNC_2(VAR_7 + 2, (((unsigned char *)&VAR_4)[1]) | VAR_9);
 FUNC_2(VAR_1 + VAR_3, VAR_8);

 FUNC_0();
}
