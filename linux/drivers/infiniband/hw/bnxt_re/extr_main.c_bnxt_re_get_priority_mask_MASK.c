
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct dcb_app {int protocol; int selector; } ;
struct bnxt_re_dev {struct net_device* netdev; } ;
typedef int app ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (struct dcb_app*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct bnxt_re_dev *VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;
 struct net_device *VAR_7;
 struct dcb_app VAR_8;

 VAR_7 = VAR_4->netdev;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.selector = VAR_2;
 VAR_8.protocol = VAR_0;
 VAR_6 = FUNC_0(VAR_7, &VAR_8);
 VAR_5 = VAR_6;

 VAR_8.selector = VAR_1;
 VAR_8.protocol = VAR_3;
 VAR_6 = FUNC_0(VAR_7, &VAR_8);
 VAR_5 |= VAR_6;

 return VAR_5;
}
