
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct add_alternate_refs_data {unsigned int flags; struct rev_info* revs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct add_alternate_refs_data*) ;

__attribute__((used)) static void FUNC_1(struct rev_info *VAR_1,
       unsigned int VAR_2)
{
 struct add_alternate_refs_data VAR_3;
 VAR_3.revs = VAR_1;
 VAR_3.flags = VAR_2;
 FUNC_0(VAR_0, &VAR_3);
}
