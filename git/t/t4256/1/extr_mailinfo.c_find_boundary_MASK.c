
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct mailinfo {scalar_t__* content_top; int input; } ;


 scalar_t__ FUNC_0 (struct mailinfo*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_2(struct mailinfo *VAR_0, struct strbuf *VAR_1)
{
 while (!FUNC_1(VAR_1, VAR_0->input)) {
  if (*(VAR_0->content_top) && FUNC_0(VAR_0, VAR_1))
   return 1;
 }
 return 0;
}
