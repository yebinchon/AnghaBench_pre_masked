
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t FUNC_0 (int*) ;
 unsigned int FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 int VAR_4 = VAR_3 / VAR_2;
 int VAR_5 = 100000;
 u8 VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  unsigned int VAR_8 = FUNC_1(VAR_4 - VAR_0[VAR_6]);

  if (VAR_8 >= VAR_5)
   continue;

  VAR_7 = VAR_6;
  VAR_5 = VAR_8;
  if (VAR_8 == 0)
   break;
 }

 *VAR_1 |= VAR_7 << 4;

 return VAR_0[VAR_7];
}
