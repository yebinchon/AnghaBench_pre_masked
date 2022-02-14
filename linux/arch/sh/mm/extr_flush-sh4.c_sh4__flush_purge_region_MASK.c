
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reg_size_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 reg_size_t VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3 & ~(VAR_0-1);
 VAR_6 = (VAR_3 + VAR_2 + VAR_0-1)
  & ~(VAR_0-1);
 VAR_5 = (VAR_6 - VAR_4) / VAR_0;

 while (VAR_5 >= 8) {
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  VAR_5 -= 8;
 }
 while (VAR_5) {
  FUNC_0(VAR_4); VAR_4 += VAR_0;
  VAR_5--;
 }
}
