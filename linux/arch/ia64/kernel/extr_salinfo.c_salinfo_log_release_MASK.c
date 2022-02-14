
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_data {scalar_t__ state; scalar_t__ open; int * oemdata; int * log_buffer; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct salinfo_data* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct salinfo_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->state == VAR_0) {
  FUNC_3(VAR_4->log_buffer);
  FUNC_3(VAR_4->oemdata);
  VAR_4->log_buffer = ((void*)0);
  VAR_4->oemdata = ((void*)0);
 }
 FUNC_1(&VAR_1);
 VAR_4->open = 0;
 FUNC_2(&VAR_1);
 return 0;
}
