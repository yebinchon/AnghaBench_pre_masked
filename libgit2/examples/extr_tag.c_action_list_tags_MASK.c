
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int repo; TYPE_1__* opts; } ;
typedef TYPE_2__ tag_state ;
struct TYPE_10__ {size_t count; int * strings; int member_0; } ;
typedef TYPE_3__ git_strarray ;
struct TYPE_8__ {char* pattern; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char const*,int ) ;

__attribute__((used)) static void FUNC_4(tag_state *VAR_0)
{
 const char *VAR_1 = VAR_0->opts->pattern;
 git_strarray VAR_2 = {0};
 size_t VAR_3;

 FUNC_0(FUNC_3(&VAR_2, VAR_1 ? VAR_1 : "*", VAR_0->repo),
   "Unable to get list of tags", ((void*)0));

 for(VAR_3 = 0; VAR_3 < VAR_2.count; VAR_3++) {
  FUNC_1(VAR_2.strings[VAR_3], VAR_0);
 }

 FUNC_2(&VAR_2);
}
