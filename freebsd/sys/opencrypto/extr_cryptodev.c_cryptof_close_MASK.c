
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {struct fcrypt* f_data; } ;
struct fcrypt {int csessions; } ;
struct csession {int dummy; } ;


 int VAR_0 ;
 struct csession* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct csession*,int ) ;
 int FUNC_2 (struct csession*) ;
 int FUNC_3 (struct fcrypt*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, struct thread *VAR_3)
{
 struct fcrypt *VAR_4 = VAR_2->f_data;
 struct csession *VAR_5;

 while ((VAR_5 = FUNC_0(&VAR_4->csessions))) {
  FUNC_1(&VAR_4->csessions, VAR_5, VAR_1);
  FUNC_2(VAR_5);
 }
 FUNC_3(VAR_4, VAR_0);
 VAR_2->f_data = ((void*)0);
 return 0;
}
