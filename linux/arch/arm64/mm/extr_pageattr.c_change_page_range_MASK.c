
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_change_data {int set_mask; int clear_mask; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(pte_t *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct page_change_data *VAR_3 = VAR_2;
 pte_t VAR_4 = FUNC_0(*VAR_0);

 VAR_4 = FUNC_1(VAR_4, VAR_3->clear_mask);
 VAR_4 = FUNC_3(VAR_4, VAR_3->set_mask);

 FUNC_2(VAR_0, VAR_4);
 return 0;
}
