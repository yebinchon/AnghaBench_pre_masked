
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct patch {char const* old_name; char const* new_name; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char const*,struct strbuf*,int *,int ) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_1, const char *VAR_2, struct patch *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;

 if (VAR_3->old_name && VAR_3->new_name &&
     FUNC_5(VAR_3->old_name, VAR_3->new_name)) {
  FUNC_2(VAR_3->old_name, &VAR_4, ((void*)0), 0);
  FUNC_3(&VAR_4, " => ");
  FUNC_2(VAR_3->new_name, &VAR_4, ((void*)0), 0);
 } else {
  const char *VAR_5 = VAR_3->new_name;
  if (!VAR_5)
   VAR_5 = VAR_3->old_name;
  FUNC_2(VAR_5, &VAR_4, ((void*)0), 0);
 }
 FUNC_0(VAR_1, VAR_2, VAR_4.buf);
 FUNC_1('\n', VAR_1);
 FUNC_4(&VAR_4);
}
