
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tag {TYPE_1__* tagged; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {struct object_id const oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct commit*,int *) ;
 int VAR_3 ;
 struct object* FUNC_1 (int ,struct object_id const*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_5)
{
 struct object *VAR_6 = FUNC_1(VAR_4, VAR_5);

 while (VAR_6 && VAR_6->type == VAR_2) {
  struct tag *VAR_7 = (struct tag *) VAR_6;
  if (!VAR_7->tagged)
   break;
  VAR_6->flags |= VAR_0;
  VAR_6 = FUNC_1(VAR_4, &VAR_7->tagged->oid);
 }
 if (VAR_6 && VAR_6->type == VAR_1) {
  struct commit *VAR_8 = (struct commit *)VAR_6;
  if (!(VAR_8->object.flags & VAR_0)) {
   VAR_8->object.flags |= VAR_0;
   FUNC_0(VAR_8, &VAR_3);
  }
 }
 return 0;
}
