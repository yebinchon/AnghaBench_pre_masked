
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; void* last_measurement; void* sampling_rate; int reg; } ;
struct TYPE_5__ {int lock; void* last_measurement; void* sampling_rate; int reg; } ;
struct vcnl4000_data {int rev; int al_scale; TYPE_2__ vcnl4200_ps; TYPE_1__ vcnl4200_al; TYPE_3__* client; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct vcnl4000_data *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_7->client, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_8 & 0xff;

 if (VAR_9 != 128) {
  VAR_8 = FUNC_1(VAR_7->client, VAR_1);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = VAR_8 & 0xff;

  if (VAR_9 != 129)
   return -VAR_0;
 }

 FUNC_0(&VAR_7->client->dev, "device id 0x%x", VAR_9);

 VAR_7->rev = (VAR_8 >> 8) & 0xf;


 VAR_8 = FUNC_2(VAR_7->client, VAR_2, 0);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_7->client, VAR_5, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->al_scale = 24000;
 VAR_7->vcnl4200_al.reg = VAR_3;
 VAR_7->vcnl4200_ps.reg = VAR_6;
 switch (VAR_9) {
 case 128:


  VAR_7->vcnl4200_al.sampling_rate = FUNC_3(0, 54000 * 1000);
  VAR_7->vcnl4200_ps.sampling_rate = FUNC_3(0, 4200 * 1000);
  break;
 case 129:

  VAR_7->vcnl4200_al.sampling_rate = FUNC_3(0, 100000 * 1000);
  VAR_7->vcnl4200_ps.sampling_rate = FUNC_3(0, 100000 * 1000);
  break;
 }
 VAR_7->vcnl4200_al.last_measurement = FUNC_3(0, 0);
 VAR_7->vcnl4200_ps.last_measurement = FUNC_3(0, 0);
 FUNC_4(&VAR_7->vcnl4200_al.lock);
 FUNC_4(&VAR_7->vcnl4200_ps.lock);

 return 0;
}
