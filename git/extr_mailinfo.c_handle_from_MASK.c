
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; char* buf; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mailinfo {TYPE_1__ email; int name; } ;


 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (int *,struct strbuf*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (struct mailinfo*,struct strbuf const*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t) ;
 int FUNC_5 (struct strbuf*,struct strbuf const*) ;
 int FUNC_6 (struct strbuf*,int) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct strbuf*,int) ;
 int FUNC_11 (struct strbuf*) ;
 char* FUNC_12 (char*,char) ;
 size_t FUNC_13 (char*,char*) ;
 int FUNC_14 (struct strbuf*) ;

__attribute__((used)) static void FUNC_15(struct mailinfo *VAR_0, const struct strbuf *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 struct strbuf VAR_4;

 FUNC_6(&VAR_4, VAR_1->len);
 FUNC_5(&VAR_4, VAR_1);

 FUNC_14(&VAR_4);

 VAR_2 = FUNC_12(VAR_4.buf, '@');
 if (!VAR_2) {
  FUNC_3(VAR_0, VAR_1);
  goto out;
 }




 if (VAR_0->email.len && FUNC_12(VAR_2 + 1, '@'))
  goto out;




 while (VAR_2 > VAR_4.buf) {
  char VAR_5 = VAR_2[-1];
  if (FUNC_2(VAR_5))
   break;
  if (VAR_5 == '<') {
   VAR_2[-1] = ' ';
   break;
  }
  VAR_2--;
 }
 VAR_3 = FUNC_13(VAR_2, " \n\t\r\v\f>");
 FUNC_9(&VAR_0->email);
 FUNC_4(&VAR_0->email, VAR_2, VAR_3);
 FUNC_8(&VAR_4, VAR_2 - VAR_4.buf, VAR_3 + (VAR_2[VAR_3] ? 1 : 0));
 FUNC_0(&VAR_4);
 FUNC_11(&VAR_4);
 if (VAR_4.buf[0] == '(' && VAR_4.len && VAR_4.buf[VAR_4.len - 1] == ')') {
  FUNC_8(&VAR_4, 0, 1);
  FUNC_10(&VAR_4, VAR_4.len - 1);
 }

 FUNC_1(&VAR_0->name, &VAR_4, &VAR_0->email);
out:
 FUNC_7(&VAR_4);
}
