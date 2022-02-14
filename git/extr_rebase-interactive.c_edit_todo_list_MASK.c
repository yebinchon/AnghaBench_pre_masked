
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int buf; } ;
struct todo_list {TYPE_1__ buf; } ;
struct repository {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__*,int *) ;
 char* FUNC_5 () ;
 char* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct repository*,int ,struct todo_list*) ;
 scalar_t__ FUNC_9 (struct repository*,struct todo_list*,char const*,char const*,char const*,int,unsigned int) ;

int FUNC_10(struct repository *VAR_2, struct todo_list *VAR_3,
     struct todo_list *VAR_4, const char *VAR_5,
     const char *VAR_6, unsigned VAR_7)
{
 const char *VAR_8 = FUNC_5();
 unsigned VAR_9 = VAR_5 && VAR_6;




 if (!VAR_9)
  FUNC_8(VAR_2, VAR_3->buf.buf, VAR_3);

 if (FUNC_9(VAR_2, VAR_3, VAR_8, VAR_5, VAR_6,
        -1, VAR_7 | VAR_1 | VAR_0))
  return FUNC_3(FUNC_0("could not write '%s'"), VAR_8);

 if (VAR_9 && FUNC_1(FUNC_6(), VAR_8, 0666))
  return FUNC_2(FUNC_0("could not copy '%s' to '%s'."), VAR_8,
        FUNC_6());

 if (FUNC_4(VAR_8, &VAR_4->buf, ((void*)0)))
  return -2;

 FUNC_7(&VAR_4->buf, 1);
 if (VAR_9 && VAR_4->buf.len == 0)
  return -3;



 if (!VAR_9)
  return FUNC_8(VAR_2, VAR_4->buf.buf, VAR_4);

 return 0;
}
