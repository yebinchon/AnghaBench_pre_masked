
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_dir {int nr; int sorted; int alloc; int * entries; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ref_dir *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  FUNC_1(VAR_0->entries[VAR_1]);
 FUNC_0(VAR_0->entries);
 VAR_0->sorted = VAR_0->nr = VAR_0->alloc = 0;
}
