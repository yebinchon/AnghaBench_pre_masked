
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct branch_info {int name; } ;
struct branch {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 struct branch* FUNC_0 (int ) ;
 int FUNC_1 (struct branch*,struct strbuf*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct branch_info *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct branch *VAR_5 = FUNC_0(VAR_3->name);

 if (!FUNC_1(VAR_5, &VAR_4, VAR_0))
  return;
 FUNC_2(VAR_4.buf, VAR_2);
 FUNC_3(&VAR_4);
}
