
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct rev_info {int dummy; } ;
struct commit {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct commit*,struct strbuf*,struct strbuf*) ;
 int FUNC_1 (struct rev_info*,int,int ) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (int ,int ,int ,int ,struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_5(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;
 int VAR_6;

 if (FUNC_0(VAR_2, &VAR_3, &VAR_4) <= 0)
  goto out;

 VAR_6 = FUNC_4(VAR_3.buf, VAR_3.len,
          VAR_4.buf, VAR_4.len,
          &VAR_5, ((void*)0));
 if (VAR_6 && !VAR_5.len)
  FUNC_2(&VAR_5, "No signature\n");

 FUNC_1(VAR_1, VAR_6, VAR_5.buf);

 out:
 FUNC_3(&VAR_5);
 FUNC_3(&VAR_3);
 FUNC_3(&VAR_4);
}
