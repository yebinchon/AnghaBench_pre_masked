
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct remote {int name; int fetch; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*) ;
 char const* FUNC_2 (struct strbuf*,int ,char const*,int ) ;

__attribute__((used)) static const char *FUNC_3(struct remote *VAR_0,
       const char *VAR_1,
       struct strbuf *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_1(&VAR_0->fetch, VAR_1);
 if (!VAR_3)
  return FUNC_2(VAR_2,
     FUNC_0("push destination '%s' on remote '%s' has no local tracking branch"),
     VAR_1, VAR_0->name);
 return VAR_3;
}
