
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct todo_list {TYPE_1__ buf; } ;


 struct todo_list VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,struct todo_list*) ;
 int FUNC_6 (struct todo_list*) ;
 int FUNC_7 (struct todo_list*) ;
 int FUNC_8 (int ,struct todo_list*,char const*,int *,int *,int,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 const char *VAR_2 = FUNC_3();
 struct todo_list VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (FUNC_4(&VAR_3.buf, VAR_2, 0) < 0)
  return FUNC_2(FUNC_0("could not read '%s'."), VAR_2);
 if (FUNC_5(VAR_1, VAR_3.buf.buf,
     &VAR_3)) {
  FUNC_7(&VAR_3);
  return FUNC_1(FUNC_0("unusable todo list: '%s'"), VAR_2);
 }

 VAR_4 = FUNC_6(&VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_8(VAR_1, &VAR_3,
           VAR_2, ((void*)0), ((void*)0), -1, 0);

 FUNC_7(&VAR_3);

 if (VAR_4)
  return FUNC_2(FUNC_0("could not write '%s'."), VAR_2);
 return 0;
}
