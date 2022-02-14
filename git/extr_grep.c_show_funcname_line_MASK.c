
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {char* buf; int name; } ;
struct grep_opt {unsigned int last_shown; } ;


 scalar_t__ FUNC_0 (struct grep_opt*,struct grep_source*,char*,char*) ;
 int FUNC_1 (struct grep_opt*,char*,char*,int ,unsigned int,int ,char) ;

__attribute__((used)) static void FUNC_2(struct grep_opt *VAR_0, struct grep_source *VAR_1,
          char *VAR_2, unsigned VAR_3)
{
 while (VAR_2 > VAR_1->buf) {
  char *VAR_4 = --VAR_2;

  while (VAR_2 > VAR_1->buf && VAR_2[-1] != '\n')
   VAR_2--;
  VAR_3--;

  if (VAR_3 <= VAR_0->last_shown)
   break;

  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4)) {
   FUNC_1(VAR_0, VAR_2, VAR_4, VAR_1->name, VAR_3, 0, '=');
   break;
  }
 }
}
