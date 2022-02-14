
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* objects; } ;
struct rev_info {TYPE_2__ pending; int repo; } ;
struct object {int flags; scalar_t__ type; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {int name; struct object* item; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct object* FUNC_0 (int ,struct object*,int *,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static struct commit *FUNC_2(struct rev_info *VAR_2)
{
 struct object *VAR_3 = ((void*)0);
 int VAR_4 = -1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->pending.nr; VAR_5++) {
  struct object *VAR_6 = VAR_2->pending.objects[VAR_5].item;
  if (VAR_6->flags & VAR_1)
   continue;
  VAR_6 = FUNC_0(VAR_2->repo, VAR_6, ((void*)0), 0);
  if (VAR_6->type != VAR_0)
   FUNC_1("Non commit %s?", VAR_2->pending.objects[VAR_5].name);
  if (VAR_3)
   FUNC_1("More than one commit to dig from: %s and %s?",
       VAR_2->pending.objects[VAR_5].name,
       VAR_2->pending.objects[VAR_4].name);
  VAR_3 = VAR_6;
  VAR_4 = VAR_5;
 }

 if (!VAR_3)
  FUNC_1("No commit specified?");

 return (struct commit *) VAR_3;
}
