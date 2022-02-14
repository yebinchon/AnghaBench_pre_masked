
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int nr; TYPE_2__* rev; } ;
struct rev_info {TYPE_3__ cmdline; } ;
struct object_id {int dummy; } ;
struct TYPE_5__ {int flags; char* name; TYPE_1__* item; } ;
struct TYPE_4__ {struct object_id oid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct object_id*,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct object_id const*,struct object_id*) ;
 scalar_t__ FUNC_3 (char*,char*,char const**) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(struct rev_info *VAR_1)
{
 int VAR_2, VAR_3 = -1;
 struct object_id VAR_4;
 const struct object_id *VAR_5;
 const char *VAR_6, *VAR_7;
 char *VAR_8, *VAR_9 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1->cmdline.nr; VAR_2++) {
  if (VAR_1->cmdline.rev[VAR_2].flags & VAR_0)
   continue;
  if (VAR_3 < 0)
   VAR_3 = VAR_2;
  else
   return ((void*)0);
 }
 if (VAR_3 < 0)
  return ((void*)0);
 VAR_6 = VAR_1->cmdline.rev[VAR_3].name;
 VAR_5 = &VAR_1->cmdline.rev[VAR_3].item->oid;
 if (FUNC_0(VAR_6, FUNC_4(VAR_6), &VAR_4, &VAR_8) &&
     FUNC_3(VAR_8, "refs/heads/", &VAR_7) &&
     FUNC_2(VAR_5, &VAR_4))
  VAR_9 = FUNC_5(VAR_7);
 FUNC_1(VAR_8);
 return VAR_9;
}
