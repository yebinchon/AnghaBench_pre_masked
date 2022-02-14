
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct hd_struct {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct request_queue* queue; } ;


 struct hd_struct* FUNC_0 (struct device*) ;
 int FUNC_1 (struct request_queue*,struct hd_struct*,unsigned int*) ;
 TYPE_1__* FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (char*,char*,unsigned int,unsigned int) ;

ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct hd_struct *VAR_3 = FUNC_0(VAR_0);
 struct request_queue *VAR_4 = FUNC_2(VAR_3)->queue;
 unsigned int VAR_5[2];

 FUNC_1(VAR_4, VAR_3, VAR_5);
 return FUNC_3(VAR_2, "%8u %8u\n", VAR_5[0], VAR_5[1]);
}
