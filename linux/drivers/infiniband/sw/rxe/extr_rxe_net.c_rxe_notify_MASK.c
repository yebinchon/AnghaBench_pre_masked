
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int ib_dev; } ;
struct notifier_block {int dummy; } ;
struct net_device {unsigned long name; unsigned long mtu; } ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct net_device* FUNC_2 (void*) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 struct rxe_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct rxe_dev*) ;
 int FUNC_6 (struct rxe_dev*) ;
 int FUNC_7 (struct rxe_dev*,unsigned long) ;
 int FUNC_8 (struct rxe_dev*) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_1,
        unsigned long VAR_2,
        void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_3);
 struct rxe_dev *VAR_5 = FUNC_4(VAR_4);

 if (!VAR_5)
  return VAR_0;

 switch (VAR_2) {
 case 129:
  FUNC_1(&VAR_5->ib_dev);
  break;
 case 128:
  FUNC_6(VAR_5);
  break;
 case 133:
  FUNC_5(VAR_5);
  break;
 case 135:
  FUNC_3("%s changed mtu to %d\n", VAR_4->name, VAR_4->mtu);
  FUNC_7(VAR_5, VAR_4->mtu);
  break;
 case 137:
  FUNC_8(VAR_5);
  break;
 case 130:
 case 131:
 case 136:
 case 134:
 case 132:
 default:
  FUNC_3("ignoring netdev event = %ld for %s\n",
   VAR_2, VAR_4->name);
  break;
 }

 FUNC_0(&VAR_5->ib_dev);
 return VAR_0;
}
