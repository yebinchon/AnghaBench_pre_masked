
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testfunc_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int const) ;
 unsigned long FUNC_2 (int const*) ;

__attribute__((used)) static void
FUNC_3(testfunc_t *VAR_1)
{
 const int VAR_2[] = {
  0,
  1,
  VAR_0 - 1,
  VAR_0,
  VAR_0 + 1,
  2 * VAR_0 - 1,
  2 * VAR_0,
  1023,
  1024
 };

 for (unsigned long VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
  FUNC_1(VAR_1, VAR_2[VAR_3]);
  FUNC_0(VAR_1, VAR_2[VAR_3]);
 }
}
