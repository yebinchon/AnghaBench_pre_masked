
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct oid_array {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct TYPE_6__ {int oid; } ;
struct commit {TYPE_3__ object; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 struct oid_array VAR_0 ;
 int FUNC_0 (int *,struct oid_array*,int,struct rev_info*) ;
 struct commit_list* FUNC_1 (struct rev_info*,struct commit const*) ;
 int FUNC_2 (struct oid_array*,int *) ;
 int FUNC_3 (struct oid_array*) ;

void FUNC_4(const struct commit *VAR_1, int VAR_2,
         struct rev_info *VAR_3)
{
 struct commit_list *VAR_4 = FUNC_1(VAR_3, VAR_1);
 struct oid_array VAR_5 = VAR_0;

 while (VAR_4) {
  FUNC_2(&VAR_5, &VAR_4->item->object.oid);
  VAR_4 = VAR_4->next;
 }
 FUNC_0(&VAR_1->object.oid, &VAR_5, VAR_2, VAR_3);
 FUNC_3(&VAR_5);
}
