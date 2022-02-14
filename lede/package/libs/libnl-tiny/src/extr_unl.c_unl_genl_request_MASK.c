
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unl_cb ;
struct unl {int sock; } ;
struct nl_msg {int dummy; } ;
struct nl_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nl_cb* FUNC_0 (int ) ;
 int FUNC_1 (struct nl_cb*,int ,int ,int*) ;
 int FUNC_2 (struct nl_cb*) ;
 int FUNC_3 (struct nl_cb*,int ,int ,scalar_t__,void*) ;
 int FUNC_4 (int ,struct nl_cb*) ;
 int FUNC_5 (int ,struct nl_msg*) ;
 int FUNC_6 (struct nl_msg*) ;

int FUNC_7(struct unl *VAR_7, struct nl_msg *VAR_8, unl_cb VAR_9, void *VAR_10)
{
 struct nl_cb *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_1);
 VAR_12 = FUNC_5(VAR_7->sock, VAR_8);
 if (VAR_12 < 0)
  goto out;

 VAR_12 = 1;
 FUNC_1(VAR_11, VAR_1, VAR_5, &VAR_12);
 FUNC_3(VAR_11, VAR_2, VAR_1, VAR_6, &VAR_12);
 FUNC_3(VAR_11, VAR_0, VAR_1, VAR_4, &VAR_12);
 if (VAR_9)
  FUNC_3(VAR_11, VAR_3, VAR_1, VAR_9, VAR_10);

 while (VAR_12 > 0)
  FUNC_4(VAR_7->sock, VAR_11);

out:
 FUNC_6(VAR_8);
 FUNC_2(VAR_11);
 return VAR_12;
}
