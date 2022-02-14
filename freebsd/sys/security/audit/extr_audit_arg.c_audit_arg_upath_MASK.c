
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int,char*,char*) ;
 char* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_3, int VAR_4, char *VAR_5, char **VAR_6)
{

 if (*VAR_6 == ((void*)0))
  *VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_3, VAR_4, VAR_5, *VAR_6);
}
