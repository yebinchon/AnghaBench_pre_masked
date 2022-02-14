
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct event*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct event*,int ,int ,int ,struct event*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int * VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_8(int VAR_9, char **VAR_10)
{
 struct event VAR_11;
 if (FUNC_7(VAR_2, VAR_4) == VAR_3)
  return (1);


 if (FUNC_6(VAR_0, VAR_5, 0, VAR_6) == -1)
  return (1);


 FUNC_4();


 FUNC_5(&VAR_11, VAR_6[1], VAR_1, VAR_8, &VAR_11);

 FUNC_2(&VAR_11, ((void*)0));

 FUNC_3();

 return (VAR_7);
}
