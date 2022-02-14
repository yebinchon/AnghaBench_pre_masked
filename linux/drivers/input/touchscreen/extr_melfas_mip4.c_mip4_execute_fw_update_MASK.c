
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mip4_ts {TYPE_2__* client; TYPE_1__* input; } ;
struct mip4_bin_tail {int dummy; } ;
struct firmware {int data; } ;
struct TYPE_4__ {int irq; int dev; } ;
struct TYPE_3__ {scalar_t__ users; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mip4_ts*,int ,int ,int ) ;
 int FUNC_4 (struct mip4_ts*,struct firmware const*,int *,int *,struct mip4_bin_tail const**) ;
 int FUNC_5 (struct mip4_ts*) ;
 int FUNC_6 (struct mip4_ts*) ;

__attribute__((used)) static int FUNC_7(struct mip4_ts *VAR_0, const struct firmware *VAR_1)
{
 const struct mip4_bin_tail *VAR_2;
 u32 VAR_3;
 u32 VAR_4;
 int VAR_5 = 3;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_0, VAR_1,
        &VAR_3, &VAR_4, &VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_0->input->users) {
  FUNC_1(VAR_0->client->irq);
 } else {
  VAR_6 = FUNC_6(VAR_0);
  if (VAR_6)
   return VAR_6;
 }


 do {
  VAR_6 = FUNC_3(VAR_0, VAR_1->data, VAR_4, VAR_3);
  if (!VAR_6)
   break;
 } while (--VAR_5);

 if (VAR_6)
  FUNC_0(&VAR_0->client->dev,
   "Failed to flash firmware: %d\n", VAR_6);


 if (VAR_0->input->users)
  FUNC_2(VAR_0->client->irq);
 else
  FUNC_5(VAR_0);

 return VAR_6 ? VAR_6 : 0;
}
