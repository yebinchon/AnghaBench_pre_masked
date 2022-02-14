
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct usnic_fwd_dev {int name; int lock; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int,int,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct usnic_fwd_dev *VAR_2, int VAR_3,
     enum vnic_devcmd_cmd VAR_4, u64 *VAR_5,
     u64 *VAR_6)
{
 int VAR_7;
 struct net_device *VAR_8 = VAR_2->netdev;

 FUNC_1(&VAR_2->lock);

 VAR_7 = FUNC_0(VAR_8,
   VAR_3,
   VAR_4,
   VAR_5, VAR_6,
   1000);
 if (VAR_7) {
  if (VAR_7 == VAR_1 && VAR_4 == VAR_0) {
   FUNC_2("Dev %s vnic idx %u cmd %u already deleted",
     VAR_2->name, VAR_3, VAR_4);
  } else {
   FUNC_3("Dev %s vnic idx %u cmd %u failed with status %d\n",
     VAR_2->name, VAR_3, VAR_4,
     VAR_7);
  }
 } else {
  FUNC_2("Dev %s vnic idx %u cmd %u success",
    VAR_2->name, VAR_3, VAR_4);
 }

 return VAR_7;
}
