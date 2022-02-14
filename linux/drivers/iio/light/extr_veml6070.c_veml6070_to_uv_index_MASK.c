
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0)
{





 unsigned VAR_1[11] = {
  187, 373, 560,
  746, 933, 1120,
  1308, 1494,
  1681, 1868, 2054};
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_0 <= VAR_1[VAR_2])
   return VAR_2;

 return 11;
}
