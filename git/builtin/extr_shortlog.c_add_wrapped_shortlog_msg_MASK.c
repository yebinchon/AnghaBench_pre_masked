
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct shortlog {int wrap; int in2; int in1; } ;


 int FUNC_0 (struct strbuf*,char const*,int ,int ,int ) ;
 int FUNC_1 (struct strbuf*,char) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0, const char *VAR_1,
         const struct shortlog *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->in1, VAR_2->in2, VAR_2->wrap);
 FUNC_1(VAR_0, '\n');
}
