
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uhid_event {scalar_t__ type; } ;
struct uhid_device {scalar_t__ report_type; scalar_t__ report_id; int report_running; int qlock; int report_wait; int report_buf; } ;


 int FUNC_0 (int *,struct uhid_event const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uhid_device *VAR_0, u32 VAR_1,
    const struct uhid_event *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->qlock, VAR_3);


 if (VAR_0->report_type != VAR_2->type || VAR_0->report_id != VAR_1)
  goto unlock;
 if (!VAR_0->report_running)
  goto unlock;

 FUNC_0(&VAR_0->report_buf, VAR_2, sizeof(*VAR_2));
 VAR_0->report_running = 0;
 FUNC_3(&VAR_0->report_wait);

unlock:
 FUNC_2(&VAR_0->qlock, VAR_3);
}
