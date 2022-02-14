
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct elan_tp_data {TYPE_2__* client; TYPE_1__* ops; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* write_fw_block ) (TYPE_2__*,int const*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (TYPE_2__*,int const*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct elan_tp_data *VAR_1,
          const u8 *VAR_2, u16 VAR_3, int VAR_4)
{
 int VAR_5 = VAR_0;
 int VAR_6;

 do {
  VAR_6 = VAR_1->ops->write_fw_block(VAR_1->client,
        VAR_2, VAR_3, VAR_4);
  if (!VAR_6)
   return 0;

  FUNC_0(&VAR_1->client->dev,
   "IAP retrying page %d (error: %d)\n", VAR_4, VAR_6);
 } while (--VAR_5 > 0);

 return VAR_6;
}
