
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {TYPE_1__* curr_msg; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {unsigned char* data; unsigned int data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct smi_info*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_4,
          unsigned long VAR_5,
          void *VAR_6)
{
 struct smi_info *VAR_7 = VAR_6;
 unsigned char *VAR_8 = VAR_7->curr_msg->data;
 unsigned int VAR_9 = VAR_7->curr_msg->data_size;
 if (VAR_9 >= 8 &&
     (VAR_8[0]>>2) == VAR_3 &&
     VAR_8[1] == VAR_2 &&
     VAR_8[7] == 0x3A) {
  FUNC_0(VAR_7);
  return VAR_1;
 }
 return VAR_0;
}
