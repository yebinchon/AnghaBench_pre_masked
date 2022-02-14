
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_channel {int id; } ;
struct host1x_cdma {int torndown; } ;
struct host1x {int dev; } ;


 int FUNC_0 (struct host1x*,struct host1x_channel*,int) ;
 int FUNC_1 (struct host1x_cdma*,int ) ;
 struct host1x_channel* FUNC_2 (struct host1x_cdma*) ;
 struct host1x* FUNC_3 (struct host1x_cdma*) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct host1x_cdma *VAR_0, u32 VAR_1)
{
 struct host1x *VAR_2 = FUNC_3(VAR_0);
 struct host1x_channel *VAR_3 = FUNC_2(VAR_0);

 FUNC_4(VAR_2->dev,
  "resuming channel (id %u, DMAGET restart = 0x%x)\n",
  VAR_3->id, VAR_1);

 FUNC_0(VAR_2, VAR_3, 0);

 VAR_0->torndown = 0;
 FUNC_1(VAR_0, VAR_1);
}
