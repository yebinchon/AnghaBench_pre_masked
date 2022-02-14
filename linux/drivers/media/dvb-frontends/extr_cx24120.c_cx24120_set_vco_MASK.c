
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cx24120_state {TYPE_2__* i2c; TYPE_1__* config; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
typedef int inv_vco ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int xtal_khz; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_2 (int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct cx24120_state *VAR_1)
{
 struct cx24120_cmd VAR_2;
 u32 VAR_3, VAR_4;
 u64 VAR_5;
 u32 VAR_6 = VAR_1->config->xtal_khz;

 VAR_3 = VAR_6 * 4;
 VAR_4 = VAR_3 * 10;
 VAR_5 = FUNC_0(0x400000000ULL, VAR_4);

 FUNC_2(&VAR_1->i2c->dev, "xtal=%d, vco=%d, inv_vco=%lld\n",
  VAR_6, VAR_4, VAR_5);

 VAR_2.id = VAR_0;
 VAR_2.len = 12;
 VAR_2.arg[0] = (VAR_4 >> 16) & 0xff;
 VAR_2.arg[1] = (VAR_4 >> 8) & 0xff;
 VAR_2.arg[2] = VAR_4 & 0xff;
 VAR_2.arg[3] = (VAR_5 >> 8) & 0xff;
 VAR_2.arg[4] = (VAR_5) & 0xff;
 VAR_2.arg[5] = 0x03;
 VAR_2.arg[6] = (VAR_3 >> 8) & 0xff;
 VAR_2.arg[7] = VAR_3 & 0xff;
 VAR_2.arg[8] = 0x06;
 VAR_2.arg[9] = 0x03;
 VAR_2.arg[10] = (VAR_6 >> 16) & 0xff;
 VAR_2.arg[11] = VAR_6 & 0xff;

 return FUNC_1(VAR_1, &VAR_2);
}
