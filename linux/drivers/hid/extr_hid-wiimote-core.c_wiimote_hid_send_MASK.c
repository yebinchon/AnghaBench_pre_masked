
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {TYPE_1__* ll_driver; } ;
typedef int __u8 ;
struct TYPE_2__ {int output_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,int *,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3, __u8 *VAR_4,
       size_t VAR_5)
{
 __u8 *VAR_6;
 int VAR_7;

 if (!VAR_3->ll_driver->output_report)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);

 FUNC_1(VAR_6);
 return VAR_7;
}
