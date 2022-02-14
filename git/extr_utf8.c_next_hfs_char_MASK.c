
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs_char_t ;


 int FUNC_0 (char const**,int *) ;

__attribute__((used)) static ucs_char_t FUNC_1(const char **VAR_0)
{
 while (1) {
  ucs_char_t VAR_1 = FUNC_0(VAR_0, ((void*)0));






  if (!*VAR_0)
   return 0;


  switch (VAR_1) {
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

  return VAR_1;
 }
}
