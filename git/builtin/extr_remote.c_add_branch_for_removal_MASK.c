
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {char* dst; } ;
struct object_id {int dummy; } ;
struct known_remote {int remote; struct known_remote* next; } ;
struct branches_for_remote {int branches; int skipped; TYPE_1__* keep; int remote; } ;
typedef int refspec ;
struct TYPE_2__ {struct known_remote* list; } ;


 char const* FUNC_0 (char const*) ;
 int FUNC_1 (struct refspec_item*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct refspec_item*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0,
 const struct object_id *VAR_1, int VAR_2, void *VAR_3)
{
 struct branches_for_remote *VAR_4 = VAR_3;
 struct refspec_item VAR_5;
 struct known_remote *VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.dst = (char *)VAR_0;
 if (FUNC_2(VAR_4->remote, &VAR_5))
  return 0;


 for (VAR_6 = VAR_4->keep->list; VAR_6; VAR_6 = VAR_6->next) {
  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.dst = (char *)VAR_0;
  if (!FUNC_2(VAR_6->remote, &VAR_5))
   return 0;
 }


 if (!FUNC_3(VAR_0, "refs/remotes/")) {

  if (FUNC_3(VAR_0, "refs/heads/"))
   FUNC_4(VAR_4->skipped,
        FUNC_0(VAR_0));

  return 0;
 }

 FUNC_4(VAR_4->branches, VAR_0);

 return 0;
}
