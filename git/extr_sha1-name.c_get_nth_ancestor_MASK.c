
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; TYPE_2__* parents; } ;
typedef enum get_oid_result { ____Placeholder_get_oid_result } get_oid_result ;
struct TYPE_4__ {struct commit* item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repository*,char const*,int,struct object_id*,int ) ;
 struct commit* FUNC_1 (struct repository*,struct object_id*) ;
 int FUNC_2 (struct object_id*,int *) ;
 scalar_t__ FUNC_3 (struct commit*) ;

__attribute__((used)) static enum get_oid_result FUNC_4(struct repository *VAR_3,
         const char *VAR_4, int VAR_5,
         struct object_id *VAR_6,
         int VAR_7)
{
 struct object_id VAR_8;
 struct commit *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8, VAR_1);
 if (VAR_10)
  return VAR_10;
 VAR_9 = FUNC_1(VAR_3, &VAR_8);
 if (!VAR_9)
  return VAR_2;

 while (VAR_7--) {
  if (FUNC_3(VAR_9) || !VAR_9->parents)
   return VAR_2;
  VAR_9 = VAR_9->parents->item;
 }
 FUNC_2(VAR_6, &VAR_9->object.oid);
 return VAR_0;
}
