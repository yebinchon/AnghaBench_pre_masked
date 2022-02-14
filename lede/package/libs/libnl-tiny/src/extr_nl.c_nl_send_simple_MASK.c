
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nl_sock*,struct nl_msg*) ;
 struct nl_msg* FUNC_1 (int,int) ;
 int FUNC_2 (struct nl_msg*,void*,size_t,int ) ;
 int FUNC_3 (struct nl_msg*) ;

int FUNC_4(struct nl_sock *VAR_2, int VAR_3, int VAR_4, void *VAR_5,
     size_t VAR_6)
{
 int VAR_7;
 struct nl_msg *VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_5 && VAR_6) {
  VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_6, VAR_1);
  if (VAR_7 < 0)
   goto errout;
 }


 VAR_7 = FUNC_0(VAR_2, VAR_8);
errout:
 FUNC_3(VAR_8);

 return VAR_7;
}
