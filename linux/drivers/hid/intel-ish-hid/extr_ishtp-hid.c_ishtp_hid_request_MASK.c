
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_hid_data {int request_done; int raw_get_req; } ;
struct hostif_msg {int dummy; } ;
struct hid_report {int size; scalar_t__ id; int type; } ;
struct hid_device {struct ishtp_hid_data* driver_data; } ;


 int VAR_0 ;


 int FUNC_0 (struct hid_device*,scalar_t__,int ) ;
 int FUNC_1 (struct hid_device*,char*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct hid_report*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_1, struct hid_report *VAR_2,
 int VAR_3)
{
 struct ishtp_hid_data *VAR_4 = VAR_1->driver_data;

 unsigned int VAR_5 = ((VAR_2->size - 1) >> 3) + 1 + (VAR_2->id > 0);
 char *VAR_6;
 unsigned int VAR_7 = sizeof(struct hostif_msg);

 VAR_5 += VAR_7;

 VAR_4->request_done = 0;
 switch (VAR_3) {
 case 129:
  VAR_4->raw_get_req = 0;
  FUNC_0(VAR_1, VAR_2->id, VAR_2->type);
  break;
 case 128:




  VAR_6 = FUNC_4(VAR_5 + 7, VAR_0);
  if (!VAR_6)
   return;

  FUNC_2(VAR_2, VAR_6 + VAR_7);
  FUNC_1(VAR_1, VAR_6, VAR_5, VAR_2->id);
  FUNC_3(VAR_6);
  break;
 }
}
