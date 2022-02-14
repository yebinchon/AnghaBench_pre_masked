
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int path; } ;
struct strbuf {int buf; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*) ;
 scalar_t__ FUNC_1 (struct repository*,int ,int *) ;
 scalar_t__ FUNC_2 (struct repository*,struct repository*,struct submodule const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,struct repository*,char*,int ) ;
 struct repository* FUNC_5 (int) ;

__attribute__((used)) static struct repository *FUNC_6(struct repository *VAR_1,
       const struct submodule *VAR_2)
{
 struct repository *VAR_3 = FUNC_5(sizeof(*VAR_3));

 if (FUNC_2(VAR_3, VAR_1, VAR_2)) {





  struct strbuf VAR_4 = VAR_0;
  FUNC_4(&VAR_4, VAR_1, "%s/.git", VAR_2->path);
  if (FUNC_1(VAR_3, VAR_4.buf, ((void*)0))) {
   FUNC_3(&VAR_4);
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  FUNC_3(&VAR_4);
 }

 return VAR_3;
}
