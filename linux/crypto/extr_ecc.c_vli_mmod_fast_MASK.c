
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned long long*,unsigned long long*,unsigned long long const*,unsigned int) ;
 int FUNC_2 (unsigned long long*,unsigned long long*,unsigned long long const*,unsigned long long*) ;
 int FUNC_3 (unsigned long long*,unsigned long long*,unsigned long long const*,unsigned long long*) ;
 int FUNC_4 (unsigned long long*,unsigned long long*,unsigned long long const*,unsigned int) ;
 int FUNC_5 (unsigned long long*,unsigned long long*,unsigned long long const*,unsigned int) ;

__attribute__((used)) static bool FUNC_6(u64 *VAR_1, u64 *VAR_2,
     const u64 *VAR_3, unsigned int VAR_4)
{
 u64 VAR_5[2 * VAR_0];


 if (VAR_3[0] != -1ull) {

  if (VAR_3[VAR_4 - 1] == -1ull) {
   FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4);
   return 1;
  } else if (VAR_3[VAR_4 - 1] == 1ull << 63 &&
      VAR_3[VAR_4 - 2] == 0) {
   FUNC_5(VAR_1, VAR_2, VAR_3,
       VAR_4);
   return 1;
  }
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  return 1;
 }

 switch (VAR_4) {
 case 3:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
  break;
 case 4:
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
  break;
 default:
  FUNC_0("ecc: unsupported digits size!\n");
  return 0;
 }

 return 1;
}
