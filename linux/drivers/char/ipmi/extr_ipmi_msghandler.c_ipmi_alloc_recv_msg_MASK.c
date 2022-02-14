
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_recv_msg {int done; int * user; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ipmi_recv_msg* FUNC_1 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct ipmi_recv_msg *FUNC_2(void)
{
 struct ipmi_recv_msg *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct ipmi_recv_msg), VAR_0);
 if (VAR_3) {
  VAR_3->user = ((void*)0);
  VAR_3->done = VAR_1;
  FUNC_0(&VAR_2);
 }
 return VAR_3;
}
