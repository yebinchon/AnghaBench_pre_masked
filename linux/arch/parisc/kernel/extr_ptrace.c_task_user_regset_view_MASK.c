
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset_view {int dummy; } ;
struct user_regs_struct {int dummy; } ;
struct user_fp_struct {int dummy; } ;
struct task_struct {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 struct user_regset_view const VAR_2 ;
 struct user_regset_view const VAR_3 ;

const struct user_regset_view *FUNC_2(struct task_struct *VAR_4)
{
 FUNC_0(sizeof(struct user_regs_struct)/sizeof(long) != VAR_1);
 FUNC_0(sizeof(struct user_fp_struct)/sizeof(__u64) != VAR_0);




 return &VAR_3;
}
