
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;


 int FUNC_0 (unsigned int const,unsigned int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, u32 VAR_1, u32 VAR_2,
     u8 *VAR_3, u8 *VAR_4)
{
 const unsigned int VAR_5 = VAR_0 * VAR_1;
 unsigned int VAR_6, VAR_7;


 for (VAR_6 = 64 / VAR_1; VAR_6 > 0; --VAR_6) {
  if (FUNC_0(VAR_5, VAR_6 * VAR_1) <= VAR_2)
   break;
 }
 *VAR_3 = VAR_6;


 for (VAR_7 = 8; VAR_7 > 1; VAR_7 /= 2) {
  if (FUNC_0(VAR_5, VAR_6 * VAR_1 * VAR_7) <= VAR_2)
   break;
 }
 *VAR_4 = VAR_7;
}
