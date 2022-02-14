
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int data; int rtype; } ;
struct TYPE_4__ {TYPE_1__ output; } ;
struct uhid_event {TYPE_2__ u; int type; } ;
struct uhid_device {int qlock; } ;
struct hid_device {struct uhid_device* driver_data; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct uhid_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uhid_device*,struct uhid_event*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_7, __u8 *VAR_8, size_t VAR_9,
          unsigned char VAR_10)
{
 struct uhid_device *VAR_11 = VAR_7->driver_data;
 __u8 VAR_12;
 unsigned long VAR_13;
 struct uhid_event *VAR_14;

 switch (VAR_10) {
 case 129:
  VAR_12 = VAR_4;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_9 < 1 || VAR_9 > VAR_3)
  return -VAR_0;

 VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->type = VAR_5;
 VAR_14->u.output.size = VAR_9;
 VAR_14->u.output.rtype = VAR_12;
 FUNC_1(VAR_14->u.output.data, VAR_8, VAR_9);

 FUNC_2(&VAR_11->qlock, VAR_13);
 FUNC_4(VAR_11, VAR_14);
 FUNC_3(&VAR_11->qlock, VAR_13);

 return VAR_9;
}
