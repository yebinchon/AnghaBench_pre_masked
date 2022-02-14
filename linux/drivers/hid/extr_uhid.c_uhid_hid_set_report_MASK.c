
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {unsigned char rnum; size_t size; int id; int data; int rtype; } ;
struct TYPE_7__ {TYPE_1__ set_report; } ;
struct uhid_event {TYPE_2__ u; int type; } ;
struct TYPE_8__ {scalar_t__ err; } ;
struct TYPE_9__ {TYPE_3__ set_report_reply; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct uhid_device {int report_lock; TYPE_5__ report_buf; int running; } ;
struct hid_device {struct uhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uhid_device*,struct uhid_event*,int *) ;
 int FUNC_1 (struct uhid_event*) ;
 struct uhid_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_5, unsigned char VAR_6,
          const u8 *VAR_7, size_t VAR_8, u8 VAR_9)
{
 struct uhid_device *VAR_10 = VAR_5->driver_data;
 struct uhid_event *VAR_11;
 int VAR_12;

 if (!VAR_10->running || VAR_8 > VAR_3)
  return -VAR_0;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->type = VAR_4;
 VAR_11->u.set_report.rnum = VAR_6;
 VAR_11->u.set_report.rtype = VAR_9;
 VAR_11->u.set_report.size = VAR_8;
 FUNC_3(VAR_11->u.set_report.data, VAR_7, VAR_8);

 VAR_12 = FUNC_4(&VAR_10->report_lock);
 if (VAR_12) {
  FUNC_1(VAR_11);
  return VAR_12;
 }


 VAR_12 = FUNC_0(VAR_10, VAR_11, &VAR_11->u.set_report.id);
 if (VAR_12)
  goto unlock;

 if (VAR_10->report_buf.u.set_report_reply.err)
  VAR_12 = -VAR_0;
 else
  VAR_12 = VAR_8;

unlock:
 FUNC_5(&VAR_10->report_lock);
 return VAR_12;
}
