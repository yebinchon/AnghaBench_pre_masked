
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_list {int buf; } ;


 struct todo_list VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct todo_list*,struct todo_list*,int *,int *,unsigned int) ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int FUNC_6 (struct todo_list*) ;
 scalar_t__ FUNC_7 (int ,struct todo_list*,char const*,int *,int *,int,unsigned int) ;

__attribute__((used)) static int FUNC_8(unsigned VAR_3)
{
 const char *VAR_4 = FUNC_3();
 struct todo_list VAR_5 = VAR_0,
  VAR_6 = VAR_0;
 int VAR_7 = 0;

 if (FUNC_4(&VAR_5.buf, VAR_4, 0) < 0)
  return FUNC_2(FUNC_0("could not read '%s'."), VAR_4);

 FUNC_5(&VAR_5.buf, 1);
 VAR_7 = FUNC_1(VAR_2, &VAR_5, &VAR_6, ((void*)0), ((void*)0), VAR_3);
 if (!VAR_7 && FUNC_7(VAR_2, &VAR_6, VAR_4,
         ((void*)0), ((void*)0), -1, VAR_3 & ~(VAR_1)))
  VAR_7 = FUNC_2(FUNC_0("could not write '%s'"), VAR_4);

 FUNC_6(&VAR_5);
 FUNC_6(&VAR_6);

 return VAR_7;
}
