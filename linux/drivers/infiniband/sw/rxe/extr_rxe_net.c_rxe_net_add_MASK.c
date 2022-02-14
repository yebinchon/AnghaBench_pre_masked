
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int ib_dev; struct net_device* ndev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 struct rxe_dev* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct rxe_dev*,int ,char const*) ;
 int VAR_2 ;

int FUNC_3(const char *VAR_3, struct net_device *VAR_4)
{
 int VAR_5;
 struct rxe_dev *VAR_6 = ((void*)0);

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->ndev = VAR_4;

 VAR_5 = FUNC_2(VAR_6, VAR_4->mtu, VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_6->ib_dev);
  return VAR_5;
 }

 return 0;
}
