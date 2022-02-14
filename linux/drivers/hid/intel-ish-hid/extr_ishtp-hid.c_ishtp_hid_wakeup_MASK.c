
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_hid_data {int request_done; int hid_wait; } ;
struct hid_device {struct ishtp_hid_data* driver_data; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hid_device *VAR_0)
{
 struct ishtp_hid_data *VAR_1 = VAR_0->driver_data;

 VAR_1->request_done = 1;
 FUNC_0(&VAR_1->hid_wait);
}
