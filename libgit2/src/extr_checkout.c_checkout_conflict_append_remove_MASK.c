
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_7__ {int remove_conflicts; } ;
typedef TYPE_2__ checkout_data ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(
 const git_index_entry *VAR_0,
 const git_index_entry *VAR_1,
 const git_index_entry *VAR_2,
 void *VAR_3)
{
 checkout_data *VAR_4 = VAR_3;
 const char *VAR_5;

 FUNC_2(VAR_0 || VAR_1 || VAR_2);

 if (VAR_0)
  VAR_5 = FUNC_3(VAR_0->path);
 else if (VAR_1)
  VAR_5 = FUNC_3(VAR_1->path);
 else if (VAR_2)
  VAR_5 = FUNC_3(VAR_2->path);
 else
  FUNC_1();

 FUNC_0(VAR_5);

 return FUNC_4(&VAR_4->remove_conflicts, (char *)VAR_5);
}
