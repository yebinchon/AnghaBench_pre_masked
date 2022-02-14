
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {unsigned long timeout_d; int dev; } ;
struct st33zp24_dev {int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recv ) (int ,scalar_t__,int*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct st33zp24_dev* FUNC_0 (int *) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int*,int) ;
 int FUNC_3 (int ,scalar_t__,int*,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_4)
{
 struct st33zp24_dev *VAR_5 = FUNC_0(&VAR_4->dev);
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 u8 VAR_9;

 VAR_6 = VAR_3 + VAR_4->timeout_d;
 do {
  VAR_8 = VAR_5->ops->recv(VAR_5->phy_id, VAR_1 + 1,
         &VAR_9, 1);
  if (VAR_8 < 0)
   return -VAR_0;

  VAR_7 = VAR_9;
  VAR_8 = VAR_5->ops->recv(VAR_5->phy_id, VAR_1 + 2,
         &VAR_9, 1);
  if (VAR_8 < 0)
   return -VAR_0;

  VAR_7 |= VAR_9 << 8;
  if (VAR_7)
   return VAR_7;
  FUNC_1(VAR_2);
 } while (FUNC_4(VAR_3, VAR_6));
 return -VAR_0;
}
