
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_2__* config; TYPE_1__* internal; } ;
struct TYPE_4__ {int ts1_mode; scalar_t__ ts1_clk; } ;
struct TYPE_3__ {int dev_ver; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stv090x_state *VAR_10)
{
 u32 VAR_11;

 if (VAR_10->internal->dev_ver >= 0x20) {
  switch (VAR_10->config->ts1_mode) {
  case 130:
  case 131:
   FUNC_3(VAR_10, VAR_5, 0x00);
   break;

  case 128:
  case 129:
  default:
   FUNC_3(VAR_10, VAR_5, 0x0c);
   break;
  }
 } else {
  switch (VAR_10->config->ts1_mode) {
  case 130:
  case 131:
   FUNC_3(VAR_10, VAR_6, 0x10);
   break;

  case 128:
  case 129:
  default:
   FUNC_3(VAR_10, VAR_6, 0x14);
   break;
  }
 }

 switch (VAR_10->config->ts1_mode) {
 case 130:
  VAR_11 = FUNC_2(VAR_10, VAR_2);
  FUNC_0(VAR_11, VAR_9, 0x00);
  FUNC_0(VAR_11, VAR_7, 0x00);
  if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
   goto err;
  break;

 case 131:
  VAR_11 = FUNC_2(VAR_10, VAR_2);
  FUNC_0(VAR_11, VAR_9, 0x00);
  FUNC_0(VAR_11, VAR_7, 0x01);
  if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
   goto err;
  break;

 case 128:
  VAR_11 = FUNC_2(VAR_10, VAR_2);
  FUNC_0(VAR_11, VAR_9, 0x01);
  FUNC_0(VAR_11, VAR_7, 0x00);
  if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
   goto err;
  break;

 case 129:
  VAR_11 = FUNC_2(VAR_10, VAR_2);
  FUNC_0(VAR_11, VAR_9, 0x01);
  FUNC_0(VAR_11, VAR_7, 0x01);
  if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
   goto err;
  break;

 default:
  break;
 }

 if (VAR_10->config->ts1_clk > 0) {
  u32 VAR_12;

  switch (VAR_10->config->ts1_mode) {
  case 130:
  case 131:
  default:
   VAR_12 = VAR_10->internal->mclk /
    (VAR_10->config->ts1_clk / 4);
   if (VAR_12 < 0x08)
    VAR_12 = 0x08;
   if (VAR_12 > 0xFF)
    VAR_12 = 0xFF;
   break;
  case 128:
  case 129:
   VAR_12 = VAR_10->internal->mclk /
    (VAR_10->config->ts1_clk / 32);
   if (VAR_12 < 0x20)
    VAR_12 = 0x20;
   if (VAR_12 > 0xFF)
    VAR_12 = 0xFF;
   break;
  }
  VAR_11 = FUNC_2(VAR_10, VAR_3);
  FUNC_0(VAR_11, VAR_8, 3);
  if (FUNC_3(VAR_10, VAR_3, VAR_11) < 0)
   goto err;
  if (FUNC_3(VAR_10, VAR_4, VAR_12) < 0)
   goto err;
 }

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 FUNC_0(VAR_11, VAR_1, 0x01);
 if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
  goto err;
 FUNC_0(VAR_11, VAR_1, 0x00);
 if (FUNC_3(VAR_10, VAR_2, VAR_11) < 0)
  goto err;

 return 0;
err:
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
