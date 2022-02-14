
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit_list*) ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (struct commit_list*) ;
 struct commit_list* FUNC_3 (struct commit_list*) ;

__attribute__((used)) static int FUNC_4(struct commit *VAR_1)
{
 struct commit_list *VAR_2 = FUNC_3(VAR_1->parents);
 int VAR_3 = 0, VAR_4 = 0;
 struct commit_list *VAR_5, *VAR_6;


 int VAR_7 = FUNC_0(VAR_1->parents);
 int VAR_8 = FUNC_0(VAR_2);






 VAR_5 = VAR_1->parents;
 VAR_6 = VAR_2;
 while (VAR_5) {
  if (VAR_6 && VAR_5->item == VAR_6->item) {
   VAR_6 = VAR_6->next;
   VAR_3++;
  } else {
   VAR_5->item->object.flags |= VAR_0;
   VAR_4++;
  }
  VAR_5=VAR_5->next;
 }

 if (VAR_3 != VAR_8 || VAR_8+VAR_4 != VAR_7)
  FUNC_1("mark_redundant_parents %d %d %d %d", VAR_7, VAR_8, VAR_3, VAR_4);

 FUNC_2(VAR_2);

 return VAR_4;
}
