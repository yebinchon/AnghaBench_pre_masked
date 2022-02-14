
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rmid_entry {int list; } ;


 struct rmid_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct rmid_entry*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_5(u32 VAR_2)
{
 struct rmid_entry *VAR_3;

 if (!VAR_2)
  return;

 FUNC_4(&VAR_0);

 VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2())
  FUNC_1(VAR_3);
 else
  FUNC_3(&VAR_3->list, &VAR_1);
}
