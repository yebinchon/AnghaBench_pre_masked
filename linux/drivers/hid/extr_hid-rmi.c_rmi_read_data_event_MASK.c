
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_data {int input_report_size; int wait; int flags; int readReport; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct rmi_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct rmi_data *VAR_5 = FUNC_1(VAR_2);

 if (!FUNC_4(VAR_1, &VAR_5->flags)) {
  FUNC_0(VAR_2, "no read request pending\n");
  return 0;
 }

 FUNC_2(VAR_5->readReport, VAR_3, VAR_4 < VAR_5->input_report_size ?
   VAR_4 : VAR_5->input_report_size);
 FUNC_3(VAR_0, &VAR_5->flags);
 FUNC_5(&VAR_5->wait);

 return 1;
}
