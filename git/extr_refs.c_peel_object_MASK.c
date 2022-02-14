
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; int oid; } ;
typedef enum peel_status { ____Placeholder_peel_status } peel_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct object* FUNC_0 (struct object*) ;
 struct object* FUNC_1 (struct object_id const*) ;
 int FUNC_2 (int ,struct object*,int,int ) ;
 int FUNC_3 (int ,struct object_id const*,int *) ;
 int FUNC_4 (struct object_id*,int *) ;
 int VAR_5 ;

enum peel_status FUNC_5(const struct object_id *VAR_6, struct object_id *VAR_7)
{
 struct object *VAR_8 = FUNC_1(VAR_6);

 if (VAR_8->type == VAR_0) {
  int VAR_9 = FUNC_3(VAR_5, VAR_6, ((void*)0));
  if (VAR_9 < 0 || !FUNC_2(VAR_5, VAR_8, VAR_9, 0))
   return VAR_2;
 }

 if (VAR_8->type != VAR_1)
  return VAR_3;

 VAR_8 = FUNC_0(VAR_8);
 if (!VAR_8)
  return VAR_2;

 FUNC_4(VAR_7, &VAR_8->oid);
 return VAR_4;
}
