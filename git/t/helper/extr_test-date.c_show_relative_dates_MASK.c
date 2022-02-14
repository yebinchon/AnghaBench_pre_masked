
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (int ,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char **VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 for (; *VAR_1; VAR_1++) {
  time_t VAR_3 = FUNC_0(*VAR_1);
  FUNC_2(VAR_3, &VAR_2);
  FUNC_1("%s -> %s\n", *VAR_1, VAR_2.buf);
 }
 FUNC_3(&VAR_2);
}
