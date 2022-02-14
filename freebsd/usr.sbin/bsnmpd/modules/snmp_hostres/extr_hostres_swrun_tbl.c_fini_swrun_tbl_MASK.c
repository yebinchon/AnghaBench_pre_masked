
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {int dummy; } ;


 struct swrun_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct swrun_entry*,int ) ;
 int FUNC_2 (struct swrun_entry*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(void)
{
 struct swrun_entry *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
