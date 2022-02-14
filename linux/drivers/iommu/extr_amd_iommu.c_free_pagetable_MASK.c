
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int mode; scalar_t__ pt_root; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long,int ,struct page*) ;

__attribute__((used)) static void FUNC_3(struct protection_domain *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2->pt_root;
 struct page *VAR_4 = ((void*)0);

 FUNC_0(VAR_2->mode < VAR_1 ||
        VAR_2->mode > VAR_0);

 VAR_4 = FUNC_2(VAR_3, VAR_2->mode, VAR_4);

 FUNC_1(VAR_4);
}
