
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_2__* config; TYPE_1__* internal; } ;
struct TYPE_4__ {int ts1_mode; int ts2_mode; int ts1_tei; int ts2_tei; scalar_t__ ts1_clk; scalar_t__ ts2_clk; } ;
struct TYPE_3__ {int dev_ver; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stv090x_state *VAR_14)
{
 u32 VAR_15;

 if (VAR_14->internal->dev_ver >= 0x20) {
  switch (VAR_14->config->ts1_mode) {
  case 130:
  case 131:
   switch (VAR_14->config->ts2_mode) {
   case 128:
   case 129:
   default:
    FUNC_3(VAR_14, VAR_8, 0x00);
    break;

   case 130:
   case 131:
    if (FUNC_3(VAR_14, VAR_8, 0x06) < 0)
     goto err;
    VAR_15 = FUNC_2(VAR_14, VAR_3);
    FUNC_0(VAR_15, VAR_11, 3);
    if (FUNC_3(VAR_14, VAR_3, VAR_15) < 0)
     goto err;
    VAR_15 = FUNC_2(VAR_14, VAR_6);
    FUNC_0(VAR_15, VAR_11, 3);
    if (FUNC_3(VAR_14, VAR_6, VAR_15) < 0)
     goto err;
    if (FUNC_3(VAR_14, VAR_4, 0x14) < 0)
     goto err;
    if (FUNC_3(VAR_14, VAR_7, 0x28) < 0)
     goto err;
    break;
   }
   break;

  case 128:
  case 129:
  default:
   switch (VAR_14->config->ts2_mode) {
   case 128:
   case 129:
   default:
    if (FUNC_3(VAR_14, VAR_8, 0x0c) < 0)
     goto err;
    break;

   case 130:
   case 131:
    if (FUNC_3(VAR_14, VAR_8, 0x0a) < 0)
     goto err;
    break;
   }
   break;
  }
 } else {
  switch (VAR_14->config->ts1_mode) {
  case 130:
  case 131:
   switch (VAR_14->config->ts2_mode) {
   case 128:
   case 129:
   default:
    FUNC_3(VAR_14, VAR_9, 0x10);
    break;

   case 130:
   case 131:
    FUNC_3(VAR_14, VAR_9, 0x16);
    VAR_15 = FUNC_2(VAR_14, VAR_3);
    FUNC_0(VAR_15, VAR_11, 3);
    if (FUNC_3(VAR_14, VAR_3, VAR_15) < 0)
     goto err;
    VAR_15 = FUNC_2(VAR_14, VAR_3);
    FUNC_0(VAR_15, VAR_11, 0);
    if (FUNC_3(VAR_14, VAR_3, VAR_15) < 0)
     goto err;
    if (FUNC_3(VAR_14, VAR_4, 0x14) < 0)
     goto err;
    if (FUNC_3(VAR_14, VAR_7, 0x28) < 0)
     goto err;
    break;
   }
   break;

  case 128:
  case 129:
  default:
   switch (VAR_14->config->ts2_mode) {
   case 128:
   case 129:
   default:
    FUNC_3(VAR_14, VAR_9, 0x14);
    break;

   case 130:
   case 131:
    FUNC_3(VAR_14, VAR_9, 0x12);
    break;
   }
   break;
  }
 }

 switch (VAR_14->config->ts1_mode) {
 case 130:
  VAR_15 = FUNC_2(VAR_14, VAR_2);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts1_tei);
  FUNC_0(VAR_15, VAR_12, 0x00);
  FUNC_0(VAR_15, VAR_10, 0x00);
  if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
   goto err;
  break;

 case 131:
  VAR_15 = FUNC_2(VAR_14, VAR_2);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts1_tei);
  FUNC_0(VAR_15, VAR_12, 0x00);
  FUNC_0(VAR_15, VAR_10, 0x01);
  if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
   goto err;
  break;

 case 128:
  VAR_15 = FUNC_2(VAR_14, VAR_2);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts1_tei);
  FUNC_0(VAR_15, VAR_12, 0x01);
  FUNC_0(VAR_15, VAR_10, 0x00);
  if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
   goto err;
  break;

 case 129:
  VAR_15 = FUNC_2(VAR_14, VAR_2);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts1_tei);
  FUNC_0(VAR_15, VAR_12, 0x01);
  FUNC_0(VAR_15, VAR_10, 0x01);
  if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
   goto err;
  break;

 default:
  break;
 }

 switch (VAR_14->config->ts2_mode) {
 case 130:
  VAR_15 = FUNC_2(VAR_14, VAR_5);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts2_tei);
  FUNC_0(VAR_15, VAR_12, 0x00);
  FUNC_0(VAR_15, VAR_10, 0x00);
  if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
   goto err;
  break;

 case 131:
  VAR_15 = FUNC_2(VAR_14, VAR_5);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts2_tei);
  FUNC_0(VAR_15, VAR_12, 0x00);
  FUNC_0(VAR_15, VAR_10, 0x01);
  if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
   goto err;
  break;

 case 128:
  VAR_15 = FUNC_2(VAR_14, VAR_5);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts2_tei);
  FUNC_0(VAR_15, VAR_12, 0x01);
  FUNC_0(VAR_15, VAR_10, 0x00);
  if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
   goto err;
  break;

 case 129:
  VAR_15 = FUNC_2(VAR_14, VAR_5);
  FUNC_0(VAR_15, VAR_13, VAR_14->config->ts2_tei);
  FUNC_0(VAR_15, VAR_12, 0x01);
  FUNC_0(VAR_15, VAR_10, 0x01);
  if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
   goto err;
  break;

 default:
  break;
 }

 if (VAR_14->config->ts1_clk > 0) {
  u32 VAR_16;

  switch (VAR_14->config->ts1_mode) {
  case 130:
  case 131:
  default:
   VAR_16 = VAR_14->internal->mclk /
    (VAR_14->config->ts1_clk / 4);
   if (VAR_16 < 0x08)
    VAR_16 = 0x08;
   if (VAR_16 > 0xFF)
    VAR_16 = 0xFF;
   break;
  case 128:
  case 129:
   VAR_16 = VAR_14->internal->mclk /
    (VAR_14->config->ts1_clk / 32);
   if (VAR_16 < 0x20)
    VAR_16 = 0x20;
   if (VAR_16 > 0xFF)
    VAR_16 = 0xFF;
   break;
  }
  VAR_15 = FUNC_2(VAR_14, VAR_3);
  FUNC_0(VAR_15, VAR_11, 3);
  if (FUNC_3(VAR_14, VAR_3, VAR_15) < 0)
   goto err;
  if (FUNC_3(VAR_14, VAR_4, VAR_16) < 0)
   goto err;
 }

 if (VAR_14->config->ts2_clk > 0) {
  u32 VAR_17;

  switch (VAR_14->config->ts2_mode) {
  case 130:
  case 131:
  default:
   VAR_17 = VAR_14->internal->mclk /
    (VAR_14->config->ts2_clk / 4);
   if (VAR_17 < 0x08)
    VAR_17 = 0x08;
   if (VAR_17 > 0xFF)
    VAR_17 = 0xFF;
   break;
  case 128:
  case 129:
   VAR_17 = VAR_14->internal->mclk /
    (VAR_14->config->ts2_clk / 32);
   if (VAR_17 < 0x20)
    VAR_17 = 0x20;
   if (VAR_17 > 0xFF)
    VAR_17 = 0xFF;
   break;
  }
  VAR_15 = FUNC_2(VAR_14, VAR_6);
  FUNC_0(VAR_15, VAR_11, 3);
  if (FUNC_3(VAR_14, VAR_6, VAR_15) < 0)
   goto err;
  if (FUNC_3(VAR_14, VAR_7, VAR_17) < 0)
   goto err;
 }

 VAR_15 = FUNC_2(VAR_14, VAR_5);
 FUNC_0(VAR_15, VAR_1, 0x01);
 if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
  goto err;
 FUNC_0(VAR_15, VAR_1, 0x00);
 if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
  goto err;

 VAR_15 = FUNC_2(VAR_14, VAR_2);
 FUNC_0(VAR_15, VAR_1, 0x01);
 if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
  goto err;
 FUNC_0(VAR_15, VAR_1, 0x00);
 if (FUNC_3(VAR_14, VAR_2, VAR_15) < 0)
  goto err;

 return 0;
err:
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
