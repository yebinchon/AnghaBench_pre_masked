
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cs_char* private_data; } ;
struct cs_char {int async_queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct cs_char *VAR_4 = VAR_2->private_data;

 if (FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->async_queue) < 0)
  return -VAR_0;

 return 0;
}
