
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 struct net_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct ib_device*,int ,char const*) ;
 int FUNC_4 (struct ib_device*,int ,char const*,struct net_device*) ;

struct net_device *FUNC_5(struct ib_device *VAR_0, u8 VAR_1,
        const char *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3);
  return FUNC_0(VAR_4);
 }






 return VAR_3;
}
