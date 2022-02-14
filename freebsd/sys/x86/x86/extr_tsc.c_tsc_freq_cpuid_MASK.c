
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(void)
{
 u_int VAR_2[4];

 if (VAR_0 < 0x15)
  return (0);
 FUNC_0(0x15, VAR_2);
 if (VAR_2[0] != 0 && VAR_2[1] != 0 && VAR_2[2] != 0) {
  VAR_1 = (uint64_t)VAR_2[2] * VAR_2[1] / VAR_2[0];
  return (1);
 }

 if (VAR_0 < 0x16)
  return (0);
 FUNC_0(0x16, VAR_2);
 if (VAR_2[0] != 0) {
  VAR_1 = (uint64_t)VAR_2[0] * 1000000;
  return (1);
 }

 return (0);
}
