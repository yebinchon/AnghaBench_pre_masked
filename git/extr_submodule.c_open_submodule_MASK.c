
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int submodule_prefix; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*) ;
 scalar_t__ FUNC_1 (struct repository*,int ,int *) ;
 int FUNC_2 (struct strbuf*) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*) ;
 struct repository* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static struct repository *FUNC_6(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 struct repository *VAR_3 = FUNC_4(sizeof(*VAR_3));

 if (FUNC_3(&VAR_2, VAR_1) || FUNC_1(VAR_3, VAR_2.buf, ((void*)0))) {
  FUNC_2(&VAR_2);
  FUNC_0(VAR_3);
  return ((void*)0);
 }


 VAR_3->submodule_prefix = FUNC_5(VAR_1);

 FUNC_2(&VAR_2);
 return VAR_3;
}
