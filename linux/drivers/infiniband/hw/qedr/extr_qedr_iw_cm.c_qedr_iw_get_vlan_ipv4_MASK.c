
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qedr_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct net_device* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_4(struct qedr_dev *VAR_1, u32 *VAR_2)
{
 struct net_device *VAR_3;
 u16 VAR_4 = 0;

 VAR_3 = FUNC_2(&VAR_0, FUNC_1(VAR_2[0]));

 if (VAR_3) {
  VAR_4 = FUNC_3(VAR_3);
  FUNC_0(VAR_3);
 }
 if (VAR_4 == 0xffff)
  VAR_4 = 0;
 return VAR_4;
}
