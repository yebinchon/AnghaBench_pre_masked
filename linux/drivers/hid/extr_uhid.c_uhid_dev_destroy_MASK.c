
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_device {int running; int rd_data; int hid; int worker; int report_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct uhid_device *VAR_1)
{
 if (!VAR_1->running)
  return -VAR_0;

 VAR_1->running = 0;
 FUNC_3(&VAR_1->report_wait);

 FUNC_0(&VAR_1->worker);

 FUNC_1(VAR_1->hid);
 FUNC_2(VAR_1->rd_data);

 return 0;
}
