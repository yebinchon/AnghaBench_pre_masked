
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_collect {scalar_t__ nr; struct commit** commit; int alloc; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct commit**,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 struct commit* FUNC_2 (int ,struct object_id*) ;
 scalar_t__ FUNC_3 (struct commit*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct object_id *VAR_2, struct rev_collect *VAR_3)
{
 struct commit *VAR_4;

 if (FUNC_1(VAR_2))
  return;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4 ||
     (VAR_4->object.flags & VAR_0) ||
     FUNC_3(VAR_4))
  return;

 FUNC_0(VAR_3->commit, VAR_3->nr + 1, VAR_3->alloc);
 VAR_3->commit[VAR_3->nr++] = VAR_4;
 VAR_4->object.flags |= VAR_0;
}
