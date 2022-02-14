
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_name_entry {int * theirs; int * ours; int * ancestor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct checkout_name_entry *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(FUNC_1(VAR_0,
   FUNC_2(VAR_1[VAR_3].ancestor) == 0 ? ((void*)0) : VAR_1[VAR_3].ancestor,
   FUNC_2(VAR_1[VAR_3].ours) == 0 ? ((void*)0) : VAR_1[VAR_3].ours,
   FUNC_2(VAR_1[VAR_3].theirs) == 0 ? ((void*)0) : VAR_1[VAR_3].theirs));
 }
}
