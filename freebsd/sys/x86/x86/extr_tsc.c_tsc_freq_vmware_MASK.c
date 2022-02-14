
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 u_int VAR_5[4];

 if (VAR_2 >= 0x40000010) {
  FUNC_0(0x40000010, VAR_5);
  VAR_3 = VAR_5[0] * 1000;
 } else {
  FUNC_1(VAR_1, VAR_5);
  if (VAR_5[1] != VAR_0)
   VAR_3 = VAR_5[0] | ((uint64_t)VAR_5[1] << 32);
 }
 VAR_4 = 1;
}
