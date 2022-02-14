
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,int *,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char const**) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, int VAR_2, uint64_t VAR_3,
         int VAR_4, const char *VAR_5, const char **VAR_6)
{
 const char *VAR_7 = "exec";
 struct strbuf VAR_8 = VAR_0;

 FUNC_3(&VAR_8, "id:%d ", VAR_4);
 FUNC_4(&VAR_8, "argv:[");
 if (VAR_5) {
  FUNC_4(&VAR_8, VAR_5);
  if (VAR_6[0])
   FUNC_2(&VAR_8, ' ');
 }
 FUNC_1(&VAR_8, VAR_6);
 FUNC_2(&VAR_8, ']');

 FUNC_0(VAR_1, VAR_2, VAR_7, ((void*)0), &VAR_3,
    ((void*)0), ((void*)0), &VAR_8);
 FUNC_5(&VAR_8);
}
