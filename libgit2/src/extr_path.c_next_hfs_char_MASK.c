
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int,int*) ;

__attribute__((used)) static int32_t FUNC_2(const char **VAR_0, size_t *VAR_1)
{
 while (*VAR_1) {
  int32_t VAR_2;
  int VAR_3 = FUNC_1((const uint8_t *)(*VAR_0), (int)(*VAR_1), &VAR_2);
  if (VAR_3 < 0)
   return -1;

  (*VAR_0) += VAR_3;
  (*VAR_1) -= VAR_3;


  switch (VAR_2) {
  case 0x200c:
  case 0x200d:
  case 0x200e:
  case 0x200f:
  case 0x202a:
  case 0x202b:
  case 0x202c:
  case 0x202d:
  case 0x202e:
  case 0x206a:
  case 0x206b:
  case 0x206c:
  case 0x206d:
  case 0x206e:
  case 0x206f:
  case 0xfeff:
   continue;
  }





  return FUNC_0(VAR_2);
 }
 return 0;
}
