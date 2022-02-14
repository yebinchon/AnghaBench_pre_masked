
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uleb128_t ;
typedef char u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**,char const*) ;
 int FUNC_1 (char const**,char const*) ;
 char* FUNC_2 (char const*,int ,int) ;
 int FUNC_3 (char const**,char const*,int) ;

__attribute__((used)) static signed FUNC_4(const u32 *VAR_2)
{
 const u8 *VAR_3 = (const u8 *)(VAR_2 + 2);
 unsigned VAR_4 = *VAR_3;

 if (*++VAR_3) {
  const char *VAR_5;
  const u8 *VAR_6 = (const u8 *)(VAR_2 + 1) + *VAR_2;
  uleb128_t VAR_7;


  if (*VAR_3 != 'z')
   return -1;


  VAR_5 = (const void *)VAR_3;
  VAR_3 = FUNC_2(VAR_5, 0, VAR_6 - VAR_3);
  if (VAR_3 == ((void*)0))
   return -1;

  ++VAR_3;
  FUNC_1(&VAR_3, VAR_6);
  FUNC_0(&VAR_3, VAR_6);

  VAR_4 <= 1 ? (void) ++VAR_3 : (void)FUNC_1(&VAR_3, VAR_6);
  VAR_7 = FUNC_1(&VAR_3, VAR_6);

  if (VAR_3 + VAR_7 < VAR_3 || VAR_3 + VAR_7 > VAR_6)
   return -1;

  VAR_6 = VAR_3 + VAR_7;
  while (*++VAR_5) {
   if (VAR_3 >= VAR_6)
    return -1;
   switch (*VAR_5) {
   case 'L':
    ++VAR_3;
    break;
   case 'P':{
     signed VAR_8 = *VAR_3++;

     if (!FUNC_3(&VAR_3, VAR_6, VAR_8)
         || VAR_3 > VAR_6)
      return -1;
    }
    break;
   case 'R':
    return *VAR_3;
   default:
    return -1;
   }
  }
 }
 return VAR_1 | VAR_0;
}
