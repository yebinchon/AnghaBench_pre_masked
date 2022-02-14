
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dev; } ;
struct st33zp24_dev {int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recv ) (int ,int ,int *,int) ;} ;


 int VAR_0 ;
 struct st33zp24_dev* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_1)
{
 struct st33zp24_dev *VAR_2 = FUNC_0(&VAR_1->dev);
 u8 VAR_3;

 VAR_2->ops->recv(VAR_2->phy_id, VAR_0, &VAR_3, 1);
 return VAR_3;
}
