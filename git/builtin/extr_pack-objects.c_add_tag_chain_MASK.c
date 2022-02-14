
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct tag {TYPE_1__* tagged; TYPE_2__ object; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 struct tag* FUNC_3 (int ,struct object_id const*) ;
 int FUNC_4 (struct object_id const*) ;
 scalar_t__ FUNC_5 (int *,struct object_id const*) ;
 scalar_t__ FUNC_6 (struct tag*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(const struct object_id *VAR_3)
{
 struct tag *VAR_4;
 if (FUNC_5(&VAR_2, VAR_3))
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 while (1) {
  if (!VAR_4 || FUNC_6(VAR_4) || !VAR_4->tagged)
   FUNC_2(FUNC_0("unable to pack objects reachable from tag %s"),
       FUNC_4(VAR_3));

  FUNC_1(&VAR_4->object.oid, VAR_0, ((void*)0), 0);

  if (VAR_4->tagged->type != VAR_0)
   return;

  VAR_4 = (struct tag *)VAR_4->tagged;
 }
}
