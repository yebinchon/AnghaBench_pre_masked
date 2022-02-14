
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct branch {TYPE_1__** merge; int name; int refname; } ;
struct TYPE_2__ {char const* dst; int src; } ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (struct strbuf*,int ,...) ;
 int FUNC_2 (int ) ;

const char *FUNC_3(struct branch *VAR_0, struct strbuf *VAR_1)
{
 if (!VAR_0)
  return FUNC_1(VAR_1, FUNC_0("HEAD does not point to a branch"));

 if (!VAR_0->merge || !VAR_0->merge[0]) {





  if (!FUNC_2(VAR_0->refname))
   return FUNC_1(VAR_1, FUNC_0("no such branch: '%s'"),
      VAR_0->name);
  return FUNC_1(VAR_1,
     FUNC_0("no upstream configured for branch '%s'"),
     VAR_0->name);
 }

 if (!VAR_0->merge[0]->dst)
  return FUNC_1(VAR_1,
     FUNC_0("upstream branch '%s' not stored as a remote-tracking branch"),
     VAR_0->merge[0]->src);

 return VAR_0->merge[0]->dst;
}
