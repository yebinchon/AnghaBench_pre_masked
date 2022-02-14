
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int left_right; int first_parent_only; } ;
struct commit_list {TYPE_1__* item; struct commit_list* next; } ;
struct TYPE_4__ {int oid; int flags; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {TYPE_2__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rev_info*,TYPE_2__*,char const*) ;
 char const* FUNC_1 (int *) ;
 int FUNC_2 (struct rev_info*) ;
 int FUNC_3 (int ,struct rev_info*,int *) ;
 int FUNC_4 (int ,int *,struct rev_info*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct rev_info *VAR_3, const char *VAR_4,
  struct commit *VAR_5, struct commit *VAR_6,
  struct commit_list *VAR_7)
{
 struct commit_list *VAR_8;

 FUNC_3(VAR_2, VAR_3, ((void*)0));
 FUNC_4(0, ((void*)0), VAR_3, ((void*)0));
 VAR_3->left_right = 1;
 VAR_3->first_parent_only = 1;
 VAR_5->object.flags |= VAR_0;
 FUNC_0(VAR_3, &VAR_5->object, VAR_4);
 FUNC_0(VAR_3, &VAR_6->object, VAR_4);
 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
  VAR_8->item->object.flags |= VAR_1;
  FUNC_0(VAR_3, &VAR_8->item->object,
   FUNC_1(&VAR_8->item->object.oid));
 }
 return FUNC_2(VAR_3);
}
