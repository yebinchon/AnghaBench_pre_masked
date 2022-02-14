
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote {int name; } ;
struct branch {int refname; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct strbuf*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct remote *VAR_3, struct branch *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 if (!VAR_4)
  FUNC_1(FUNC_0(VAR_1), VAR_3->name);
 FUNC_3(&VAR_5, "%s:%s", VAR_4->refname, VAR_4->refname);
 FUNC_2(&VAR_2, VAR_5.buf);
}
