
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static int FUNC_4(uint32_t *VAR_3)
{
 uint64_t VAR_4[VAR_0];


 FUNC_0();

 if (VAR_2 == VAR_1) {
  uint64_t VAR_5;



  if (!FUNC_2(16, VAR_4))
   return -13;


  VAR_5 = (VAR_4[21] << 22) & 0x00000000ffc00000;
  VAR_5 |= (VAR_4[22] >> 42) & 0x00000000003fffff;

  VAR_5 |= (VAR_4[22] >> 10) & 0x0000000080000000;
  VAR_3[0] = (uint32_t)VAR_5;


  VAR_5 = (VAR_4[22] >> 9) & 0x00000000ffffffff;

  VAR_5 |= (VAR_4[22] << 23) & 0x0000000080000000;
  VAR_3[1] = (uint32_t)VAR_5;


  VAR_5 = (VAR_4[22] << 24) & 0x00000000ff000000;
  VAR_5 |= (VAR_4[23] >> 40) & 0x0000000000ffffff;

  VAR_5 |= (VAR_4[23] >> 8) & 0x0000000080000000;
  VAR_3[2] = (uint32_t)VAR_5;


  VAR_5 = (VAR_4[23] >> 7) & 0x00000000ffffffff;

  VAR_5 |= (VAR_4[23] << 25) & 0x0000000080000000;
  VAR_3[3] = (uint32_t)VAR_5;
  VAR_4[21] &= 0xfffffffffffffc00ul;
  VAR_4[22] = 0;
  VAR_4[23] = 0;





  FUNC_3(16, VAR_4);
 } else {




  if (!FUNC_2(15, VAR_4)) {
   return -13;
  }




  FUNC_1(15);




  VAR_3[0] = (uint32_t)((VAR_4[0] >> 32) & 0x00000000ffffffffUL);
  VAR_3[1] = (uint32_t)(VAR_4[0] & 0x00000000ffffffffUL);
  VAR_3[2] = (uint32_t)((VAR_4[1] >> 32) & 0x00000000ffffffffUL);
  VAR_3[3] = (uint32_t)(VAR_4[1] & 0x00000000ffffffffUL);
 }

 return 0;
}
