
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int different_commondir; int commondir; int gitdir; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(struct repository *VAR_1,
          const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 FUNC_0(VAR_1->commondir);

 if (VAR_2) {
  VAR_1->different_commondir = 1;
  VAR_1->commondir = FUNC_3(VAR_2);
  return;
 }

 VAR_1->different_commondir = FUNC_1(&VAR_3, VAR_1->gitdir);
 VAR_1->commondir = FUNC_2(&VAR_3, ((void*)0));
}
