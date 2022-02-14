
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_3__* item; } ;
struct TYPE_4__ {int oid; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;
typedef enum get_oid_result { ____Placeholder_get_oid_result } get_oid_result ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repository*,char const*,int,struct object_id*,int ) ;
 struct commit* FUNC_1 (struct repository*,struct object_id*) ;
 int FUNC_2 (struct object_id*,int *) ;
 scalar_t__ FUNC_3 (struct commit*) ;

__attribute__((used)) static enum get_oid_result FUNC_4(struct repository *VAR_3,
          const char *VAR_4, int VAR_5,
          struct object_id *VAR_6, int VAR_7)
{
 struct object_id VAR_8;
 enum get_oid_result VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8,
         VAR_1);
 struct commit *VAR_10;
 struct commit_list *VAR_11;

 if (VAR_9)
  return VAR_9;
 VAR_10 = FUNC_1(VAR_3, &VAR_8);
 if (FUNC_3(VAR_10))
  return VAR_2;
 if (!VAR_7) {
  FUNC_2(VAR_6, &VAR_10->object.oid);
  return VAR_0;
 }
 VAR_11 = VAR_10->parents;
 while (VAR_11) {
  if (!--VAR_7) {
   FUNC_2(VAR_6, &VAR_11->item->object.oid);
   return VAR_0;
  }
  VAR_11 = VAR_11->next;
 }
 return VAR_2;
}
