
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_hid_data {size_t index; struct ishtp_cl_data* client_data; } ;
struct ishtp_cl_data {int * report_descr_size; int * report_descr; } ;
struct hid_device {struct ishtp_hid_data* driver_data; } ;


 int FUNC_0 (struct hid_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0)
{
 struct ishtp_hid_data *VAR_1 = VAR_0->driver_data;
 struct ishtp_cl_data *VAR_2 = VAR_1->client_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2->report_descr[VAR_1->index],
         VAR_2->report_descr_size[VAR_1->index]);
 if (VAR_3)
  return VAR_3;

 return 0;
}
