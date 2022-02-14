
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct file_priv {int timeout_work; } ;


 int VAR_0 ;
 struct file_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*,int ) ;
 struct file_priv* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct file_priv *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_1("TPM user space timeout is deprecated (pid=%d)\n",
  FUNC_3(VAR_0));

 FUNC_2(&VAR_4->timeout_work);
}
