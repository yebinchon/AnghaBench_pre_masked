
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {scalar_t__ type; } ;
struct uhid_device {int report_running; int running; int report_wait; int qlock; scalar_t__ report_type; scalar_t__ report_id; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uhid_device*,struct uhid_event*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct uhid_device *VAR_3,
     struct uhid_event *VAR_4,
     __u32 *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3->qlock, VAR_6);
 *VAR_5 = ++VAR_3->report_id;
 VAR_3->report_type = VAR_4->type + 1;
 VAR_3->report_running = 1;
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(&VAR_3->qlock, VAR_6);

 VAR_7 = FUNC_3(VAR_3->report_wait,
    !VAR_3->report_running || !VAR_3->running,
    5 * VAR_2);
 if (!VAR_7 || !VAR_3->running || VAR_3->report_running)
  VAR_7 = -VAR_0;
 else if (VAR_7 < 0)
  VAR_7 = -VAR_1;
 else
  VAR_7 = 0;

 VAR_3->report_running = 0;

 return VAR_7;
}
