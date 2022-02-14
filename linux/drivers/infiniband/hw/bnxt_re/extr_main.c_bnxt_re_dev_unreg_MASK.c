
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_re_dev {struct net_device* netdev; struct bnxt_en_dev* en_dev; } ;
struct bnxt_en_dev {int dummy; } ;


 int FUNC_0 (struct bnxt_re_dev*) ;
 int FUNC_1 (struct net_device*,struct bnxt_en_dev*) ;

__attribute__((used)) static void FUNC_2(struct bnxt_re_dev *VAR_0)
{
 struct bnxt_en_dev *VAR_1 = VAR_0->en_dev;
 struct net_device *VAR_2 = VAR_0->netdev;

 FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_1(VAR_2, VAR_1);
}
