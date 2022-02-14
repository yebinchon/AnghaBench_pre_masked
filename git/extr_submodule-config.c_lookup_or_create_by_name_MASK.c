
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submodule_cache {int dummy; } ;
struct TYPE_2__ {int * command; int type; } ;
struct submodule {int recommend_shallow; int gitmodules_oid; int * branch; int * ignore; int fetch_recurse; TYPE_1__ update_strategy; int * url; int * path; int name; } ;
struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct submodule_cache*,struct submodule*) ;
 struct submodule* FUNC_1 (struct submodule_cache*,struct object_id const*,char const*) ;
 int FUNC_2 (int *,struct object_id const*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*,int *) ;
 struct submodule* FUNC_5 (int) ;

__attribute__((used)) static struct submodule *FUNC_6(struct submodule_cache *VAR_3,
  const struct object_id *VAR_4, const char *VAR_5)
{
 struct submodule *VAR_6;
 struct strbuf VAR_7 = VAR_2;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(sizeof(*VAR_6));

 FUNC_3(&VAR_7, VAR_5);
 VAR_6->name = FUNC_4(&VAR_7, ((void*)0));

 VAR_6->path = ((void*)0);
 VAR_6->url = ((void*)0);
 VAR_6->update_strategy.type = VAR_1;
 VAR_6->update_strategy.command = ((void*)0);
 VAR_6->fetch_recurse = VAR_0;
 VAR_6->ignore = ((void*)0);
 VAR_6->branch = ((void*)0);
 VAR_6->recommend_shallow = -1;

 FUNC_2(&VAR_6->gitmodules_oid, VAR_4);

 FUNC_0(VAR_3, VAR_6);

 return VAR_6;
}
