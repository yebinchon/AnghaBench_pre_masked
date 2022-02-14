
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
struct TYPE_3__ {char* name; struct object* item; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct object* FUNC_0 (int ,struct object*,int *,int ) ;
 int FUNC_1 (char*,...) ;
 struct commit* FUNC_2 (struct rev_info*,char const**) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static struct commit *FUNC_4(struct rev_info *VAR_2,
       const char **VAR_3)
{
 int VAR_4;
 struct commit *VAR_5 = ((void*)0);
 const char *VAR_6 = ((void*)0);





 for (VAR_4 = 0; VAR_4 < VAR_2->pending.nr; VAR_4++) {
  struct object *VAR_7 = VAR_2->pending.objects[VAR_4].item;
  if (!(VAR_7->flags & VAR_1))
   continue;
  VAR_7 = FUNC_0(VAR_2->repo, VAR_7, ((void*)0), 0);
  if (VAR_7->type != VAR_0)
   FUNC_1("Non commit %s?", VAR_2->pending.objects[VAR_4].name);
  if (VAR_5)
   FUNC_1("More than one commit to dig up from, %s and %s?",
       VAR_2->pending.objects[VAR_4].name, VAR_6);
  VAR_5 = (struct commit *) VAR_7;
  VAR_6 = VAR_2->pending.objects[VAR_4].name;
 }

 if (!VAR_6)
  VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (!VAR_6)
  FUNC_1("No commit to dig up from?");

 if (VAR_3)
  *VAR_3 = FUNC_3(VAR_6);
 return VAR_5;
}
