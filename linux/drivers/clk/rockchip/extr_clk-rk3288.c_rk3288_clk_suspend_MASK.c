
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_5 = VAR_2[VAR_4];

  VAR_3[VAR_4] =
    FUNC_2(VAR_1 + VAR_5);
 }






 FUNC_3(1 << (12 + 16),
         VAR_1 + FUNC_1(10));
 FUNC_3(0xf3030000, VAR_1 + VAR_0);

 return 0;
}
