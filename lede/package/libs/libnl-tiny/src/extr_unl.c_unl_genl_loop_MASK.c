
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unl_cb ;
struct unl {int loop_done; int sock; } ;
struct nl_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nl_cb* FUNC_0 (int ) ;
 int FUNC_1 (struct nl_cb*) ;
 int FUNC_2 (struct nl_cb*,int ,int ,int ,void*) ;
 int FUNC_3 (int ,struct nl_cb*) ;
 int VAR_3 ;

void FUNC_4(struct unl *VAR_4, unl_cb VAR_5, void *VAR_6)
{
 struct nl_cb *VAR_7;

 VAR_7 = FUNC_0(VAR_0);
 VAR_4->loop_done = 0;
 FUNC_2(VAR_7, VAR_1, VAR_0, VAR_3, ((void*)0));
 FUNC_2(VAR_7, VAR_2, VAR_0, VAR_5, VAR_6);

 while (!VAR_4->loop_done)
  FUNC_3(VAR_4->sock, VAR_7);

 FUNC_1(VAR_7);
}
