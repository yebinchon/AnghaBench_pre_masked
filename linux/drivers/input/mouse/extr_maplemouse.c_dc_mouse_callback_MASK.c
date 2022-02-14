
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapleq {TYPE_1__* recvbuf; struct maple_device* dev; } ;
struct maple_device {int dummy; } ;
struct input_dev {int dummy; } ;
struct dc_mouse {struct input_dev* dev; } ;
struct TYPE_2__ {unsigned char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 struct dc_mouse* FUNC_3 (struct maple_device*) ;

__attribute__((used)) static void FUNC_4(struct mapleq *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct maple_device *VAR_11 = VAR_6->dev;
 struct dc_mouse *VAR_12 = FUNC_3(VAR_11);
 struct input_dev *VAR_13 = VAR_12->dev;
 unsigned char *VAR_14 = VAR_6->recvbuf->buf;

 VAR_7 = ~VAR_14[8];
 VAR_8 = *(unsigned short *)(VAR_14 + 12) - 512;
 VAR_9 = *(unsigned short *)(VAR_14 + 14) - 512;
 VAR_10 = *(unsigned short *)(VAR_14 + 16) - 512;

 FUNC_0(VAR_13, VAR_0, VAR_7 & 4);
 FUNC_0(VAR_13, VAR_1, VAR_7 & 9);
 FUNC_0(VAR_13, VAR_2, VAR_7 & 2);
 FUNC_1(VAR_13, VAR_4, VAR_8);
 FUNC_1(VAR_13, VAR_5, VAR_9);
 FUNC_1(VAR_13, VAR_3, VAR_10);
 FUNC_2(VAR_13);
}
