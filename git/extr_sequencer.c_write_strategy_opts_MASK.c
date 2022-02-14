
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct replay_opts {int xopts_nr; int * xopts; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct strbuf*,char*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct replay_opts *VAR_1)
{
 int VAR_2;
 struct strbuf VAR_3 = VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->xopts_nr; ++VAR_2)
  FUNC_1(&VAR_3, " --%s", VAR_1->xopts[VAR_2]);

 FUNC_3(FUNC_0(), "%s\n", VAR_3.buf);
 FUNC_2(&VAR_3);
}
