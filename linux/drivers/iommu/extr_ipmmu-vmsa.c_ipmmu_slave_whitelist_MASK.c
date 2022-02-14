
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_3)
{
 unsigned int VAR_4;





 if (!FUNC_2(VAR_1))
  return 1;


 if (!FUNC_2(VAR_2))
  return 0;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (!FUNC_3(FUNC_1(VAR_3), VAR_0[VAR_4]))
   return 1;
 }


 return 0;
}
