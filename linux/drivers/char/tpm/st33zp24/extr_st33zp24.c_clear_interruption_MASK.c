
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st33zp24_dev {int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send ) (int ,int ,int *,int) ;int (* recv ) (int ,int ,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static u8 FUNC_2(struct st33zp24_dev *VAR_1)
{
 u8 VAR_2;

 VAR_1->ops->recv(VAR_1->phy_id, VAR_0, &VAR_2, 1);
 VAR_1->ops->send(VAR_1->phy_id, VAR_0, &VAR_2, 1);
 return VAR_2;
}
