
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hid_report {int type; int id; } ;
struct hid_device {TYPE_1__* ll_driver; } ;
struct TYPE_2__ {int (* raw_request ) (struct hid_device*,int ,char*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (struct hid_report*,int ) ;
 int FUNC_2 (struct hid_device*,int ,char*,int,int ) ;
 int FUNC_3 (struct hid_report*,char*) ;
 int FUNC_4 (struct hid_report*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct hid_device*,int ,char*,int ,int ,int) ;

int FUNC_7(struct hid_device *VAR_4, struct hid_report *VAR_5,
  int VAR_6)
{
 char *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_5);

 if (VAR_6 == VAR_3)
  FUNC_3(VAR_5, VAR_7);

 VAR_8 = VAR_4->ll_driver->raw_request(VAR_4, VAR_5->id, VAR_7, VAR_9,
       VAR_5->type, VAR_6);
 if (VAR_8 < 0) {
  FUNC_0("unable to complete request: %d\n", VAR_8);
  goto out;
 }

 if (VAR_6 == VAR_2)
  FUNC_2(VAR_4, VAR_5->type, VAR_7, VAR_8, 0);

 VAR_8 = 0;

out:
 FUNC_5(VAR_7);
 return VAR_8;
}
