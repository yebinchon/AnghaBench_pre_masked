
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct usnic_fwd_dev {struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 (struct usnic_fwd_dev*,int,int ,int*,int*) ;

int FUNC_4(struct usnic_fwd_dev *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 u64 VAR_6, VAR_7;
 struct net_device *VAR_8;

 VAR_8 = VAR_2->netdev;
 VAR_6 = VAR_4;
 VAR_7 = VAR_1;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_0,
   &VAR_6, &VAR_7);
 if (VAR_5) {
  FUNC_2("PF %s VNIC Index %u RQ Index: %u DISABLE Failed with status %d",
    FUNC_0(VAR_8),
    VAR_3,
    VAR_4,
    VAR_5);
 } else {
  FUNC_1("PF %s VNIC Index %u RQ Index: %u DISABLED",
    FUNC_0(VAR_8),
    VAR_3,
    VAR_4);
 }

 return VAR_5;
}
