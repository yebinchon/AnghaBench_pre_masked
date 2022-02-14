
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {char* buf; int name; } ;
struct grep_opt {unsigned int pre_context; unsigned int last_shown; scalar_t__ funcname; scalar_t__ funcbody; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct grep_opt*,struct grep_source*,char*,char*) ;
 int FUNC_2 (struct grep_opt*,struct grep_source*,char*,unsigned int) ;
 int FUNC_3 (struct grep_opt*,char*,char*,int ,unsigned int,int ,char) ;

__attribute__((used)) static void FUNC_4(struct grep_opt *VAR_0, struct grep_source *VAR_1,
        char *VAR_2, char *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5 = VAR_4, VAR_6 = 1, VAR_7 = 0, VAR_8;
 int VAR_9 = !!VAR_0->funcname, VAR_10 = 0;

 if (VAR_0->pre_context < VAR_4)
  VAR_6 = VAR_4 - VAR_0->pre_context;
 if (VAR_6 <= VAR_0->last_shown)
  VAR_6 = VAR_0->last_shown + 1;
 VAR_8 = VAR_6;
 if (VAR_0->funcbody) {
  if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
   VAR_10 = 1;
  else
   VAR_9 = 1;
  VAR_6 = VAR_0->last_shown + 1;
 }


 while (VAR_2 > VAR_1->buf && VAR_5 > VAR_6) {
  char *VAR_11 = VAR_2;
  char *VAR_12 = --VAR_2;

  while (VAR_2 > VAR_1->buf && VAR_2[-1] != '\n')
   VAR_2--;
  VAR_5--;
  if (VAR_10 && (FUNC_0(VAR_2, VAR_12) ||
           FUNC_1(VAR_0, VAR_1, VAR_2, VAR_12))) {
   VAR_10 = 0;
   VAR_6 = VAR_8;
   if (VAR_5 < VAR_6) {
    VAR_5++;
    VAR_2 = VAR_11;
    break;
   }
  }
  if (VAR_9 && FUNC_1(VAR_0, VAR_1, VAR_2, VAR_12)) {
   VAR_7 = VAR_5;
   VAR_9 = 0;
   if (VAR_0->funcbody)
    VAR_10 = 1;
   else
    VAR_6 = VAR_8;
  }
 }


 if (VAR_0->funcname && VAR_9)
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);


 while (VAR_5 < VAR_4) {
  char *VAR_13 = VAR_2, VAR_14 = (VAR_5 == VAR_7) ? '=' : '-';

  while (*VAR_13 != '\n')
   VAR_13++;
  FUNC_3(VAR_0, VAR_2, VAR_13, VAR_1->name, VAR_5, 0, VAR_14);
  VAR_2 = VAR_13 + 1;
  VAR_5++;
 }
}
