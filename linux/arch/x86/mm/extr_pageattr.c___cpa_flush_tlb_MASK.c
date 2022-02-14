
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {unsigned int numpages; } ;


 int FUNC_0 (struct cpa_data*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0)
{
 struct cpa_data *VAR_1 = VAR_0;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->numpages; VAR_2++)
  FUNC_1(FUNC_2(FUNC_0(VAR_1, VAR_2)));
}
