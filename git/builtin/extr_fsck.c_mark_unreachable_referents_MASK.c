
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; scalar_t__ type; int oid; } ;
struct fsck_options {int walk; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct fsck_options VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct object*,int *,struct fsck_options*) ;
 struct object* FUNC_1 (int ,struct object_id const*) ;
 int VAR_4 ;
 int FUNC_2 (int ,struct object*,int,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(const struct object_id *VAR_6)
{
 struct fsck_options VAR_7 = VAR_0;
 struct object *VAR_8 = FUNC_1(VAR_5, VAR_6);

 if (!VAR_8 || !(VAR_8->flags & VAR_1))
  return;
 if (VAR_8->flags & VAR_3)
  return;





 if (VAR_8->type == VAR_2) {
  enum object_type VAR_9 = FUNC_3(VAR_5,
       &VAR_8->oid, ((void*)0));
  if (VAR_9 > 0)
   FUNC_2(VAR_5, VAR_8, VAR_9, 0);
 }

 VAR_7.walk = VAR_4;
 FUNC_0(VAR_8, ((void*)0), &VAR_7);
}
