
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ get_report_reply; } ;
struct uhid_event {TYPE_2__ u; } ;
struct uhid_device {int running; } ;


 int VAR_0 ;
 int FUNC_0 (struct uhid_device*,int ,struct uhid_event*) ;

__attribute__((used)) static int FUNC_1(struct uhid_device *VAR_1,
         struct uhid_event *VAR_2)
{
 if (!VAR_1->running)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2->u.get_report_reply.id, VAR_2);
 return 0;
}
