
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct uhid_get_report_reply_req {int data; scalar_t__ size; scalar_t__ err; } ;
struct TYPE_5__ {unsigned char rnum; int id; int rtype; } ;
struct TYPE_6__ {TYPE_1__ get_report; } ;
struct uhid_event {TYPE_2__ u; int type; } ;
struct TYPE_7__ {struct uhid_get_report_reply_req get_report_reply; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct uhid_device {int report_lock; TYPE_4__ report_buf; int running; } ;
struct hid_device {struct uhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uhid_device*,struct uhid_event*,int *) ;
 int FUNC_1 (struct uhid_event*) ;
 struct uhid_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (size_t,size_t,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_5, unsigned char VAR_6,
          u8 *VAR_7, size_t VAR_8, u8 VAR_9)
{
 struct uhid_device *VAR_10 = VAR_5->driver_data;
 struct uhid_get_report_reply_req *VAR_11;
 struct uhid_event *VAR_12;
 int VAR_13;

 if (!VAR_10->running)
  return -VAR_0;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->type = VAR_4;
 VAR_12->u.get_report.rnum = VAR_6;
 VAR_12->u.get_report.rtype = VAR_9;

 VAR_13 = FUNC_5(&VAR_10->report_lock);
 if (VAR_13) {
  FUNC_1(VAR_12);
  return VAR_13;
 }


 VAR_13 = FUNC_0(VAR_10, VAR_12, &VAR_12->u.get_report.id);
 if (VAR_13)
  goto unlock;

 VAR_11 = &VAR_10->report_buf.u.get_report_reply;
 if (VAR_11->err) {
  VAR_13 = -VAR_0;
 } else {
  VAR_13 = FUNC_4(VAR_8, (size_t)VAR_11->size, (size_t)VAR_3);
  FUNC_3(VAR_7, VAR_11->data, VAR_13);
 }

unlock:
 FUNC_6(&VAR_10->report_lock);
 return VAR_13;
}
