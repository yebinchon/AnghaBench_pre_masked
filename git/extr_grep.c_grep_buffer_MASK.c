
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {char* buf; unsigned long size; } ;
struct grep_opt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct grep_opt*,struct grep_source*) ;
 int FUNC_1 (struct grep_source*) ;
 int FUNC_2 (struct grep_source*,int ,int *,int *,int *) ;

int FUNC_3(struct grep_opt *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 struct grep_source VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, VAR_0, ((void*)0), ((void*)0), ((void*)0));
 VAR_4.buf = VAR_2;
 VAR_4.size = VAR_3;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);

 FUNC_1(&VAR_4);
 return VAR_5;
}
