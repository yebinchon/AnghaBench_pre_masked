
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;
typedef int FILE ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_0, int VAR_1, FILE *VAR_2)
{
 struct commit_list *VAR_3;
 for (VAR_3 = VAR_0->parents; VAR_3 ; VAR_3 = VAR_3->next) {
  struct commit *VAR_4 = VAR_3->item;
  FUNC_1(VAR_2, " %s", FUNC_0(&VAR_4->object.oid, VAR_1));
 }
}
