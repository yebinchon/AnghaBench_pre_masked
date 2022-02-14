
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_user_info {scalar_t__ seq_no; } ;


 int FUNC_0 (struct proc_user_info*) ;
 int FUNC_1 (struct proc_user_info*) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3 (struct proc_user_info *VAR_0, struct proc_user_info *VAR_1) {
  VAR_1->seq_no = VAR_0->seq_no + 1;
  FUNC_0 (VAR_0);
  FUNC_2 ((char *) VAR_0, (char *) VAR_1, 128);
  FUNC_1 (VAR_0);
}
