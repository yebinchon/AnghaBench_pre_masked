
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dev_addr; } ;
struct ib_gid_attr {int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int*) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(const struct ib_gid_attr *VAR_2,
       u16 *VAR_3, u8 *VAR_4)
{
 struct net_device *VAR_5;

 FUNC_4();
 VAR_5 = FUNC_3(VAR_2->ndev);
 if (!VAR_5) {
  FUNC_5();
  return -VAR_0;
 }
 if (VAR_4)
  FUNC_0(VAR_4, VAR_5->dev_addr);
 if (VAR_3) {
  *VAR_3 = 0xffff;
  if (FUNC_1(VAR_5)) {
   *VAR_3 = FUNC_6(VAR_5);
  } else {




   FUNC_2(VAR_2->ndev,
     VAR_1, VAR_3);
  }
 }
 FUNC_5();
 return 0;
}
