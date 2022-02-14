
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct branch_info {int path; int name; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct strbuf*,int ,int ) ;
 int FUNC_1 (struct strbuf*,int *) ;
 int FUNC_2 (struct strbuf*,int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct branch_info *VAR_2)
{
 struct strbuf VAR_3 = VAR_1;

 FUNC_0(&VAR_3, VAR_2->name, VAR_0);
 if (FUNC_3(VAR_3.buf, VAR_2->name))
  VAR_2->name = FUNC_4(VAR_3.buf);
 FUNC_2(&VAR_3, 0, 0, "refs/heads/", 11);
 VAR_2->path = FUNC_1(&VAR_3, ((void*)0));
}
