
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct file_list*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct file_list *
FUNC_3(void)
{
 struct file_list *VAR_3;

 VAR_3 = (struct file_list *) FUNC_1(1, sizeof *VAR_3);
 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_0, "calloc");
 FUNC_0(&VAR_2, VAR_3, VAR_1);
 return (VAR_3);
}
