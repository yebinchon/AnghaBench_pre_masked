
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct led_classdev {TYPE_2__* dev; } ;
struct ipaq_micro_msg {int tx_len; void** tx_data; int id; } ;
struct ipaq_micro {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {int parent; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct ipaq_micro* FUNC_1 (int ) ;
 int FUNC_2 (struct ipaq_micro*,struct ipaq_micro_msg*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_4,
    unsigned long *VAR_5,
    unsigned long *VAR_6)
{
 struct ipaq_micro *VAR_7 = FUNC_1(VAR_4->dev->parent->parent);
 struct ipaq_micro_msg VAR_8 = {
  .id = VAR_3,
  .tx_len = 4,
 };

 VAR_8.tx_data[0] = VAR_2;
 if (*VAR_5 > VAR_1 ||
     *VAR_6 > VAR_1)
  return -VAR_0;

 if (*VAR_5 == 0 && *VAR_6 == 0) {
  *VAR_5 = 100;
  *VAR_6 = 100;
 }

 VAR_8.tx_data[1] = 0;
 if (*VAR_5 >= VAR_1)
  VAR_8.tx_data[2] = 0;
 else
  VAR_8.tx_data[2] = (u8) FUNC_0(*VAR_5, 100);
 if (*VAR_6 >= VAR_1)
  VAR_8.tx_data[3] = 0;
 else
  VAR_8.tx_data[3] = (u8) FUNC_0(*VAR_6, 100);
 return FUNC_2(VAR_7, &VAR_8);
}
