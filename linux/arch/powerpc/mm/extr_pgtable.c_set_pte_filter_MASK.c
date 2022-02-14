
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 () ;
 struct page* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static pte_t FUNC_11(pte_t VAR_2)
{
 struct page *VAR_3;

 if (FUNC_3(VAR_0))
  return FUNC_8(VAR_2);


 if (!FUNC_4(VAR_2) || !FUNC_6(VAR_2))
  return VAR_2;


 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_10(!VAR_3))
  return VAR_2;


 if (FUNC_9(VAR_1, &VAR_3->flags))
  return VAR_2;


 if (FUNC_1()) {
  FUNC_0(VAR_3);
  FUNC_7(VAR_1, &VAR_3->flags);
  return VAR_2;
 }


 return FUNC_5(VAR_2);
}
