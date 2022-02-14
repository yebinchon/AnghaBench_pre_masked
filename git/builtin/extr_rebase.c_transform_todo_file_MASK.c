
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
 int FUNC_7 (int ,struct todo_list*,char const*,int *,int *,int,unsigned int) ;

__attribute__((used)) static int FUNC_8(unsigned VAR_2)
{
 const char *VAR_3 = FUNC_3();
 struct todo_list VAR_4 = VAR_0;
 int VAR_5;

 if (FUNC_4(&VAR_4.buf, VAR_3, 0) < 0)
  return FUNC_2(FUNC_0("could not read '%s'."), VAR_3);

 if (FUNC_5(VAR_1, VAR_4.buf.buf,
     &VAR_4)) {
  FUNC_6(&VAR_4);
  return FUNC_1(FUNC_0("unusable todo list: '%s'"), VAR_3);
 }

 VAR_5 = FUNC_7(VAR_1, &VAR_4, VAR_3,
          ((void*)0), ((void*)0), -1, VAR_2);
 FUNC_6(&VAR_4);

 if (VAR_5)
  return FUNC_2(FUNC_0("could not write '%s'."), VAR_3);
 return 0;
}
