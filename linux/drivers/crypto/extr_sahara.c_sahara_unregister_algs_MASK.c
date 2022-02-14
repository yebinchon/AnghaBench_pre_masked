
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {scalar_t__ version; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(struct sahara_dev *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  FUNC_2(&VAR_1[VAR_5]);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  FUNC_1(&VAR_2[VAR_5]);

 if (VAR_4->version > VAR_0)
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
   FUNC_1(&VAR_3[VAR_5]);
}
