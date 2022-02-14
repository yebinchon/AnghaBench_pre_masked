
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcptw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void
FUNC_6(void)
{

 VAR_1 = FUNC_4("tcptw", sizeof(struct tcptw),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0, 0);
 FUNC_1("net.inet.tcp.maxtcptw", &VAR_4);
 if (VAR_4 == 0)
  FUNC_5(VAR_1, FUNC_3());
 else
  FUNC_5(VAR_1, VAR_4);
 FUNC_0(&VAR_3);
 FUNC_2(VAR_2, "tcptw");
}
