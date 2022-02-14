
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp_objdir {int path; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct strbuf*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct tmp_objdir*) ;

int FUNC_6(struct tmp_objdir *VAR_1)
{
 struct strbuf VAR_2 = VAR_0, VAR_3 = VAR_0;
 int VAR_4;

 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_2, &VAR_1->path);
 FUNC_3(&VAR_3, FUNC_0());

 VAR_4 = FUNC_1(&VAR_2, &VAR_3);

 FUNC_4(&VAR_2);
 FUNC_4(&VAR_3);

 FUNC_5(VAR_1);
 return VAR_4;
}
