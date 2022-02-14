
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {int stdout_to_stderr; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct child_process*,int *,int ,int *,int ,struct strbuf*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct child_process *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4;

 VAR_2->stdout_to_stderr = 1;
 VAR_4 = FUNC_1(VAR_2,
     ((void*)0), 0,
     ((void*)0), 0,
     &VAR_3, 0);

 if (VAR_4)
  FUNC_0(VAR_3.buf, VAR_1);
 FUNC_2(&VAR_3);
 return VAR_4;
}
