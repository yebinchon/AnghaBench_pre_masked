
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int major_cmd; int minor_cmd; int data_msb; int data_lsb; } ;
union delcom_packet {int data; TYPE_1__ tx; } ;
struct TYPE_5__ {int brightness; } ;
struct hidled_led {TYPE_3__* rgb; TYPE_2__ cdev; } ;
struct TYPE_6__ {int ldev; } ;


 int FUNC_0 (struct hidled_led*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hidled_led *VAR_0)
{
 union delcom_packet VAR_1 = { .tx.major_cmd = 101, .tx.minor_cmd = 34 };

 VAR_1.tx.data_lsb = FUNC_0(VAR_0);
 VAR_1.tx.data_msb = VAR_0->cdev.brightness;

 return FUNC_1(VAR_0->rgb->ldev, VAR_1.data);
}
