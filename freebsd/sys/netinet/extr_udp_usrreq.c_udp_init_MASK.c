
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int *,int ,int ,char*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(void)
{
 FUNC_1(&VAR_5, "udp", &VAR_4, VAR_2, VAR_2,
     "udp_inpcb", VAR_9, VAR_1);
 VAR_6 = FUNC_2("udpcb", sizeof(struct udpcb),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_3, 0);
 FUNC_3(VAR_6, VAR_7);
 FUNC_4(VAR_6, "kern.ipc.maxsockets limit reached");
 FUNC_0(VAR_8, VAR_10, ((void*)0),
     VAR_0);
}
