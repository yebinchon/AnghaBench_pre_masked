
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_data {int num_hid_devices; int cl_device; int hid_dev_count; int hid_devices; int enum_devices_done; int init_wait; } ;
struct ishtp_cl {int dummy; } ;
struct TYPE_2__ {int command; } ;
struct hostif_msg {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct ishtp_cl*,unsigned char*,int) ;
 int FUNC_4 (int ) ;
 struct ishtp_cl_data* FUNC_5 (struct ishtp_cl*) ;
 int FUNC_6 (struct hostif_msg*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ishtp_cl *VAR_4)
{
 struct hostif_msg VAR_5;
 struct ishtp_cl_data *VAR_6 = FUNC_5(VAR_4);
 int VAR_7;
 int VAR_8;


 FUNC_6(&VAR_5, 0, sizeof(struct hostif_msg));
 VAR_5.hdr.command = VAR_2;
 VAR_8 = FUNC_3(VAR_4, (unsigned char *)&VAR_5,
      sizeof(struct hostif_msg));
 if (VAR_8)
  return VAR_8;

 VAR_7 = 0;
 while (!VAR_6->enum_devices_done &&
        VAR_7 < 10) {
  FUNC_7(VAR_6->init_wait,
      VAR_6->enum_devices_done,
      3 * VAR_3);
  ++VAR_7;
  if (!VAR_6->enum_devices_done)

   VAR_8 = FUNC_3(VAR_4,
        (unsigned char *) &VAR_5,
        sizeof(struct hostif_msg));
 }
 if (!VAR_6->enum_devices_done) {
  FUNC_1(FUNC_0(VAR_6),
   "[hid-ish]: timed out waiting for enum_devices\n");
  return -VAR_1;
 }
 if (!VAR_6->hid_devices) {
  FUNC_1(FUNC_0(VAR_6),
   "[hid-ish]: failed to allocate HID dev structures\n");
  return -VAR_0;
 }

 VAR_6->num_hid_devices = VAR_6->hid_dev_count;
 FUNC_2(FUNC_4(VAR_6->cl_device),
  "[hid-ish]: enum_devices_done OK, num_hid_devices=%d\n",
  VAR_6->num_hid_devices);

 return 0;
}
