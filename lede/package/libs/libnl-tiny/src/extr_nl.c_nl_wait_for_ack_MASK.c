
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int s_cb; } ;
struct nl_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nl_cb* FUNC_0 (int ) ;
 int FUNC_1 (struct nl_cb*) ;
 int FUNC_2 (struct nl_cb*,int ,int ,int ,int *) ;
 int FUNC_3 (struct nl_sock*,struct nl_cb*) ;

int FUNC_4(struct nl_sock *VAR_4)
{
 int VAR_5;
 struct nl_cb *VAR_6;

 VAR_6 = FUNC_0(VAR_4->s_cb);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_6, VAR_1, VAR_2, VAR_3, ((void*)0));
 VAR_5 = FUNC_3(VAR_4, VAR_6);
 FUNC_1(VAR_6);

 return VAR_5;
}
