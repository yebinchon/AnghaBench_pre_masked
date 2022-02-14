
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, unsigned int VAR_2,
          bool VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_0 + FUNC_0(VAR_2, VAR_1));
 if (VAR_3) {
  if (VAR_4 == 0x00) {
   FUNC_1("power clamp for cluster %u cpu %u already open\n",
     VAR_2, VAR_1);
   return 0;
  }

  FUNC_4(0xff, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
  FUNC_4(0xfe, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
  FUNC_4(0xf8, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
  FUNC_4(0xf0, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
  FUNC_4(0x00, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
 } else {
  FUNC_4(0xff, VAR_0 + FUNC_0(VAR_2, VAR_1));
  FUNC_3(10);
 }

 return 0;
}
