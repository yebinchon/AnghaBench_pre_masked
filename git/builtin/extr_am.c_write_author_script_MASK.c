
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct am_state {int author_date; int author_email; int author_name; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct am_state const*,char*,int ) ;

__attribute__((used)) static void FUNC_5(const struct am_state *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 FUNC_2(&VAR_2, "GIT_AUTHOR_NAME=");
 FUNC_0(&VAR_2, VAR_1->author_name);
 FUNC_1(&VAR_2, '\n');

 FUNC_2(&VAR_2, "GIT_AUTHOR_EMAIL=");
 FUNC_0(&VAR_2, VAR_1->author_email);
 FUNC_1(&VAR_2, '\n');

 FUNC_2(&VAR_2, "GIT_AUTHOR_DATE=");
 FUNC_0(&VAR_2, VAR_1->author_date);
 FUNC_1(&VAR_2, '\n');

 FUNC_4(VAR_1, "author-script", VAR_2.buf);

 FUNC_3(&VAR_2);
}
