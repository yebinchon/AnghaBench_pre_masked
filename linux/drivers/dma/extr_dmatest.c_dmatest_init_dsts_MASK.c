
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(u8 **VAR_1, unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, bool VAR_5)
{
 unsigned int VAR_6;
 u8 *VAR_7;

 for (; (VAR_7 = *VAR_1); VAR_1++) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_7[VAR_6] = FUNC_0(VAR_6, VAR_5);
  for ( ; VAR_6 < VAR_2 + VAR_3; VAR_6++)
   VAR_7[VAR_6] = FUNC_0(VAR_6, VAR_5) |
      VAR_0;
  for ( ; VAR_6 < VAR_4; VAR_6++)
   VAR_7[VAR_6] = FUNC_0(VAR_6, VAR_5);
 }
}
