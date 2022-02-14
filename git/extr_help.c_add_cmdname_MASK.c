
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {scalar_t__ cnt; struct cmdname** names; int alloc; } ;
struct cmdname {int len; } ;


 int FUNC_0 (struct cmdname**,scalar_t__,int ) ;
 int FUNC_1 (struct cmdname*,char const*,char const*,int) ;

void FUNC_2(struct cmdnames *VAR_0, const char *VAR_1, int VAR_2)
{
 struct cmdname *VAR_3;
 FUNC_1(VAR_3, VAR_1, VAR_1, VAR_2);
 VAR_3->len = VAR_2;

 FUNC_0(VAR_0->names, VAR_0->cnt + 1, VAR_0->alloc);
 VAR_0->names[VAR_0->cnt++] = VAR_3;
}
