
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned char llv; unsigned char hlv; unsigned char img_lum; TYPE_3__* groups; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ features; scalar_t__ pid; } ;
struct wacom {int hdev; TYPE_4__ led; TYPE_2__ wacom_wac; } ;
struct TYPE_7__ {int select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,unsigned char*,int,int ) ;
 int FUNC_3 (int ,int ,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct wacom *VAR_16)
{
 unsigned char *VAR_17;
 int VAR_18;
 unsigned char VAR_19 = VAR_11;
 int VAR_20 = 9;

 if (!VAR_16->led.groups)
  return -VAR_1;

 if (VAR_16->wacom_wac.features.type == VAR_8)
  return -VAR_1;

 if (VAR_16->wacom_wac.pid) {
  VAR_19 = VAR_15;
  VAR_20 = 13;
 }
 else if (VAR_16->wacom_wac.features.type == VAR_6) {
  VAR_19 = VAR_14;
  VAR_20 = 51;
 }
 VAR_17 = FUNC_1(VAR_20, VAR_2);
 if (!VAR_17)
  return -VAR_0;

 if (VAR_16->wacom_wac.features.type == VAR_4) {
  VAR_17[0] = VAR_12;
  VAR_17[1] = VAR_16->led.llv;
  VAR_17[2] = VAR_16->led.groups[0].select & 0x03;

 } else if ((VAR_16->wacom_wac.features.type >= VAR_5 &&
     VAR_16->wacom_wac.features.type <= VAR_7)) {





  int VAR_21 = VAR_16->led.groups[0].select & 0x03;
  int VAR_22 = (((VAR_16->led.llv & 0x60) >> 5) - 1) & 0x03;
  int VAR_23 = 0;
  unsigned char VAR_24 = (VAR_23 << 4) | (VAR_22 << 2) | (VAR_21);

  VAR_17[0] = VAR_19;
  if (VAR_16->wacom_wac.pid) {
   FUNC_2(VAR_16->hdev, VAR_3,
      VAR_17, VAR_20, VAR_13);
   VAR_17[0] = VAR_19;
   VAR_17[4] = VAR_24;
  } else
   VAR_17[1] = VAR_24;
 }
 else if (VAR_16->wacom_wac.features.type == VAR_6) {
  VAR_17[0] = VAR_19;
  VAR_17[4] = 100;
  VAR_17[5] = 100;
  VAR_17[6] = 100;
  VAR_17[7] = 100;
  VAR_17[8] = 100;
  VAR_17[9] = VAR_16->led.llv;
  VAR_17[10] = VAR_16->led.groups[0].select & 0x03;
 }
 else {
  int VAR_25 = VAR_16->led.groups[0].select | 0x4;

  if (VAR_16->wacom_wac.features.type == VAR_9 ||
      VAR_16->wacom_wac.features.type == VAR_10)
   VAR_25 |= (VAR_16->led.groups[1].select << 4) | 0x40;

  VAR_17[0] = VAR_19;
  VAR_17[1] = VAR_25;
  VAR_17[2] = VAR_16->led.llv;
  VAR_17[3] = VAR_16->led.hlv;
  VAR_17[4] = VAR_16->led.img_lum;
 }

 VAR_18 = FUNC_3(VAR_16->hdev, VAR_3, VAR_17, VAR_20,
      VAR_13);
 FUNC_0(VAR_17);

 return VAR_18;
}
