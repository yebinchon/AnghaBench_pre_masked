
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {long* args; int nlh; } ;
struct drbd_resource {int kref; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct drbd_resource* FUNC_4 (char const*) ;
 struct nlattr* FUNC_5 (int,struct nlattr*,int ) ;
 int FUNC_6 (struct sk_buff*,struct netlink_callback*) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (struct nlattr*) ;
 struct nlattr* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,unsigned int const) ;
 int FUNC_11 (int ,unsigned int const) ;

int FUNC_12(struct sk_buff *VAR_8, struct netlink_callback *VAR_9)
{
 const unsigned VAR_10 = VAR_3 + VAR_4;
 struct nlattr *VAR_11;
 const char *VAR_12;
 struct drbd_resource *VAR_13;
 int VAR_14;


 if (VAR_9->args[0]) {


  if (VAR_9->args[2] && VAR_9->args[2] != VAR_9->args[0])
   return 0;
  goto dump;
 }



 VAR_11 = FUNC_9(FUNC_10(VAR_9->nlh, VAR_10),
   FUNC_11(VAR_9->nlh, VAR_10),
   VAR_0);


 if (!VAR_11)
  goto dump;
 VAR_14 = FUNC_0(VAR_6) - 1;
 VAR_11 = FUNC_5(VAR_14, VAR_11, FUNC_3(VAR_5));
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 if (!VAR_11)
  return -VAR_1;
 VAR_12 = FUNC_8(VAR_11);
 if (!*VAR_12)
  return -VAR_2;
 VAR_13 = FUNC_4(VAR_12);
 if (!VAR_13)
  return -VAR_2;

 FUNC_7(&VAR_13->kref, VAR_7);



 VAR_9->args[0] = (long)VAR_13;

 VAR_9->args[2] = (long)VAR_13;

dump:
 return FUNC_6(VAR_8, VAR_9);
}
