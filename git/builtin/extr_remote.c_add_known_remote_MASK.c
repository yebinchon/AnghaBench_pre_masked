
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote {int name; } ;
struct known_remotes {struct known_remote* list; TYPE_1__* to_delete; } ;
struct known_remote {struct known_remote* next; struct remote* remote; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;
 struct known_remote* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct remote *VAR_0, void *VAR_1)
{
 struct known_remotes *VAR_2 = VAR_1;
 struct known_remote *VAR_3;

 if (!FUNC_0(VAR_2->to_delete->name, VAR_0->name))
  return 0;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->remote = VAR_0;
 VAR_3->next = VAR_2->list;
 VAR_2->list = VAR_3;
 return 0;
}
