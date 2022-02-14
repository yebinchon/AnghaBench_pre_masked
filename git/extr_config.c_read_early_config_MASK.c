
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct config_options {int respect_includes; int git_dir; int commondir; int member_0; } ;
typedef int config_fn_t ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,void*,int *,struct config_options*) ;
 int FUNC_1 (struct strbuf*,struct strbuf*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct strbuf*) ;

void FUNC_6(config_fn_t VAR_1, void *VAR_2)
{
 struct config_options VAR_3 = {0};
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;

 VAR_3.respect_includes = 1;

 if (FUNC_4()) {
  VAR_3.commondir = FUNC_2();
  VAR_3.git_dir = FUNC_3();
 } else if (!FUNC_1(&VAR_4, &VAR_5)) {
  VAR_3.commondir = VAR_4.buf;
  VAR_3.git_dir = VAR_5.buf;
 }

 FUNC_0(VAR_1, VAR_2, ((void*)0), &VAR_3);

 FUNC_5(&VAR_4);
 FUNC_5(&VAR_5);
}
