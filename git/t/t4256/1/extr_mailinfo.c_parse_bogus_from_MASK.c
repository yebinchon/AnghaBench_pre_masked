
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct mailinfo {TYPE_1__ email; TYPE_1__ name; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void FUNC_5(struct mailinfo *VAR_0, const struct strbuf *VAR_1)
{


 char *VAR_2, *VAR_3;



 if (VAR_0->email.len)
  return;

 VAR_2 = FUNC_4(VAR_1->buf, '<');
 if (!VAR_2)
  return;
 VAR_3 = FUNC_4(VAR_2, '>');
 if (!VAR_3)
  return;

 FUNC_2(&VAR_0->email);
 FUNC_1(&VAR_0->email, VAR_2 + 1, VAR_3 - VAR_2 - 1);

 FUNC_2(&VAR_0->name);
 FUNC_1(&VAR_0->name, VAR_1->buf, VAR_2 - VAR_1->buf);
 FUNC_3(&VAR_0->name);
 FUNC_0(&VAR_0->name, &VAR_0->name, &VAR_0->email);
}
