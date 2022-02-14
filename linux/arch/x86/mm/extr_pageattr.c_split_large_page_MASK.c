
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cpa_data {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct cpa_data*,int *,unsigned long,struct page*) ;
 struct page* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cpa_data *VAR_3, pte_t *VAR_4,
       unsigned long VAR_5)
{
 struct page *VAR_6;

 if (!FUNC_3())
  FUNC_5(&VAR_2);
 VAR_6 = FUNC_2(VAR_1, 0);
 if (!FUNC_3())
  FUNC_4(&VAR_2);
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6))
  FUNC_0(VAR_6);

 return 0;
}
