
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct object {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;
struct atom_value {int s; scalar_t__ value; } ;
struct TYPE_4__ {char* name; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct commit_list*) ;
 int * FUNC_1 (struct commit*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (char const*,char*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct atom_value *VAR_3, int VAR_4, struct object *VAR_5)
{
 int VAR_6;
 struct commit *VAR_7 = (struct commit *) VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  const char *VAR_8 = VAR_1[VAR_6].name;
  struct atom_value *VAR_9 = &VAR_3[VAR_6];
  if (!!VAR_4 != (*VAR_8 == '*'))
   continue;
  if (VAR_4)
   VAR_8++;
  if (!FUNC_6(VAR_8, "tree")) {
   VAR_9->s = FUNC_7(FUNC_2(FUNC_1(VAR_7)));
  }
  else if (!FUNC_6(VAR_8, "numparent")) {
   VAR_9->value = FUNC_0(VAR_7->parents);
   VAR_9->s = FUNC_8("%lu", (unsigned long)VAR_9->value);
  }
  else if (!FUNC_6(VAR_8, "parent")) {
   struct commit_list *VAR_10;
   struct strbuf VAR_11 = VAR_0;
   for (VAR_10 = VAR_7->parents; VAR_10; VAR_10 = VAR_10->next) {
    struct commit *VAR_12 = VAR_10->item;
    if (VAR_10 != VAR_7->parents)
     FUNC_3(&VAR_11, ' ');
    FUNC_4(&VAR_11, FUNC_2(&VAR_12->object.oid));
   }
   VAR_9->s = FUNC_5(&VAR_11, ((void*)0));
  }
 }
}
