
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {unsigned long timeout_a; int dev; } ;
struct st33zp24_dev {int locality; int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {long (* send ) (int ,int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 struct st33zp24_dev* FUNC_1 (int *) ;
 unsigned long VAR_4 ;
 int FUNC_2 (int ) ;
 long FUNC_3 (int ,int ,int *,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_5)
{
 struct st33zp24_dev *VAR_6 = FUNC_1(&VAR_5->dev);
 unsigned long VAR_7;
 long VAR_8;
 u8 VAR_9;

 if (FUNC_0(VAR_5))
  return VAR_6->locality;

 VAR_9 = VAR_2;
 VAR_8 = VAR_6->ops->send(VAR_6->phy_id, VAR_1, &VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_4 + VAR_5->timeout_a;


 do {
  if (FUNC_0(VAR_5))
   return VAR_6->locality;
  FUNC_2(VAR_3);
 } while (FUNC_4(VAR_4, VAR_7));


 return -VAR_0;
}
