
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, struct nlattr *VAR_6[],
       struct nlattr *VAR_7[],
       struct netlink_ext_ack *VAR_8)
{
 u16 VAR_9, VAR_10;
 int VAR_11 = 0;

 if (VAR_7[VAR_1]) {
  VAR_9 = FUNC_2(VAR_7[VAR_1]);
  if (VAR_9 == VAR_4)
   VAR_11 = FUNC_0(VAR_5, "datagram\n");
  else if (VAR_9 == VAR_3)
   VAR_11 = FUNC_0(VAR_5, "connected\n");
  else
   VAR_11 = -VAR_0;

  if (VAR_11 < 0)
   goto out_err;
 }

 if (VAR_7[VAR_2]) {
  VAR_10 = FUNC_2(VAR_7[VAR_2]);
  FUNC_1(VAR_5, VAR_10);
 }

out_err:
 return VAR_11;
}
