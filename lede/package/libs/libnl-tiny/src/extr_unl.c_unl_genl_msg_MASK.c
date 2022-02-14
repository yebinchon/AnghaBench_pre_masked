
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unl {int family; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nl_msg*,int ,int ,int ,int ,int,int,int ) ;
 struct nl_msg* FUNC_2 () ;

struct nl_msg *FUNC_3(struct unl *VAR_3, int VAR_4, bool VAR_5)
{
 struct nl_msg *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  goto out;

 if (VAR_5)
  VAR_7 |= VAR_0;

 FUNC_1(VAR_6, VAR_1, VAR_2,
      FUNC_0(VAR_3->family), 0, VAR_7, VAR_4, 0);

out:
 return VAR_6;
}
