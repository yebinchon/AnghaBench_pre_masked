
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_to_prune {struct ref_to_prune* next; } ;
struct files_ref_store {int dummy; } ;


 int FUNC_0 (struct ref_to_prune*) ;
 int FUNC_1 (struct files_ref_store*,struct ref_to_prune*) ;

__attribute__((used)) static void FUNC_2(struct files_ref_store *VAR_0, struct ref_to_prune **VAR_1)
{
 while (*VAR_1) {
  struct ref_to_prune *VAR_2 = *VAR_1;
  *VAR_1 = VAR_2->next;
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_2);
 }
}
