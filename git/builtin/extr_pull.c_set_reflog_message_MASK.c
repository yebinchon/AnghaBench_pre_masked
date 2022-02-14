
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(int VAR_1, const char **VAR_2)
{
 int VAR_3;
 struct strbuf VAR_4 = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_3)
   FUNC_1(&VAR_4, ' ');
  FUNC_2(&VAR_4, VAR_2[VAR_3]);
 }

 FUNC_0("GIT_REFLOG_ACTION", VAR_4.buf, 0);

 FUNC_3(&VAR_4);
}
