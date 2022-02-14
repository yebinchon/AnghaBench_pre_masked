
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rev_info*,struct commit*,int) ;
 int FUNC_1 (struct commit_list*) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;

__attribute__((used)) static int FUNC_3(struct rev_info *VAR_2, struct commit *VAR_3)
{
 struct commit_list **VAR_4, *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_4 = &VAR_3->parents;
 VAR_6 = 0;
 while ((VAR_5 = *VAR_4) != ((void*)0)) {
  struct commit *VAR_8 = VAR_5->item;
  if (VAR_8->object.flags & VAR_0) {
   VAR_8->object.flags &= ~VAR_0;
   *VAR_4 = VAR_5->next;
   FUNC_1(VAR_5);
   VAR_7++;
   FUNC_0(VAR_2, VAR_3, VAR_6);
   continue;
  }
  VAR_4 = &VAR_5->next;
  VAR_6++;
 }


 if (VAR_7 && !(VAR_3->object.flags & VAR_1))
  FUNC_2(VAR_2, VAR_3);

 return VAR_6;
}
