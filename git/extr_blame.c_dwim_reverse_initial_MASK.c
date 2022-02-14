
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* objects; } ;
struct rev_info {TYPE_2__ pending; int repo; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit {int object; } ;
struct TYPE_3__ {char* name; struct object* item; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rev_info*,int *,char*) ;
 struct object* FUNC_1 (int ,struct object*,int *,int ) ;
 struct commit* FUNC_2 (int ,struct object_id*,int) ;
 int FUNC_3 (char*,int ,struct object_id*,int *) ;

__attribute__((used)) static struct commit *FUNC_4(struct rev_info *VAR_3,
        const char **VAR_4)
{





 struct object *VAR_5;
 struct commit *VAR_6;
 struct object_id VAR_7;

 if (VAR_3->pending.nr != 1)
  return ((void*)0);


 VAR_5 = VAR_3->pending.objects[0].item;
 VAR_5 = FUNC_1(VAR_3->repo, VAR_5, ((void*)0), 0);
 if (VAR_5->type != VAR_0)
  return ((void*)0);


 if (!FUNC_3("HEAD", VAR_1, &VAR_7, ((void*)0)))
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_3->repo,
           &VAR_7, 1);
 if (!VAR_6)
  return ((void*)0);


 VAR_5->flags |= VAR_2;
 FUNC_0(VAR_3, &VAR_6->object, "HEAD");

 if (VAR_4)
  *VAR_4 = VAR_3->pending.objects[0].name;
 return (struct commit *)VAR_5;
}
