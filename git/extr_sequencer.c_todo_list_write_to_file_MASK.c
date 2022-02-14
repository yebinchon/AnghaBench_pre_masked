
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_list {int dummy; } ;
struct strbuf {int len; int buf; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int ,char const*,char const*,struct strbuf*) ;
 int FUNC_1 (struct todo_list*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct repository*,struct todo_list*,struct strbuf*,int,unsigned int) ;
 int FUNC_4 (int ,int ,char const*,int ) ;

int FUNC_5(struct repository *VAR_3, struct todo_list *VAR_4,
       const char *VAR_5, const char *VAR_6,
       const char *VAR_7, int VAR_8, unsigned VAR_9)
{
 int VAR_10;
 struct strbuf VAR_11 = VAR_0;

 FUNC_3(VAR_3, VAR_4, &VAR_11, VAR_8, VAR_9);
 if (VAR_9 & VAR_1)
  FUNC_0(VAR_9 & VAR_2, FUNC_1(VAR_4),
     VAR_6, VAR_7, &VAR_11);

 VAR_10 = FUNC_4(VAR_11.buf, VAR_11.len, VAR_5, 0);
 FUNC_2(&VAR_11);

 return VAR_10;
}
