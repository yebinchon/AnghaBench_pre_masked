
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_event {int cpu; } ;
struct cn_msg {scalar_t__ data; scalar_t__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cn_msg*,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct cn_msg *VAR_3)
{
 FUNC_2();

 VAR_3->seq = FUNC_0(VAR_2) - 1;
 ((struct proc_event *)VAR_3->data)->cpu = FUNC_4();







 FUNC_1(VAR_3, 0, VAR_0, VAR_1);

 FUNC_3();
}
