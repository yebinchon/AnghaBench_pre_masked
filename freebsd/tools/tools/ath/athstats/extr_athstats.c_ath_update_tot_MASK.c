
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdstat {int dummy; } ;
struct athstatfoo_p {int cur; int total; } ;



__attribute__((used)) static void
FUNC_0(struct bsdstat *VAR_0)
{
 struct athstatfoo_p *VAR_1 = (struct athstatfoo_p *) VAR_0;

 VAR_1->total = VAR_1->cur;
}
