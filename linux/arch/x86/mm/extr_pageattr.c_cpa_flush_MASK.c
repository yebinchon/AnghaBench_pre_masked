
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {unsigned int numpages; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (struct cpa_data*,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int * FUNC_7 (unsigned long,unsigned int*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct cpa_data*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 unsigned int VAR_5 ;

__attribute__((used)) static void FUNC_12(struct cpa_data *VAR_6, int VAR_7)
{
 struct cpa_data *VAR_8 = VAR_6;
 unsigned int VAR_9;

 FUNC_0(FUNC_6() && !VAR_4);

 if (VAR_7 && !FUNC_11(VAR_1)) {
  FUNC_3(VAR_7);
  return;
 }

 if (VAR_8->numpages <= VAR_5)
  FUNC_9(VAR_3, VAR_8, 1);
 else
  FUNC_5();

 if (!VAR_7)
  return;

 FUNC_8();
 for (VAR_9 = 0; VAR_9 < VAR_8->numpages; VAR_9++) {
  unsigned long VAR_10 = FUNC_1(VAR_8, VAR_9);
  unsigned int VAR_11;

  pte_t *VAR_12 = FUNC_7(VAR_10, &VAR_11);




  if (VAR_12 && (FUNC_10(*VAR_12) & VAR_2))
   FUNC_2((void *)FUNC_4(VAR_10), VAR_0);
 }
 FUNC_8();
}
