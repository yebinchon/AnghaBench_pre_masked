
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {struct swrun_entry* parameters; struct swrun_entry* path; struct swrun_entry* name; } ;


 int FUNC_0 (int *,struct swrun_entry*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct swrun_entry*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct swrun_entry *VAR_2)
{

 FUNC_1(VAR_2 != ((void*)0));

 FUNC_0(&VAR_1, VAR_2, VAR_0);

 FUNC_2(VAR_2->name);
 FUNC_2(VAR_2->path);
 FUNC_2(VAR_2->parameters);
 FUNC_2(VAR_2);
}
