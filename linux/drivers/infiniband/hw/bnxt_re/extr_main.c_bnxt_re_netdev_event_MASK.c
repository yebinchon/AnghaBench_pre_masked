
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int name; } ;
struct bnxt_re_work {unsigned long event; int work; struct net_device* vlan_dev; struct bnxt_re_dev* rdev; } ;
struct bnxt_re_dev {int sched_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;


 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bnxt_re_dev**,struct net_device*) ;
 int FUNC_4 (struct bnxt_re_dev*) ;
 struct bnxt_re_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct bnxt_re_dev*) ;
 int FUNC_7 (struct bnxt_re_dev*) ;
 int FUNC_8 (struct bnxt_re_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bnxt_re_work* FUNC_9 (int,int ) ;
 struct net_device* FUNC_10 (void*) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int ,int *) ;
 struct net_device* FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct notifier_block *VAR_5,
    unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8, *VAR_9 = FUNC_10(VAR_7);
 struct bnxt_re_work *VAR_10;
 struct bnxt_re_dev *VAR_11;
 int VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_8 = FUNC_13(VAR_9);
 if (!VAR_8)
  VAR_8 = VAR_9;

 VAR_11 = FUNC_5(VAR_8);
 if (!VAR_11 && VAR_6 != 129)
  goto exit;
 if (VAR_8 != VAR_9)
  goto exit;

 switch (VAR_6) {
 case 129:
  if (VAR_11)
   break;
  VAR_12 = FUNC_3(&VAR_11, VAR_8);
  if (VAR_12 == -VAR_0)
   break;
  if (VAR_12) {
   FUNC_11("Failed to register with the device %s: %#x\n",
          VAR_8->name, VAR_12);
   break;
  }
  FUNC_7(VAR_11);
  VAR_13 = 1;
  break;

 case 128:



  if (FUNC_2(&VAR_11->sched_count) > 0)
   goto exit;
  FUNC_6(VAR_11);
  FUNC_8(VAR_11);
  FUNC_4(VAR_11);
  break;

 default:
  VAR_13 = 1;
  break;
 }
 if (VAR_13) {

  VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_1);
  if (VAR_10) {
   VAR_10->rdev = VAR_11;
   VAR_10->event = VAR_6;
   VAR_10->vlan_dev = (VAR_8 == VAR_9 ?
          ((void*)0) : VAR_9);
   FUNC_0(&VAR_10->work, VAR_3);
   FUNC_1(&VAR_11->sched_count);
   FUNC_12(VAR_4, &VAR_10->work);
  }
 }

exit:
 return VAR_2;
}
