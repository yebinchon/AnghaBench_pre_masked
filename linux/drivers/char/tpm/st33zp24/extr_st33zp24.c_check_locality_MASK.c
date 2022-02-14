
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dev; } ;
struct st33zp24_dev {int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recv ) (int ,int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct st33zp24_dev* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static bool FUNC_2(struct tpm_chip *VAR_3)
{
 struct st33zp24_dev *VAR_4 = FUNC_0(&VAR_3->dev);
 u8 VAR_5;
 u8 VAR_6;

 VAR_6 = VAR_4->ops->recv(VAR_4->phy_id, VAR_0, &VAR_5, 1);
 if (VAR_6 && (VAR_5 &
  (VAR_1 | VAR_2)) ==
  (VAR_1 | VAR_2))
  return 1;

 return 0;
}
