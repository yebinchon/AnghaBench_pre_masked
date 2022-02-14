
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int path; int name; } ;
struct strbuf {int * buf; } ;
struct repository {char* submodule_prefix; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct repository*,int *,int *) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct strbuf*,struct repository*,char*,int ) ;
 int FUNC_3 (struct strbuf*,struct repository*,char*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 char* FUNC_5 (char*,char*,int ) ;

int FUNC_6(struct repository *VAR_1,
   struct repository *VAR_2,
   const struct submodule *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (!VAR_3) {
  VAR_6 = -1;
  goto out;
 }

 FUNC_3(&VAR_4, VAR_2, "%s/.git", VAR_3->path);
 FUNC_3(&VAR_5, VAR_2, "%s", VAR_3->path);

 if (FUNC_0(VAR_1, VAR_4.buf, VAR_5.buf)) {







  FUNC_4(&VAR_4);
  FUNC_2(&VAR_4, VAR_2,
         "modules/%s", VAR_3->name);

  if (FUNC_0(VAR_1, VAR_4.buf, ((void*)0))) {
   VAR_6 = -1;
   goto out;
  }
 }

 VAR_1->submodule_prefix = FUNC_5("%s%s/",
         VAR_2->submodule_prefix ?
         VAR_2->submodule_prefix :
         "", VAR_3->path);

out:
 FUNC_1(&VAR_4);
 FUNC_1(&VAR_5);
 return VAR_6;
}
