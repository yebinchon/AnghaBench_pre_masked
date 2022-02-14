
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_change_data {void* clear_mask; void* set_mask; } ;
typedef void* pgprot_t ;


 int FUNC_0 (int *,unsigned long,unsigned long,int ,struct page_change_data*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
    pgprot_t VAR_4, pgprot_t VAR_5)
{
 struct page_change_data VAR_6;
 int VAR_7;

 VAR_6.set_mask = VAR_4;
 VAR_6.clear_mask = VAR_5;

 VAR_7 = FUNC_0(&VAR_1, VAR_2, VAR_3, VAR_0,
     &VAR_6);

 FUNC_1(VAR_2, VAR_2 + VAR_3);
 return VAR_7;
}
